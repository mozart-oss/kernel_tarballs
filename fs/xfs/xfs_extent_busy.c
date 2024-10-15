/*
 * Copyright (c) 2000-2002,2005 Silicon Graphics, Inc.
 * Copyright (c) 2010 David Chinner.
 * Copyright (c) 2011 Christoph Hellwig.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include "xfs.h"
#include "xfs_fs.h"
#include "xfs_types.h"
#include "xfs_log.h"
#include "xfs_trans.h"
#include "xfs_sb.h"
#include "xfs_ag.h"
#include "xfs_mount.h"
#include "xfs_bmap_btree.h"
#include "xfs_alloc.h"
#include "xfs_inode.h"
#include "xfs_extent_busy.h"
#include "xfs_trace.h"

void
xfs_extent_busy_insert(
	struct xfs_trans	*tp,
	xfs_agnumber_t		agno,
	xfs_agblock_t		bno,
	xfs_extlen_t		len,
	unsigned int		flags)
{
	struct xfs_extent_busy	*new;
	struct xfs_extent_busy	*busyp;
	struct xfs_perag	*pag;
	struct rb_node		**rbp;
	struct rb_node		*parent = NULL;

	new = kmem_zalloc(sizeof(struct xfs_extent_busy), KM_MAYFAIL);
	if (!new) {
		/*
		 * No Memory!  Since it is now not possible to track the free
		 * block, make this a synchronous transaction to insure that
		 * the block is not reused before this transaction commits.
		 */
		trace_xfs_extent_busy_enomem(tp->t_mountp, agno, bno, len);
		xfs_trans_set_sync(tp);
		return;
	}

	new->agno = agno;
	new->bno = bno;
	new->length = len;
	INIT_LIST_HEAD(&new->list);
	new->flags = flags;

	/* trace before insert to be able to see failed inserts */
	trace_xfs_extent_busy(tp->t_mountp, agno, bno, len);

	pag = xfs_perag_get(tp->t_mountp, new->agno);
	spin_lock(&pag->pagb_lock);
	rbp = &pag->pagb_tree.rb_node;
	while (*rbp) {
		parent = *rbp;
		busyp = rb_entry(parent, struct xfs_extent_busy, rb_node);

		if (new->bno < busyp->bno) {
			rbp = &(*rbp)->rb_left;
			ASSERT(new->bno + new->length <= busyp->bno);
		} else if (new->bno > busyp->bno) {
			rbp = &(*rbp)->rb_right;
			ASSERT(bno >= busyp->bno + busyp->length);
		} else {
			ASSERT(0);
		}
	}

	rb_link_node(&new->rb_node, parent, rbp);
	rb_insert_color(&new->rb_node, &pag->pagb_tree);

	list_add(&new->list, &tp->t_busy);
	spin_unlock(&pag->pagb_lock);
	xfs_perag_put(pag);
}

/*
 * Search for a busy extent within the range of the extent we are about to
 * allocate.  You need to be holding the busy extent tree lock when calling
 * xfs_extent_busy_search(). This function returns 0 for no overlapping busy
 * extent, -1 for an overlapping but not exact busy extent, and 1 for an exact
 * match. This is done so that a non-zero return indicates an overlap that
 * will require a synchronous transaction, but it can still be
 * used to distinguish between a partial or exact match.
 */
int
xfs_extent_busy_search(
	struct xfs_mount	*mp,
	xfs_agnumber_t		agno,
	xfs_agblock_t		bno,
	xfs_extlen_t		len)
{
	struct xfs_perag	*pag;
	struct rb_node		*rbp;
	struct xfs_extent_busy	*busyp;
	int			match = 0;

	pag = xfs_perag_get(mp, agno);
	spin_lock(&pag->pagb_lock);

	rbp = pag->pagb_tree.rb_node;

	/* find closest start bno overlap */
	while (rbp) {
		busyp = rb_entry(rbp, struct xfs_extent_busy, rb_node);
		if (bno < busyp->bno) {
			/* may overlap, but exact start block is lower */
			if (bno + len > busyp->bno)
				match = -1;
			rbp = rbp->rb_left;
		} else if (bno > busyp->bno) {
			/* may overlap, but exact start block is higher */
			if (bno < busyp->bno + busyp->length)
				match = -1;
			rbp = rbp->rb_right;
		} else {
			/* bno matches busyp, length determines exact match */
			match = (busyp->length == len) ? 1 : -1;
			break;
		}
	}
	spin_unlock(&pag->pagb_lock);
	xfs_perag_put(pag);
	return match;
}

