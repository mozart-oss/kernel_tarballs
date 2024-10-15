/*!
 *****************************************************************************
 *
 * @File       msvdx_vec_mpeg2_reg_io2.h
 * @Description    This file contains the MSVDX_VEC_MPEG2_REG_IO2_H Definitions.
 * ---------------------------------------------------------------------------
 *
 * Copyright (c) Imagination Technologies Ltd.
 * 
 * The contents of this file are subject to the MIT license as set out below.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"), 
 * to deal in the Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the 
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
 * THE SOFTWARE.
 * 
 * Alternatively, the contents of this file may be used under the terms of the 
 * GNU General Public License Version 2 ("GPL")in which case the provisions of
 * GPL are applicable instead of those above. 
 * 
 * If you wish to allow use of your version of this file only under the terms 
 * of GPL, and not to allow others to use your version of this file under the 
 * terms of the MIT license, indicate your decision by deleting the provisions 
 * above and replace them with the notice and other provisions required by GPL 
 * as set out in the file called "GPLHEADER" included in this distribution. If 
 * you do not delete the provisions above, a recipient may use your version of 
 * this file under the terms of either the MIT license or GPL.
 * 
 * This License is also included in this distribution in the file called 
 * "MIT_COPYING".
 *
 *****************************************************************************/


#if !defined (__MSVDX_VEC_MPEG2_REG_IO2_H__)
#define __MSVDX_VEC_MPEG2_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_OFFSET		(0x060C)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_ALTERNATE_SCAN
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_MASK		(0x00000200)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_SHIFT		(9)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_ALTERNATE_SCAN_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_Q_SCALE_TYPE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_MASK		(0x00000100)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_SHIFT		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_Q_SCALE_TYPE_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_INTRA_DC_PRECISION
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_MASK		(0x000000C0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_LSBMASK		(0x00000003)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_SHIFT		(6)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_LENGTH		(2)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_DC_PRECISION_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_TOP_FIELD_FIRST
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_MASK		(0x00000020)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_SHIFT		(5)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_TOP_FIELD_FIRST_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_CONCEALMENT_MOTION_VECTORS
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_MASK		(0x00000010)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_SHIFT		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_CONCEALMENT_MOTION_VECTORS_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_FRAME_PRED_FRAME_DCT
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_MASK		(0x00000008)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_SHIFT		(3)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_FRAME_PRED_FRAME_DCT_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_PICTURE_STRUCTURE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_MASK		(0x00000006)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_LSBMASK		(0x00000003)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_SHIFT		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_LENGTH		(2)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_PICTURE_STRUCTURE_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS0, FE_INTRA_VLC_FORMAT
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_MASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS0_FE_INTRA_VLC_FORMAT_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_OFFSET		(0x0610)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS1, FE_PICTURE_CODING_TYPE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_MASK		(0x00070000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_LSBMASK		(0x00000007)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_SHIFT		(16)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_LENGTH		(3)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_PICTURE_CODING_TYPE_ENUM {
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_RESERVED3 = 0x7,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_RESERVED2 = 0x6,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_RESERVED1 = 0x5,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_D = 0x4,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_B = 0x3,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_P = 0x2,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_I = 0x1,
	MSVDX_VEC_MPEG2_FE_PICTURE_CODING_TYPE_RESERVED0 = 0x0,
};

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS1, FE_F_CODE00
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_MASK		(0x0000F000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_SHIFT		(12)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE00_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS1, FE_F_CODE01
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_MASK		(0x00000F00)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_SHIFT		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE01_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS1, FE_F_CODE10
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_MASK		(0x000000F0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_SHIFT		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE10_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_PPS1, FE_F_CODE11
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_MASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_PPS1_FE_F_CODE11_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_OFFSET		(0x0614)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SLICE, FE_SLICE_VERTICAL_POSITION_EXT
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_MASK		(0x40000000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_SHIFT		(30)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_EXT_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SLICE, FE_LAST_IN_PICTURE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_MASK		(0x20000000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_SHIFT		(29)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_LAST_IN_PICTURE_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SLICE, FE_FIRST_IN_ROW
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_MASK		(0x10000000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_SHIFT		(28)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_FIRST_IN_ROW_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SLICE, FE_SLICE_VERTICAL_POSITION_MINUS1
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_MASK		(0x0FE00000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_LSBMASK		(0x0000007F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_SHIFT		(21)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_LENGTH		(7)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_SLICE_VERTICAL_POSITION_MINUS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SLICE, FE_QUANTISER_SCALE_CODE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_MASK		(0x001F0000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_LSBMASK		(0x0000001F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_SHIFT		(16)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_LENGTH		(5)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SLICE_FE_QUANTISER_SCALE_CODE_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_OFFSET		(0x0618)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_SPS0, FE_HORIZONTAL_SIZE_MINUS1
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_MASK		(0x00FF0000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_SHIFT		(16)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_LENGTH		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_SPS0_FE_HORIZONTAL_SIZE_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_OFFSET		(0x061C)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_FE_MPS0, CR_MACROBLOCK_ADDRESS_INC
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_MASK		(0xFFFF0000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_LSBMASK		(0x0000FFFF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_SHIFT		(16)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_LENGTH		(16)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_FE_MPS0_CR_MACROBLOCK_ADDRESS_INC_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_OFFSET		(0x0650)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SPS0, BE_HORIZONTAL_SIZE_MINUS1
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_MASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_LENGTH		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS0_BE_HORIZONTAL_SIZE_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_OFFSET		(0x0654)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SPS1, BE_VERTICAL_SIZE_MINUS1
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_MASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_LENGTH		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SPS1_BE_VERTICAL_SIZE_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_OFFSET		(0x0658)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_FRAME_PRED_FRAME_DCT
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_MASK		(0x00000200)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_SHIFT		(9)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FRAME_PRED_FRAME_DCT_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_Q_SCALE_TYPE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_MASK		(0x00000100)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_SHIFT		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_Q_SCALE_TYPE_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_INTRA_DC_PRECISION
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_MASK		(0x000000C0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_LSBMASK		(0x00000003)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_SHIFT		(6)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_LENGTH		(2)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_INTRA_DC_PRECISION_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_FULL_PEL_BACKWARD
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_MASK		(0x00000020)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_SHIFT		(5)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_BACKWARD_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_FULL_PEL_FORWARD
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_MASK		(0x00000010)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_SHIFT		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_FULL_PEL_FORWARD_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS0, BE_ALTERNATE_SCAN
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_MASK		(0x00000008)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_SHIFT		(3)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS0_BE_ALTERNATE_SCAN_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_OFFSET		(0x065C)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS1, BE_F_CODE00
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_MASK		(0x0000F000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_SHIFT		(12)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE00_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS1, BE_F_CODE01
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_MASK		(0x00000F00)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_SHIFT		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE01_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS1, BE_F_CODE10
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_MASK		(0x000000F0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_SHIFT		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE10_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS1, BE_F_CODE11
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_MASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_LSBMASK		(0x0000000F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_LENGTH		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS1_BE_F_CODE11_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_OFFSET		(0x0660)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS2, BE_PICTURE_CODING_TYPE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_MASK		(0x00000070)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_LSBMASK		(0x00000007)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_SHIFT		(4)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_LENGTH		(3)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_CODING_TYPE_ENUM {
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_RESERVED3 = 0x7,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_RESERVED2 = 0x6,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_RESERVED1 = 0x5,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_D = 0x4,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_B = 0x3,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_P = 0x2,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_I = 0x1,
	MSVDX_VEC_MPEG2_BE_PICTURE_CODING_TYPE_RESERVED0 = 0x0,
};

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS2, BE_TOP_FIELD_FIRST
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_MASK		(0x00000008)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_SHIFT		(3)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_TOP_FIELD_FIRST_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS2, BE_CONCEALMENT_MOTION_VECTORS
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_MASK		(0x00000004)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_SHIFT		(2)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_CONCEALMENT_MOTION_VECTORS_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_PPS2, BE_PICTURE_STRUCTURE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_MASK		(0x00000003)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_LSBMASK		(0x00000003)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_LENGTH		(2)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_PPS2_BE_PICTURE_STRUCTURE_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_OFFSET		(0x0664)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SLICE, BE_IP_PAIR_FLAG
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_MASK		(0x00008000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_SHIFT		(15)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_IP_PAIR_FLAG_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SLICE, BE_SECOND_FIELD_FLAG
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_MASK		(0x00004000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_SHIFT		(14)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SECOND_FIELD_FLAG_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SLICE, BE_FIRST_IN_ROW
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_MASK		(0x00002000)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_LSBMASK		(0x00000001)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_SHIFT		(13)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_LENGTH		(1)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_FIRST_IN_ROW_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SLICE, BE_SLICE_VERTICAL_POSITION_MINUS1
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_MASK		(0x00001FE0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_LSBMASK		(0x000000FF)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_SHIFT		(5)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_LENGTH		(8)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_SLICE_VERTICAL_POSITION_MINUS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_MPEG2, CR_VEC_MPEG2_BE_SLICE, BE_QUANTISER_SCALE_CODE
*/
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_MASK		(0x0000001F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_LSBMASK		(0x0000001F)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_SHIFT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_LENGTH		(5)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_DEFAULT		(0)
#define MSVDX_VEC_MPEG2_CR_VEC_MPEG2_BE_SLICE_BE_QUANTISER_SCALE_CODE_SIGNED_FIELD	(IMG_FALSE)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_VEC_MPEG2_REG_IO2_H__ */
