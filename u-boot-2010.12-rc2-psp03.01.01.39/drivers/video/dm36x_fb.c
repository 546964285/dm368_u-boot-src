#include <common.h>

#if defined(CONFIG_VIDEO_DM36X)
#include <video_fb.h>
#include "videomodes.h"
#include <asm/arch/video_def.h>
#include <asm/arch/hardware.h> // for REG()


GraphicDevice smi;
#define VIDEO_MEM_SIZE 0x200000

void *video_hw_init (void)
{
    debug ("@ in video_hw_init()\n");
    
    GraphicDevice *pGD = (GraphicDevice *)&smi;
    struct ctfb_res_modes *res_mode;

    res_mode->xres = 640;
    res_mode->yres = 480;
    res_mode->pixclock = 75000; // 13.5MHz
    res_mode->left_margin = 80; // VENC_HSTART
    res_mode->right_margin = 48;
    res_mode->upper_margin = 3;
    res_mode->lower_margin = 8;
    res_mode->hsync_len = 32;
    res_mode->vsync_len = 4;
    res_mode->sync = 0;
    res_mode->vmode = FB_VMODE_NONINTERLACED;

     /* fill in Graphic device struct */
    pGD->frameAdrs = LCD_VIDEO_ADDR;
    pGD->memSize = VIDEO_MEM_SIZE;
    /* clear video memory */
    memset((void *)pGD->frameAdrs, 0x00, pGD->memSize);
    //memset((void *)pGD->frameAdrs, 0xe0, pGD->memSize);//red background

    pGD->winSizeX = 640;
    pGD->plnSizeX = 640;
    res_mode->xres = 640;
    pGD->winSizeY = pGD->plnSizeY = res_mode->yres;
    pGD->gdfBytesPP = 2;
    pGD->gdfIndex = GDF_16BIT_565RGB;

    debug ("res_mode->xres=%d\n",res_mode->xres);
    debug ("pGD->winSizeX=%d\n",pGD->winSizeX);
    debug ("pGD->winSizeY=%d\n",pGD->winSizeY);
    debug ("pGD->plnSizeX=%d\n",pGD->plnSizeX);
    debug ("pGD->plnSizeY=%d\n",pGD->plnSizeY);
    debug ("pGD->gdfBytesPP=%d\n",pGD->gdfBytesPP);
    debug ("pGD->gdfIndex=%d\n",pGD->gdfIndex);
    // setup registers.
    // 最好根据上面的变量进行设置
    // 这里偷懒一下，直接给值
    /*
     * Setup clocking / DACs
     */
    REG(VDAC_CONFIG)        = 0x081141CF; // Take DACs out of power down mode
    REG(VPSS_CLKCTL)        = 0x00000038; // Enable DAC and VENC clock
    REG(VPSS_VPBE_CLK_CTRL) = 0x00000019; // Select enc_clk, turn on VPBE clk
    REG(VENC_CLKCTL)        = 0x00000011; // Enable venc & digital LCD clock

    REG(OSD_MODE)           = 0x00000000;
    REG(OSD_VIDWINMD)       = 0x00000000;
    REG(OSD_OSDWIN0MD)      = 0x00003039;
    REG(OSD_OSDWIN1MD)      = 0x000010F8;
    REG(OSD_RECTCUR)        = 0x00000000;
    REG(OSD_OSDWIN0OFST)    = 0x00001028;
    REG(OSD_VIDWINADH)      = 0x00000011;
    REG(OSD_BASEPX)         = 0x00000050;
    REG(OSD_BASEPY)         = 0x00000003;
    REG(OSD_OSDWIN0XL)      = 0x00000280;
    REG(OSD_OSDWIN0YL)      = 0x00000281;
    REG(OSD_MISCCTL)        = 0x00000000;

    REG(VENC_VMOD)          = 0x00002011;
    REG(VENC_VIOCTL)        = 0x00002000;
    REG(VENC_VDPRO)         = 0x00000000;
    REG(VENC_SYNCCTL)       = 0x0000000F;
    REG(VENC_HSPLS)         = 0x00000020;
    REG(VENC_VSPLS)         = 0x00000004;
    REG(VENC_HINTVL)        = 0x000002FF;
    REG(VENC_HSTART)        = 0x00000050;
    REG(VENC_HVALID)        = 0x00000280;
    REG(VENC_VINTVL)        = 0x0000028A;
    REG(VENC_VSTART)        = 0x00000003;
    REG(VENC_VVALID)        = 0x00000281;
    REG(VENC_LCDOUT)        = 0x00000001;
    REG(VENC_DCLKCTL)       = 0x00000800;
    REG(VENC_DCLKPTN0)      = 0x00000001;
    REG(VENC_OSDCLK0)       = 0x00000000;
    REG(VENC_OSDCLK1)       = 0x00000001;

    printf("lcd init!\n");
    //while(1);
    return ((void*)&smi);
    //return NULL;
}



#endif // CONFIG_VIDEO_DM36X
