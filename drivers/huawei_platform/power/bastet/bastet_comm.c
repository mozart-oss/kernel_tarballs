/* bastet_comm.c
 *
 * Bastet Hisilicon modem communication mudule.
 *
 * Copyright (C) 2014 Huawei Device Co.,Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <huawei_platform/power/bastet/bastet.h>
#include <huawei_platform/power/bastet/bastet_utils.h>
#include <linux/hisi/reset.h>

// FIXME! exclude drv_reset.h for declare conflict
#define __DRV_RESET___

#include "v_typdef.h"
#include "VosPidDef.h"
#include "PsCommonDef.h"
#include "BastetInit.h"
#include "RnicCtx.h"

#define THIS_FILE_ID		PS_FILE_ID_BST_COMM_C
#define BASTET_CCORE_RST_REG_NAME		"BASTET"

extern int ccorereset_regcbfunc(const char *pname, pdrv_reset_cbfun pcbfun, int userdata, int priolevel);

typedef struct
{
	VOS_MSG_HEADER
	VOS_UINT32 usLen;
	VOS_UINT8 aucValue[4];
} BASTET_MSG_STRU;

int bastet_comm_write(u8 *msg, u32 len)
{
	BASTET_MSG_STRU *pMsg = NULL;
	VOS_UINT32 ulLength = 0;

	if (NULL == msg) {
		return -1;
	}

	ulLength = sizeof(BASTET_MSG_STRU) + BST_MAX_WRITE_PAYLOAD - 4;
	pMsg = (BASTET_MSG_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(ACPU_PID_BASTET_COMM, ulLength);
	if (NULL == pMsg) {
		BASTET_LOGE("PS_ALLOC_MSG_WITH_HEADER_LEN failed");
		return -1;
	}
	pMsg->ulReceiverPid = UEPS_PID_BASTET;
	PS_MEM_CPY((VOS_VOID*)pMsg->aucValue, msg, len);

	pMsg->usLen = len;

	if (PS_SEND_MSG(ACPU_PID_BASTET_COMM, pMsg) != 0) {
		BASTET_LOGE("PS_SEND_MSG failed");
		return -1;
	}

	return 0;
}

void bastet_comm_recv(MsgBlock *pMsg)
{
	u32 len = 0;
	BASTET_MSG_STRU *pTmpMsg = (BASTET_MSG_STRU *)pMsg;

	if (NULL == pMsg) {
		BASTET_LOGE("MsgBlock is empty");
		return;
	}

	len = pTmpMsg->usLen;
	if (len > BST_MAX_WRITE_PAYLOAD) {
		len = BST_MAX_WRITE_PAYLOAD;
	}
	post_indicate_packet(BST_IND_HISICOM, pTmpMsg->aucValue, len);
}

/*
 * Get modem id and rab id.
 */
int get_modem_rab_id(struct bst_modem_rab_id *info)
{
	struct net_device *dev;
	RNIC_SPEC_CTX_STRU *spec_net_card;
	RNIC_PDP_CTX_STRU *pdp_addr;
	RNIC_NETCARD_DEV_INFO_STRU *priv;

	if (NULL == info) {
		return -EINVAL;
	}

	dev = dev_get_by_name(&init_net, cur_netdev_name);
	if (NULL == dev) {
		return -ENOENT;
	}

	priv = (RNIC_NETCARD_DEV_INFO_STRU *)netdev_priv(dev);

	spec_net_card = RNIC_GetSpecNetCardCtxAddr(priv->enRmNetId);
	pdp_addr = &spec_net_card->stPdpCtx;

	if (RNIC_PDP_REG_STATUS_ACTIVE != pdp_addr->stIpv4PdpInfo.enRegStatus) {
		BASTET_LOGE("Ipv4 pdp reg status inactive");
		return -EPERM;
	}

	info->modem_id = spec_net_card->enModemId;
	/* Bastet only running in IPv4 mode,
	 * so, get IPv4 Pdp info */
	info->rab_id = pdp_addr->stIpv4PdpInfo.ucRabId;

	return 0;
}

int bastet_ccorereset_cbfun(DRV_RESET_CB_MOMENT_E eparam, int userdata)
{
	if (MDRV_RESET_CB_BEFORE == eparam) {
		BASTET_LOGE("MDRV_RESET_CB_BEFORE");
		bastet_modem_reset_notify();
	}

	return BSP_RESET_OK;
}

/*lint -e10*/
void bastet_comm_init(void)
{
	ccorereset_regcbfunc(BASTET_CCORE_RST_REG_NAME, bastet_ccorereset_cbfun, 0, BSP_DRV_CBFUN_PRIOLEVEL);
	BASTET_CommRegRecvCallBack((RECV_MSG_PROC)bastet_comm_recv);
}
/*lint +e10*/
