/*!
 *****************************************************************************
 *
 * @File       rpmb_fcntl.h
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

#ifndef _RPMB_FCNTL_H
#define _RPMB_FCNTL_H

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储初始化
 *
 * @par 描述:
 * 分区初始化，执行写RPMB Key和格式化操作
 *
 * @attention 该函数只需执行一次
 * @param 无
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_RPMB_GENERIC RPMB控制器通用错误
 * @retval #TEE_ERROR_RPMB_MAC_FAIL RPMB控制器MAC校验错误
 * @retval #TEE_ERROR_RPMB_RESP_UNEXPECT_MAC RPMB应答数据的MAC校验错误
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Init(void);

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储格式化
 *
 * @par 描述:
 * RPMB安全存储格式化操作
 *
 * @attention 无
 * @param 无
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_RPMB_GENERIC RPMB控制器通用错误
 * @retval #TEE_ERROR_RPMB_MAC_FAIL RPMB控制器MAC校验错误
 * @retval #TEE_ERROR_RPMB_RESP_UNEXPECT_MAC RPMB应答数据的MAC校验错误
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Format(void);

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储存储文件
 *
 * @par 描述:
 * RPMB安全存储存储文件
 *
 * @attention 无
 * @param filename [IN]  写入数据的文件名
 * @param buf [IN]  写入数据的缓冲区
 * @param size [IN]  写入数据的大小
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 输入参数有误，或文件名长度超过96字节
 * @retval #TEE_ERROR_RPMB_NOSPC RPMB分区磁盘空间不足
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Write(const char *filename, uint8_t *buf, size_t size);

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储读取文件
 *
 * @par 描述:
 * RPMB安全存储读取文件
 *
 * @attention 无
 * @param filename [IN]  读取数据的文件名
 * @param buf [IN]  读取数据的缓冲区
 * @param size [IN]  读取数据的大小
 * @param count [OUT]  实际读取数据的大小
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 输入参数有误，或文件名长度超过96字节
 * @retval #TEE_ERROR_RPMB_FILE_NOT_FOUND 文件不存在
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Read(const char *filename, uint8_t *buf, size_t size, uint32_t *count);

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储重命名文件
 *
 * @par 描述:
 * RPMB安全存储重命名文件
 *
 * @attention 无
 * @param old_name [IN]  旧文件名
 * @param new_name [IN]  新文件名
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 输入参数有误，或文件名长度超过96字节
 * @retval #TEE_ERROR_RPMB_FILE_NOT_FOUND 旧文件不存在
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Rename(const char *old_name, const char *new_name);

/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储删除文件
 *
 * @par 描述:
 * RPMB安全存储删除文件
 *
 * @attention 无
 * @param filename [IN]  待删除的文件名
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 输入参数有误，或文件名长度超过96字节
 * @retval #TEE_ERROR_RPMB_FILE_NOT_FOUND 文件不存在
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Rm(const char *filename);

/**
 * @ingroup  TEE_RPMB_API
 *
 * 存储于RPMB分区的文件状态，用于#TEE_RPMB_FS_Stat函数 \n
*/
struct rpmb_fs_stat {
    uint32_t size;    /**< 文件大小  */
    uint32_t reserved;    /**< 预留  */
};
/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储获取文件状态
 *
 * @par 描述:
 * RPMB安全存储获取文件状态
 *
 * @attention 无
 * @param filename [IN]  文件名
 * @param stat [OUT]  获取的文件状态信息
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS 输入参数有误，或文件名长度超过96字节
 * @retval #TEE_ERROR_RPMB_FILE_NOT_FOUND 文件不存在
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result TEE_RPMB_FS_Stat(const char *filename, struct rpmb_fs_stat *stat);

/**
 * @ingroup  TEE_RPMB_API
 *
 * RPMB Key的状态，用于#TEE_RPMB_KEY_Status函数 \n
*/
enum TEE_RPMB_KEY_STAT {
    TEE_RPMB_KEY_INVALID = 0x0,
    TEE_RPMB_KEY_SUCCESS = 0x1,    /**< RPMB Key已写入且匹配正确  */
    TEE_RPMB_KEY_NOT_PROGRAM,    /**< RPMB Key未写入  */
    TEE_RPMB_KEY_NOT_MATCH,        /**< RPMB Key已写入但匹配失败  */
};
/**
 * @ingroup  TEE_RPMB_API
 * @brief RPMB安全存储获取RPMB Key状态
 *
 * @par 描述:
 * RPMB安全存储获取RPMB Key状态
 *
 * @attention 无
 * @param 无
 *
 * @retval #TEE_RPMB_KEY_SUCCESS RPMB Key已写入且匹配正确
 * @retval #TEE_RPMB_KEY_NOT_PROGRAM RPMB Key未写入
 * @retval #TEE_RPMB_KEY_NOT_MATCH RPMB Key已写入但匹配失败
 * @retval #TEE_RPMB_KEY_INVALID RPMB Key状态无效
 *
 * @par 依赖:
 * @li rpmb_fcntl.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
uint32_t TEE_RPMB_KEY_Status(void);

#endif //_RPMB_FCNTL_H



