﻿/*!
 *****************************************************************************
 *
 * @File       msvdx_vec_jpeg_reg_io2.h
 * @Description    This file contains the MSVDX_VEC_JPEG_REG_IO2_H Definitions.
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


#if !defined (__MSVDX_VEC_JPEG_REG_IO2_H__)
#define __MSVDX_VEC_JPEG_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_OFFSET		(0x0600)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_COMPONENTS, FE_COMPONENTS
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_MASK		(0x0000000F)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_LSBMASK		(0x0000000F)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_LENGTH		(4)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_FE_COMPONENTS_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_COMPONENTS, MAX_H
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_MASK		(0x00000070)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_SHIFT		(4)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_H_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_COMPONENTS, MAX_V
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_MASK		(0x00000700)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_SHIFT		(8)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_MAX_V_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_COMPONENTS, RESTART
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_MASK		(0x00004000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_SHIFT		(14)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_COMPONENTS_RESTART_ENUM {
	MSVDX_VEC_JPEG_RESTART_RESTART = 0x1,
	MSVDX_VEC_JPEG_RESTART_PICTURE_START = 0x0,
};

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_OFFSET		(0x0604)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_HEIGHT, FE_HEIGHT_MINUS1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_MASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_LSBMASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_LENGTH		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_HEIGHT_FE_HEIGHT_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_OFFSET		(0x0608)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_RESTART_POS, MCU_ROW_POSITION
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_MASK		(0x00001FFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_LSBMASK		(0x00001FFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_LENGTH		(13)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_ROW_POSITION_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_RESTART_POS, MCU_COLUMN_POSITION
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_MASK		(0x1FFF0000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_LSBMASK		(0x00001FFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_SHIFT		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_LENGTH		(13)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_MCU_COLUMN_POSITION_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_RESTART_POS, USE_SOFTWARE_POSITION
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_MASK		(0x00004000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_SHIFT		(14)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_RESTART_POS_USE_SOFTWARE_POSITION_ENUM {
	MSVDX_VEC_JPEG_USE_SOFTWARE_POSITION_SOFT = 0x1,
	MSVDX_VEC_JPEG_USE_SOFTWARE_POSITION_HARD = 0x0,
};

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_OFFSET		(0x060C)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_WIDTH, FE_WIDTH_MINUS1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_MASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_LSBMASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_LENGTH		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_WIDTH_FE_WIDTH_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_OFFSET		(0x0610)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, NUM_MCUS_LESS1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_MASK		(0xFFFFFF00)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_LSBMASK		(0x00FFFFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_SHIFT		(8)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_LENGTH		(24)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_NUM_MCUS_LESS1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TA3
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_MASK		(0x00000080)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_SHIFT		(7)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA3_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TD3
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_MASK		(0x00000040)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_SHIFT		(6)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD3_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TA2
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_MASK		(0x00000020)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_SHIFT		(5)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TD2
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_MASK		(0x00000010)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_SHIFT		(4)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TA1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_MASK		(0x00000008)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_SHIFT		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TD1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_MASK		(0x00000004)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_SHIFT		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TA0
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_MASK		(0x00000002)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_SHIFT		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TA0_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_ENTROPY_CODING, TD0
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_MASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_ENTROPY_CODING_TD0_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_OFFSET		(0x0620)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_V3
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_MASK		(0x70000000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_SHIFT		(28)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V3_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_H3
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_MASK		(0x07000000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_SHIFT		(24)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H3_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_V2
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_MASK		(0x00700000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_SHIFT		(20)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_H2
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_MASK		(0x00070000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_SHIFT		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_V1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_MASK		(0x00007000)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_SHIFT		(12)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_H1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_MASK		(0x00000700)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_SHIFT		(8)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_V0
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_MASK		(0x00000070)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_SHIFT		(4)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_V0_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_FE_SCALING, FE_H0
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_MASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_LSBMASK		(0x00000007)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_LENGTH		(3)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_FE_SCALING_FE_H0_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_OFFSET		(0x0650)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_HEIGHT, BE_HEIGHT_MINUS1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_MASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_LSBMASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_LENGTH		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_HEIGHT_BE_HEIGHT_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_OFFSET		(0x0654)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_WIDTH, BE_WIDTH_MINUS1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_MASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_LSBMASK		(0x0000FFFF)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_LENGTH		(16)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_WIDTH_BE_WIDTH_MINUS1_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_OFFSET		(0x0658)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_QUANTISATION, TQ3
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_MASK		(0x000000C0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_LSBMASK		(0x00000003)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_SHIFT		(6)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_LENGTH		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ3_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_QUANTISATION, TQ2
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_MASK		(0x00000030)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_LSBMASK		(0x00000003)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_SHIFT		(4)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_LENGTH		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ2_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_QUANTISATION, TQ1
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_MASK		(0x0000000C)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_LSBMASK		(0x00000003)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_SHIFT		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_LENGTH		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ1_SIGNED_FIELD	(IMG_FALSE)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_QUANTISATION, TQ0
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_MASK		(0x00000003)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_LSBMASK		(0x00000003)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_LENGTH		(2)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_QUANTISATION_TQ0_SIGNED_FIELD	(IMG_FALSE)

#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_OFFSET		(0x065C)

/* MSVDX_VEC_JPEG, CR_VEC_JPEG_BE_CONTROL, RGB
*/
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_MASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_LSBMASK		(0x00000001)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_SHIFT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_LENGTH		(1)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_DEFAULT		(0)
#define MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_SIGNED_FIELD	(IMG_FALSE)

enum MSVDX_VEC_JPEG_CR_VEC_JPEG_BE_CONTROL_RGB_ENUM {
	MSVDX_VEC_JPEG_RGB_RGB = 0x1,
	MSVDX_VEC_JPEG_RGB_YCBCR = 0x0,
};



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_VEC_JPEG_REG_IO2_H__ */