/*
 * The found free extent [fbno, fend] overlaps part or all of the given busy
 * extent.  If the overlap covers the beginning, the end, or all of the busy
 * extent, the overlapping portion can be made unbusy and used for the
 * allocation.  We can't split a busy extent because we can't modify a
 * transaction/CIL context busy list, but we can update an entries block
 * number or length.
 *
 * Returns true if the extent can safely be reused, or false if the search
 * needs to be restarted.
 */
STATIC bool
xfs_extent_busy_update_extent(
	struct xfs_mount	*mp,
	struct xfs_perag	*pag,
	struct xfs_extent_busy	*busyp,
	xfs_agblock_t		fbno,
	xfs_extlen_t		flen,
	bool			userdata)
{
	xfs_agblock_t		fend = fbno + flen;
	xfs_agblock_t		bbno = busyp->bno;
	xfs_agblock_t		bend = bbno + busyp->length;

	/*
	 * This extent is currently being discarded.  Give the thread
	 * performing the discard a chance to mark the extent unbusy
	 * and retry.
	 */
	if (busyp->flags & XFS_EXTENT_BUSY_DISCARDED) {
		spin_unlock(&pag->pagb_lock);
		delay(1);
		spin_lock(&pag->pagb_lock);
		return false;
	}

	/*
	 * If there is a busy extent overlapping a user allocation, we have
	 * no choice but to force the log and retry the search.
	 *
	 * Fortunately this does not happen during normal operation, but
	 * only if the filesystem is very low on space and has to dip into
	 * the AGFL for normal allocations.
	 */
	if (userdata)
		goto out_force_log;

	if (bbno < fbno && bend > fend) {
		/*
		 * Case 1:
		 *    bbno           bend
		 *    +BBBBBBBBBBBBBBBBB+
		 *        +---------+
		 *        fbno   fend
		 */

		/*
		 * We would have to split the busy extent to be able to track
		 * it correct, which we cannot do because we would have to
		 * modify the list of busy extents attached to the transaction
		 * or CIL context, which is immutable.
		 *
		 * Force out the log to clear the busy extent and retry the
		 * search.
		 */
		goto out_force_log;
	} else if (bbno >= fbno && bend <= fend) {
		/*
		 * Case 2:
		 *    bbno           bend
		 *    +BBBBBBBBBBBBBBBBB+
		 *    +-----------------+
		 *    fbno           fend
		 *
		 * Case 3:
		 *    bbno           bend
		 *    +BBBBBBBBBBBBBBBBB+
		 *    +--------------------------+
		 *    fbno                    fend
		 *
		 * Case 4:
		 *             bbno           bend
		 *             +BBBBBBBBBBBBBBBBB+
		 *    +--------------------------+
		 *    fbno                    fend
		 *
		 * Case 5:
		 *             bbno           bend
		 *             +BBBBBBBBBBBBBBBBB+
		 *    +-----------------------------------+
		 *    fbno                             fend
		 *
		 */

		/*
		 * The busy extent is fully covered by the extent we are
		 * allocating, and can simply be removed from the rbtree.
		 * However we cannot remove it from the immutable list
		 * tracking busy extents in the transaction or CIL context,
		 * so set the length to zero to mark it invalid.
		 *
		 * We also need to restart the busy extent search from the
		 * tree root, because erasing the node can rearrange the
		 * tree topology.
		 */
		rb_erase(&busyp->rb_node, &pag->pagb_tree);
		busyp->length = 0;
		return false;
	} else if (fend < bend) {
		/*
		 * Case 6:
		 *              bbno           bend
		 *             +BBBBBBBBBBBBBBBBB+
		 *             +---------+
		 *             fbno   fend
		 *
		 * Case 7:
		 *             bbno           bend
		 *             +BBBBBBBBBBBBBBBBB+
		 *    +------------------+
		 *    fbno            fend
		 *
		 */
		busyp->bno = fend;
	} else if (bbno < fbno) {
		/*
		 * Case 8:
		 *    bbno           bend
		 *    +BBBBBBBBBBBBBBBBB+
		 *        +-------------+
		 *        fbno       fend
		 *
		 * Case 9:
		 *    bbno           bend
		 *    +BBBBBBBBBBBBBBBBB+
		 *        +----------------------+
		 *        fbno                fend
		 */
		busyp->length = fbno - busyp->bno;
	} else {
		ASSERT(0);
	}

	trace_xfs_extent_busy_reuse(mp, pag->pag_agno, fbno, flen);
	return true;

out_force_log:
	spin_unlock(&pag->pagb_lock);
	xfs_log_force(mp, XFS_LOG_SYNC);
	trace_xfs_extent_busy_force(mp, pag->pag_agno, fbno, flen);
	spin_lock(&pag->pagb_lock);
	return false;
}


