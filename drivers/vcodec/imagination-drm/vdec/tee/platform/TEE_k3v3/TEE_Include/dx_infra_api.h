/*!
 *****************************************************************************
 *
 * @File       dx_infra_api.h
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

#ifndef _DX_INFRA_API_
#define _DX_INFRA_API_

#include "tee_internal_api.h"
#ifdef CC_DRIVER
#include "dx_pal_types.h"
#endif
/**
 * @ingroup dx_infra_api
 * 无符号整型定义
 */
typedef unsigned int              DxUint32;
/**
 * @ingroup dx_infra_api
 * 无符号字符型定义
 */
typedef unsigned char             DxByte;

#ifndef CC_DRIVER
/**
 * @ingroup dx_infra_api
 * 返回结果定义
 */
typedef TEE_Result                 DxStatus;
/**
 * @ingroup dx_infra_api
 * 状态枚举定义
 */
typedef enum {
    DX_FALSE = 0,
    DX_TRUE = 1
} DxBool;
#else
/**
 * @ingroup dx_infra_api
 * 状态布尔定义
 */
typedef DxBool_t DxBool;
#endif
/**
 * @ingroup dx_infra_api
 * 连接状态枚举定义
 */
typedef enum{
    CONNECTED = 0,              /**< 0 已连接 */
    UNCONNECTED                 /**< 1 未连接 */
} EDxTzConnectionStatus_t;
/**
 * @ingroup dx_infra_api
 * 安全内存标志位 0:仅安全访问;1:非安全和安全都能访问
 */
typedef enum{
    INIT = 0,                   /**< 0 设置内存为仅安全访问 */
    TERMINATE                   /**< 1 设置内存为安全和非安全都能访问 */
} CP_Flag;
/**
 * @ingroup dx_infra_api
 * 安全内存数据结构定义
 */
typedef struct{
    DxByte*     addr;           /**< 共享内存地址 */
    DxUint32    size;           /**< 共享内存长度 */
    CP_Flag     flag;           /**< 共享内存标识 */
} ContentPath;
/**
 * @ingroup dx_infra_api
 * 安全内存的数据和地址都需要32KB对齐
 */
#define ALIGN_SIZE 0x8000 //32KB
/**
 * @ingroup  dx_infra_api
 * @brief g_dx_content_path_addr 修改DX安全内存地址全局变量
 *
 * @par 描述:
 * DX安全内存通过全局变量管理地址，该接口会对全局变量进行修改
 *
 * @attention 全局变量澹(共享内存)只有一个，不支持并发操作
 * @param contentpath [IN]  安全内存数据结构 #ContentPath
 *
 * @retval #DX_FALSE 全局变量赋值失败
 * @retval #DX_TRUE 全局变量赋值成功
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see DxTzService_InitSecureContentPath | DxTzService_TerminateSecureContentPath | DxTzService_IsSecureContentMemory
 * @since V100R002C00B302
*/
DxBool g_dx_content_path_addr(ContentPath *contentpath);
/**
 * @ingroup  dx_infra_api
 * @brief DxTzService_IsDeviceRooted 从安全侧检查设备是否被root
 *
 * @par 描述:
 * 从安全侧检查设备是否被root，如果被root则拥有root权限
 *
 * @attention 无
 * @param 无
 *
 * @retval 0 没有root
 * @retval 1 已经root
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see 无
 * @since V100R002C00B302
*/
DxUint32  DxTzService_IsDeviceRooted(void);
/**
 * @ingroup  dx_infra_api
 * @brief DxTzService_IsBootLoaderUnlocked 从安全侧检查设备bootloader是否被解锁
 *
 * @par 描述:
 * 从安全侧检查设备bootloader是否被解锁，解锁后的bootloader可以用来烧录第三方rom
 *
 * @attention 无
 * @param 无
 *
 * @retval 0 bootloader未解锁
 * @retval 1 bootloader已解锁
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see 无
 * @since V100R002C00B302
*/
DxUint32  DxTzService_IsBootLoaderUnlocked(void);
/**
 * @ingroup  dx_infra_api
 * @brief DxTzService_InitSecureContentPath 设置非安全侧传递的内存为仅安全访问
 *
 * @par 描述:
 * 设置非安全侧传递的内存为仅安全访问，非安全不能访问该地址
 *
 * @attention 无
 * @param 无
 *
 * @retval #TEE_SUCCESS 安全标志位设置成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 参数错误
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see DxTzService_TerminateSecureContentPath | DxTzService_IsSecureContentMemory
 * @since V100R002C00B302
*/
DxStatus DxTzService_InitSecureContentPath(void);
/**
 * @ingroup  dx_infra_api
 * @brief DxTzService_TerminateSecureContentPath 设置非安全侧传递的内存为安全和非安全都能访问
 *
 * @par 描述:
 * 设置非安全侧传递的内存为安全和非安全都能访问，安全侧还回安全内存，使得非安全侧可以释放
 *
 * @attention 无
 * @param 无
 *
 * @retval #TEE_SUCCESS 安全标志位设置成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 参数错误
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see DxTzService_InitSecureContentPath | DxTzService_IsSecureContentMemory
 * @since V100R002C00B302
*/
DxStatus DxTzService_TerminateSecureContentPath(void);
/**
 * @ingroup  dx_infra_api
 * @brief DxTzService_IsSecureContentMemory 在安全侧检查一段内存是否为仅安全访问
 *
 * @par 描述:
 * 在安全侧检查一段内存是否为仅安全访问
 *
 * @attention 无
 * @param mem [IN] 内存地址 #DxByte
 * @param len [IN] 内存长度 #DxUint32
 *
 * @retval #TEE_SUCCESS 安全标志位设置成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 参数错误
 *
 * @par 依赖:
 * @li dx_infra_api DX功能API
 * @li tee_internal_api.h TEE公共数据定义
 * @see DxTzService_InitSecureContentPath | DxTzService_IsSecureContentMemory
 * @since V100R002C00B302
*/
DxBool DxTzService_IsSecureContentMemory(DxByte* mem, DxUint32 len);
#endif

