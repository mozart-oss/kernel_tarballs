/*!
 *****************************************************************************
 *
 * @File       tee_time_api.h
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

#ifndef __TEE_TIME_API_H
#define __TEE_TIME_API_H

#include "tee_internal_api.h"

#define TEE_TIMEOUT_INFINITE (0xFFFFFFFF)

typedef struct{
    uint32_t seconds;
    uint32_t millis;
}TEE_Time;

typedef struct {
    uint32_t type;      //定时器类型
    uint32_t timer_id;  //定时器ID
    uint32_t timer_class;
    uint32_t reserved2;
}TEE_timer_property;


void get_sys_rtc_time(TEE_Time *time);

void TEE_GetSystemTime(TEE_Time* time);

TEE_Result TEE_Wait(uint32_t timeout);

TEE_Result TEE_GetTAPersistentTime(TEE_Time* time);

TEE_Result TEE_SetTAPersistentTime(TEE_Time* time);

void TEE_GetREETime(TEE_Time* time);

/**
 * @ingroup  TEE_EXT_TIMER_API
 * @brief 创建一个安全时钟
 *
 * @par 描述:
 * 创建一个安全时钟
 *
 * @attention 无
 * @param time_seconds [IN]   安全时间时长
 * @param timer_property [IN]  安全时间类型type
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_BAD_PARAMETERS:   入参错误
 * @retval #TEE_ERROR_OUT_OF_MEMORY 内存不足
 * @retval #TEE_ERROR_TIMER_CREATE_FAILED timer创建失败
 *
 * @par 依赖:
 * @li tee_timer_api.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result  TEE_EXT_CreateTimer(uint32_t time_seconds,   TEE_timer_property * timer_property);

/**
 * @ingroup  TEE_EXT_TIMER_API
 * @brief 销毁一个安全时钟
 *
 * @par 描述:
 * 销毁一个安全时钟
 *
 * @attention 无
 * @param timer_property [IN]  安全时间类型type
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_TIMER_NOT_FOUND:   timer不存在
 * @retval #TEE_ERROR_TIMER_DESTORY_FAILED timer销毁失败
 *
 * @par 依赖:
 * @li tee_timer_api.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result  TEE_EXT_DestoryTimer(TEE_timer_property * timer_property);

/**
 * @ingroup  TEE_EXT_TIMER_API
 * @brief 获取timer定时时间
 *
 * @par 描述:
 * 获取timer定时时间
 *
 * @attention 无
 * @param timer_property [IN]  安全时间类型type
 * @param time_seconds [OUT]  安全时间
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_TIMER_NOT_FOUND:   timer不存在
 *
 * @par 依赖:
 * @li tee_timer_api.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result  TEE_EXT_GetTimerExpire (TEE_timer_property * timer_property, uint32_t* time_seconds);

/**
 * @ingroup  TEE_EXT_TIMER_API
 * @brief 获取timer定时剩余时间
 *
 * @par 描述:
 * 获取timer定时剩余时间
 *
 * @attention 无
 * @param timer_property [IN]  安全时间类型type
 * @param time_seconds [OUT]  安全时间
 *
 * @retval #TEE_SUCCESS 表示该函数执行成功
 * @retval #TEE_ERROR_TIMER_NOT_FOUND:   timer不存在
 *
 * @par 依赖:
 * @li tee_timer_api.h：该接口声明所在的头文件。
 * @since TrustedCore V100R005C00
*/
TEE_Result  TEE_EXT_GetTimerRemain (TEE_timer_property * timer_property, uint32_t* time_seconds);

#endif