/*
 * For a given extent [fbno, flen], make sure we can reuse it safely.
 */
void
xfs_extent_busy_reuse(
	struct xfs_mount	*mp,
	xfs_agnumber_t		agno,
	xfs_agblock_t		fbno,
	xfs_extlen_t		flen,
	bool			userdata)
{
	struct xfs_perag	*pag;
	struct rb_node		*rbp;

	ASSERT(flen > 0);

	pag = xfs_perag_get(mp, agno);
	spin_lock(&pag->pagb_lock);
restart:
	rbp = pag->pagb_tree.rb_node;
	while (rbp) {
		struct xfs_extent_busy *busyp =
			rb_entry(rbp, struct xfs_extent_busy, rb_node);
		xfs_agblock_t	bbno = busyp->bno;
		xfs_agblock_t	bend = bbno + busyp->length;

		if (fbno + flen <= bbno) {
			rbp = rbp->rb_left;
			continue;
		} else if (fbno >= bend) {
			rbp = rbp->rb_right;
			continue;
		}

		if (!xfs_extent_busy_update_extent(mp, pag, busyp, fbno, flen,
						  userdata))
			goto restart;
	}
	spin_unlock(&pag->pagb_lock);
	xfs_perag_put(pag);
}

/*
 * For a given extent [fbno, flen], search the busy extent list to find a
 * subset of the extent that is not busy.  If *rlen is smaller than
 * args->minlen no suitable extent could be found, and the higher level
 * code needs to force out the log and retry the allocation.
 */
void
xfs_extent_busy_trim(
	struct xfs_alloc_arg	*args,
	xfs_agblock_t		bno,
	xfs_extlen_t		len,
	xfs_agblock_t		*rbno,
	xfs_extlen_t		*rlen)
{
	xfs_agblock_t		fbno;
	xfs_extlen_t		flen;
	struct rb_node		*rbp;

	ASSERT(len > 0);

	spin_lock(&args->pag->pagb_lock);
restart:
	fbno = bno;
	flen = len;
	rbp = args->pag->pagb_tree.rb_node;
	while (rbp && flen >= args->minlen) {
		struct xfs_extent_busy *busyp =
			rb_entry(rbp, struct xfs_extent_busy, rb_node);
		xfs_agblock_t	fend = fbno + flen;
		xfs_agblock_t	bbno = busyp->bno;
		xfs_agblock_t	bend = bbno + busyp->length;

		if (fend <= bbno) {
			rbp = rbp->rb_left;
			continue;
		} else if (fbno >= bend) {
			rbp = rbp->rb_right;
			continue;
		}

		/*
		 * If this is a metadata allocation, try to reuse the busy
		 * extent instead of trimming the allocation.
		 */
		if (!args->userdata &&
		    !(busyp->flags & XFS_EXTENT_BUSY_DISCARDED)) {
			if (!xfs_extent_busy_update_extent(args->mp, args->pag,
							  busyp, fbno, flen,
							  false))
				goto restart;
			continue;
		}

		if (bbno <= fbno) {
			/* start overlap */

			/*
			 * Case 1:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *        +---------+
			 *        fbno   fend
			 *
			 * Case 2:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *    +-------------+
			 *    fbno       fend
			 *
			 * Case 3:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *        +-------------+
			 *        fbno       fend
			 *
			 * Case 4:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *    +-----------------+
			 *    fbno           fend
			 *
			 * No unbusy region in extent, return failure.
			 */
			if (fend <= bend)
				goto fail;

			/*
			 * Case 5:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *        +----------------------+
			 *        fbno                fend
			 *
			 * Case 6:
			 *    bbno           bend
			 *    +BBBBBBBBBBBBBBBBB+
			 *    +--------------------------+
			 *    fbno                    fend
			 *
			 * Needs to be trimmed to:
			 *                       +-------+
			 *                       fbno fend
			 */
			fbno = bend;
		} else if (bend >= fend) {
			/* end overlap */

			/*
			 * Case 7:
			 *             bbno           bend
			 *             +BBBBBBBBBBBBBBBBB+
			 *    +------------------+
			 *    fbno            fend
			 *
			 * Case 8:
			 *             bbno           bend
			 *             +BBBBBBBBBBBBBBBBB+
			 *    +--------------------------+
			 *    fbno                    fend
			 *
			 * Needs to be trimmed to:
			 *    +-------+
			 *    fbno fend
			 */
			fend = bbno;
		} else {
			/* middle overlap */

			/*
			 * Case 9:
			 *             bbno           bend
			 *             +BBBBBBBBBBBBBBBBB+
			 *    +-----------------------------------+
			 *    fbno                             fend
			 *
			 * Can be trimmed to:
			 *    +-------+        OR         +-------+
			 *    fbno fend                   fbno fend
			 *
			 * Backward allocation leads to significant
			 * fragmentation of directories, which degrades
			 * directory performance, therefore we always want to
			 * choose the option that produces forward allocation
			 * patterns.
			 * Preferring the lower bno extent will make the next
			 * request use "fend" as the start of the next
			 * allocation;  if the segment is no longer busy at
			 * that point, we'll get a contiguous allocation, but
			 * even if it is still busy, we will get a forward
			 * allocation.
			 * We try to avoid choosing the segment at "bend",
			 * because that can lead to the next allocation
			 * taking the segment at "fbno", which would be a
			 * backward allocation.  We only use the segment at
			 * "fbno" if it is much larger than the current
			 * requested size, because in that case there's a
			 * good chance subsequent allocations will be
			 * contiguous.
			 */
			if (bbno - fbno >= args->maxlen) {
				/* left candidate fits perfect */
				fend = bbno;
			} else if (fend - bend >= args->maxlen * 4) {
				/* right candidate has enough free space */
				fbno = bend;
			} else if (bbno - fbno >= args->minlen) {
				/* left candidate fits minimum requirement */
				fend = bbno;
			} else {
				goto fail;
			}
		}

		flen = fend - fbno;
	}
	spin_unlock(&args->pag->pagb_lock);

	if (fbno != bno || flen != len) {
		trace_xfs_extent_busy_trim(args->mp, args->agno, bno, len,
					  fbno, flen);
	}
	*rbno = fbno;
	*rlen = flen;
	return;
fail:
	/*
	 * Return a zero extent length as failure indications.  All callers
	 * re-check if the trimmed extent satisfies the minlen requirement.
	 */
	spin_unlock(&args->pag->pagb_lock);
	trace_xfs_extent_busy_trim(args->mp, args->agno, bno, len, fbno, 0);
	*rbno = fbno;
	*rlen = 0;
}

