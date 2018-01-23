#include <common.h>

#if defined(CONFIG_VIDEO_DM36X)
#include <video_fb.h>
#include "videomodes.h"
#include <asm/arch/video_def.h>
#include <asm/arch/hardware.h> // for REG()


GraphicDevice smi;

void *video_hw_init (void)
{
    debug ("@ in video_hw_init()\n");
    
    GraphicDevice *pGD = (GraphicDevice *)&smi;
    
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
    REG(OSD_OSDWIN0YL)      = 0x000001E0;
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
    REG(VENC_VINTVL)        = 0x000001EA;
    REG(VENC_VSTART)        = 0x00000003;
    REG(VENC_VVALID)        = 0x000001E0;
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
