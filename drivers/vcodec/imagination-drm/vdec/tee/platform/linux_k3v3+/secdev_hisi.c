/*!
 *****************************************************************************
 *
 * @File       secdev_hisi.c
 * @Description    This file contains the kernel mode implementation of the
 *  memory-mapped device interface.
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

#include <linux/version.h>
#include <linux/module.h>
#include <linux/kobject.h>
#include <linux/pci.h>
#include <linux/mm.h>
#include <linux/platform_device.h>
#include <linux/clk.h>
#include <asm/io.h>
#include <asm/page.h>

#include <img_defs.h>
#include <target.h>
#include <sysos_api.h>
#include <secure_device.h>

// MSVDX hardware
#include <vxd_msvdx.h>

// Hard coded register location
static void *gpvRegAddr = NULL;
static IMG_PHYSADDR gpaRegAddr = 0xe8910000;
static IMG_UINT32 gui32RegSize = 0x10000;

//Device information
static TARGET_sTargetConfig		gsFullInfo;


/*!
******************************************************************************
 @Function				SECDEV_Initialise

******************************************************************************/
static IMG_RESULT SECDEV_Initialise(IMG_VOID)
{
    IMG_UINT32 ui32Result;

    printk(KERN_INFO "%s\n", __FUNCTION__);

    ui32Result = SYSOS_SEC_Initialise();
    if (ui32Result != IMG_SUCCESS) {
        printk(KERN_ERR "%s failed to initialise sysos (error:%d)\n", __FUNCTION__, ui32Result);
        return IMG_ERROR_GENERIC_FAILURE;
    }

    gpvRegAddr = ioremap(gpaRegAddr, gui32RegSize);
    if (!gpvRegAddr) {
        printk(KERN_ERR "%s failed to ioremap registers\n", __FUNCTION__);
        return IMG_ERROR_GENERIC_FAILURE;
    }
    printk(KERN_INFO "TEE ioremap registers. phys 0x%llx virt 0x%p\n", gpaRegAddr, gpvRegAddr);

    gsFullInfo = gsTargetConfig;

    if (gsFullInfo.psWrapperControl) {
        gsFullInfo.psWrapperControl->ui32HostTargetCycleRatio = asDevice[0].ui32HostTargetRatio;
        gsFullInfo.psWrapperControl->ui32Flags = asDevice[0].ui32WrapFlags;
    }

    gsFullInfo.psPciInterface = &sPciInterface;

	return IMG_SUCCESS;
}


/*!
******************************************************************************

 @Function				SECDEV_DeInitialise

******************************************************************************/
static IMG_VOID SECDEV_DeInitialise(IMG_VOID)
{
    printk(KERN_INFO "%s\n", __FUNCTION__);

    if (gpvRegAddr) {
        printk(KERN_INFO "TEE iounmap registers 0x%p\n", gpvRegAddr);
        iounmap(gpvRegAddr);
        gpvRegAddr = IMG_NULL;
    }

    SYSOS_SEC_Deinitialise();
}


/*!
******************************************************************************

 @Function				SECDEV_GetRegisterInfo

******************************************************************************/
IMG_VOID SECDEV_GetRegisterInfo(
	IMG_VOID **         ppvKmMemory,
	IMG_UINT32 *        pui32Size
)
{
	*ppvKmMemory = gpvRegAddr;
	*pui32Size = gui32RegSize;
}


/*****************************************************************************
                      Linux kernel mode section
******************************************************************************/

module_init(SECDEV_Initialise);
module_exit(SECDEV_DeInitialise);

MODULE_AUTHOR("Imagination Technologies");
MODULE_DESCRIPTION("Trusted execution environment reference for MSVDX cores");
MODULE_SUPPORTED_DEVICE("");
MODULE_VERSION("0.1.0");
//MODULE_LICENSE("Proprietary");
MODULE_LICENSE("GPL");