STATIC void
xfs_extent_busy_clear_one(
	struct xfs_mount	*mp,
	struct xfs_perag	*pag,
	struct xfs_extent_busy	*busyp)
{
	if (busyp->length) {
		trace_xfs_extent_busy_clear(mp, busyp->agno, busyp->bno,
						busyp->length);
		rb_erase(&busyp->rb_node, &pag->pagb_tree);
	}

	list_del_init(&busyp->list);
	kmem_free(busyp);
}

/*
 * Remove all extents on the passed in list from the busy extents tree.
 * If do_discard is set skip extents that need to be discarded, and mark
 * these as undergoing a discard operation instead.
 */
void
xfs_extent_busy_clear(
	struct xfs_mount	*mp,
	struct list_head	*list,
	bool			do_discard)
{
	struct xfs_extent_busy	*busyp, *n;
	struct xfs_perag	*pag = NULL;
	xfs_agnumber_t		agno = NULLAGNUMBER;

	list_for_each_entry_safe(busyp, n, list, list) {
		if (busyp->agno != agno) {
			if (pag) {
				spin_unlock(&pag->pagb_lock);
				xfs_perag_put(pag);
			}
			pag = xfs_perag_get(mp, busyp->agno);
			spin_lock(&pag->pagb_lock);
			agno = busyp->agno;
		}

		if (do_discard && busyp->length &&
		    !(busyp->flags & XFS_EXTENT_BUSY_SKIP_DISCARD))
			busyp->flags = XFS_EXTENT_BUSY_DISCARDED;
		else
			xfs_extent_busy_clear_one(mp, pag, busyp);
	}

	if (pag) {
		spin_unlock(&pag->pagb_lock);
		xfs_perag_put(pag);
	}
}

/*
 * Callback for list_sort to sort busy extents by the AG they reside in.
 */
int
xfs_extent_busy_ag_cmp(
	void			*priv,
	struct list_head	*a,
	struct list_head	*b)
{
	return container_of(a, struct xfs_extent_busy, list)->agno -
		container_of(b, struct xfs_extent_busy, list)->agno;
}
