#ifndef _DAVINCI_VIDEO_H_
#define _DAVINCI_VIDEO_H_

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  Device System Controller                                                *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define SYSTEM_BASE         0x01C40000
#define PINMUX0             ( SYSTEM_BASE + 0x00 )
#define PINMUX1             ( SYSTEM_BASE + 0x04 )
#define PINMUX2             ( SYSTEM_BASE + 0x08 )
#define PINMUX3             ( SYSTEM_BASE + 0x0C )
#define PINMUX4             ( SYSTEM_BASE + 0x10 )
#define BOOTCFG             ( SYSTEM_BASE + 0x14 )
#define ARM_INTMUX          ( SYSTEM_BASE + 0x18 )
#define EDMA_INTMUX         ( SYSTEM_BASE + 0x1C )
#define DDR_SLEW            ( SYSTEM_BASE + 0x20 )
#define UHPI_CTL            ( SYSTEM_BASE + 0x24 )
#define DEVICE_ID           ( SYSTEM_BASE + 0x28 )
#define VDAC_CONFIG         ( SYSTEM_BASE + 0x2C )
#define TIMER64_CTL         ( SYSTEM_BASE + 0x30 )
#define USBPHY_CTL          ( SYSTEM_BASE + 0x34 )
#define MISC                ( SYSTEM_BASE + 0x38 )
#define MSTPRI0             ( SYSTEM_BASE + 0x3C )
#define MSTPRI1             ( SYSTEM_BASE + 0x40 )
#define VPSS_CLKCTL         ( SYSTEM_BASE + 0x44 )
#define PERI_CLKCTL         ( SYSTEM_BASE + 0x48 )
#define DEEPSLEEP           ( SYSTEM_BASE + 0x4C )
#define DFT_ENABLE          ( SYSTEM_BASE + 0x50 )
#define DEBOUNCE0           ( SYSTEM_BASE + 0x54 )
#define DEBOUNCE1           ( SYSTEM_BASE + 0x58 )
#define DEBOUNCE2           ( SYSTEM_BASE + 0x5C )
#define DEBOUNCE3           ( SYSTEM_BASE + 0x60 )
#define DEBOUNCE4           ( SYSTEM_BASE + 0x64 )
#define DEBOUNCE5           ( SYSTEM_BASE + 0x68 )
#define DEBOUNCE6           ( SYSTEM_BASE + 0x6C )
#define DEBOUNCE7           ( SYSTEM_BASE + 0x70 )
#define VTPIO_CTL           ( SYSTEM_BASE + 0x74 )
#define PUPDCTL0            ( SYSTEM_BASE + 0x78 )
#define PUPDCTL1            ( SYSTEM_BASE + 0x7C )
#define HDIMCOBT            ( SYSTEM_BASE + 0x80 )
#define PLL0_CONFIG         ( SYSTEM_BASE + 0x84 )
#define PLL1_CONFIG         ( SYSTEM_BASE + 0x88 )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  DDR Controller                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define DDR_REG_BASE            0x20000000
#define DDR_DDRVTPER            ( 0x01C4004C )
#define DDR_DDRVTPR             ( 0x01C42038 )
#define DDR_SDRSTAT             ( DDR_REG_BASE + 0x04 )
#define DDR_SDBCR               ( DDR_REG_BASE + 0x08 )
#define DDR_SDRCR               ( DDR_REG_BASE + 0x0C )
#define DDR_SDTIMR              ( DDR_REG_BASE + 0x10 )
#define DDR_SDTIMR2             ( DDR_REG_BASE + 0x14 )
#define DDR_VBPR                ( DDR_REG_BASE + 0x20 )
#define DDR_IRR                 ( DDR_REG_BASE + 0xC0 )
#define DDR_IMR                 ( DDR_REG_BASE + 0xC4 )
#define DDR_IMSR                ( DDR_REG_BASE + 0xC8 )
#define DDR_IMCR                ( DDR_REG_BASE + 0xCC )
#define DDR_DDRPHYCR            ( DDR_REG_BASE + 0xE4 )
#define DDR_VTPIOCR             ( DDR_REG_BASE + 0xF0 )

#define DDR_BASE                0x80000000  // Start of SDRAM range
#define DDR_SIZE                0x08000000  // 128 MB

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  EDMA Controller                                                         *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define EDMA_3CC_BASE           0x01C00000
#define EDMA_3CC_CCCFG          ( EDMA_3CC_BASE + 0x0004 )

/* Global Controller */
#define EDMA_3CC_ER             ( EDMA_3CC_BASE + 0x1000 )
#define EDMA_3CC_ERH            ( EDMA_3CC_BASE + 0x1004 )
#define EDMA_3CC_ECR            ( EDMA_3CC_BASE + 0x1008 )
#define EDMA_3CC_ECRH           ( EDMA_3CC_BASE + 0x100C )
#define EDMA_3CC_ESR            ( EDMA_3CC_BASE + 0x1010 )
#define EDMA_3CC_ESRH           ( EDMA_3CC_BASE + 0x1014 )
#define EDMA_3CC_CER            ( EDMA_3CC_BASE + 0x1018 )
#define EDMA_3CC_CERH           ( EDMA_3CC_BASE + 0x101C )
#define EDMA_3CC_EER            ( EDMA_3CC_BASE + 0x1020 )
#define EDMA_3CC_EERH           ( EDMA_3CC_BASE + 0x1024 )
#define EDMA_3CC_EECR           ( EDMA_3CC_BASE + 0x1028 )
#define EDMA_3CC_EECRH          ( EDMA_3CC_BASE + 0x102C )
#define EDMA_3CC_EESR           ( EDMA_3CC_BASE + 0x1030 )
#define EDMA_3CC_EESRH          ( EDMA_3CC_BASE + 0x1034 )
#define EDMA_3CC_SER            ( EDMA_3CC_BASE + 0x1038 )
#define EDMA_3CC_SERH           ( EDMA_3CC_BASE + 0x103C )
#define EDMA_3CC_SECR           ( EDMA_3CC_BASE + 0x1040 )
#define EDMA_3CC_SECRH          ( EDMA_3CC_BASE + 0x1044 )
#define EDMA_3CC_IER            ( EDMA_3CC_BASE + 0x1050 )
#define EDMA_3CC_IERH           ( EDMA_3CC_BASE + 0x1054 )
#define EDMA_3CC_IECR           ( EDMA_3CC_BASE + 0x1058 )
#define EDMA_3CC_IECRH          ( EDMA_3CC_BASE + 0x105C )
#define EDMA_3CC_IESR           ( EDMA_3CC_BASE + 0x1060 )
#define EDMA_3CC_IESRH          ( EDMA_3CC_BASE + 0x1064 )
#define EDMA_3CC_IPR            ( EDMA_3CC_BASE + 0x1068 )
#define EDMA_3CC_IPRH           ( EDMA_3CC_BASE + 0x106C )
#define EDMA_3CC_ICR            ( EDMA_3CC_BASE + 0x1070 )
#define EDMA_3CC_ICRH           ( EDMA_3CC_BASE + 0x1074 )
#define EDMA_3CC_IEVAL          ( EDMA_3CC_BASE + 0x1078 )
#define EDMA_3CC_QER            ( EDMA_3CC_BASE + 0x1080 )
#define EDMA_3CC_QEER           ( EDMA_3CC_BASE + 0x1084 )
#define EDMA_3CC_QEECR          ( EDMA_3CC_BASE + 0x1088 )
#define EDMA_3CC_QEESR          ( EDMA_3CC_BASE + 0x108C )
#define EDMA_3CC_QSER           ( EDMA_3CC_BASE + 0x1090 )
#define EDMA_3CC_QSECR          ( EDMA_3CC_BASE + 0x1094 )

#define EDMA_TC0_BASE           0x01C10000
#define EDMA_TC1_BASE           0x01C10400


/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  GPIO Control                                                            *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define GPIO_BASE               0x01C67000

#define GPIO_PCR                ( GPIO_BASE + 0x04 )
#define GPIO_BINTEN             ( GPIO_BASE + 0x08 )

// For GPIO[0:31]
#define GPIO_DIR_BASE           ( 0x10 )   // Direction Cntl
#define GPIO_OUT_DATA_BASE      ( 0x14 )   // Output data
#define GPIO_SET_DATA_BASE      ( 0x18 )   // Set data
#define GPIO_CLR_DATA_BASE      ( 0x1C )   // Clear data
#define GPIO_IN_DATA_BASE       ( 0x20 )   // Input data
#define GPIO_SET_RIS_TRIG_BASE  ( 0x24 )   // Set rising edge intr
#define GPIO_CLR_RIS_TRIG_BASE  ( 0x28 )   // Clear rising edge intr
#define GPIO_SET_FAL_TRIG_BASE  ( 0x2C )   // Set falling edge intr
#define GPIO_CLR_FAL_TRIG_BASE  ( 0x30 )   // Clear falling edge intr
#define GPIO_INSTAT_BASE        ( 0x34 )   // Intr status
#define GPIO_BASE_OFFSET        0x28

#define GPIO_01_BASE            ( GPIO_BASE + 0x10 )
#define GPIO_23_BASE            ( GPIO_01_BASE + GPIO_BASE_OFFSET )
#define GPIO_45_BASE            ( GPIO_23_BASE + GPIO_BASE_OFFSET )
#define GPIO_6_BASE             ( GPIO_45_BASE + GPIO_BASE_OFFSET )

// For GPIO[0:31]
#define GPIO_DIR01              ( GPIO_BASE + 0x10 )
#define GPIO_OUT_DATA01         ( GPIO_BASE + 0x14 )
#define GPIO_SET_DATA01         ( GPIO_BASE + 0x18 )
#define GPIO_CLR_DATA01         ( GPIO_BASE + 0x1C )
#define GPIO_IN_DATA01          ( GPIO_BASE + 0x20 )
#define GPIO_SET_RIS_TRIG01     ( GPIO_BASE + 0x24 )
#define GPIO_CLR_RIS_TRIG01     ( GPIO_BASE + 0x28 )
#define GPIO_SET_FAL_TRIG01     ( GPIO_BASE + 0x2C )
#define GPIO_CLR_FAL_TRIG01     ( GPIO_BASE + 0x30 )
#define GPIO_INSTAT01           ( GPIO_BASE + 0x34 )

// For GPIO[32:63]
#define      GPIO_DIR23         ( GPIO_BASE + 0x38 )
#define GPIO_OUT_DATA23         ( GPIO_BASE + 0x3C )
#define GPIO_SET_DATA23         ( GPIO_BASE + 0x40 )
#define GPIO_CLR_DATA23         ( GPIO_BASE + 0x44 )
#define GPIO_IN_DATA23          ( GPIO_BASE + 0x48 )
#define GPIO_SET_RIS_TRIG23     ( GPIO_BASE + 0x4C )
#define GPIO_CLR_RIS_TRIG23     ( GPIO_BASE + 0x50 )
#define GPIO_SET_FAL_TRIG23     ( GPIO_BASE + 0x54 )
#define GPIO_CLR_FAL_TRIG23     ( GPIO_BASE + 0x58 )
#define GPIO_INSTAT23           ( GPIO_BASE + 0x5C )

// For GPIO[64:95]
#define GPIO_DIR45              ( GPIO_BASE + 0x60 )
#define GPIO_OUT_DATA45         ( GPIO_BASE + 0x64 )
#define GPIO_SET_DATA45         ( GPIO_BASE + 0x68 )
#define GPIO_CLR_DATA45         ( GPIO_BASE + 0x6C )
#define GPIO_IN_DATA45          ( GPIO_BASE + 0x70 )
#define GPIO_SET_RIS_TRIG45     ( GPIO_BASE + 0x74 )
#define GPIO_CLR_RIS_TRIG45     ( GPIO_BASE + 0x78 )
#define GPIO_SET_FAL_TRIG45     ( GPIO_BASE + 0x7C )
#define GPIO_CLR_FAL_TRIG45     ( GPIO_BASE + 0x80 )
#define GPIO_INSTAT45           ( GPIO_BASE + 0x84 )

// For GPIO[96:103 ]
#define GPIO_DIR67              ( GPIO_BASE + 0x88 )
#define GPIO_OUT_DATA67         ( GPIO_BASE + 0x8C )
#define GPIO_SET_DATA67         ( GPIO_BASE + 0x90 )
#define GPIO_CLR_DATA67         ( GPIO_BASE + 0x94 )
#define GPIO_IN_DATA67          ( GPIO_BASE + 0x98 )
#define GPIO_SET_RIS_TRIG67     ( GPIO_BASE + 0x9C )
#define GPIO_CLR_RIS_TRIG67     ( GPIO_BASE + 0xA0 )
#define GPIO_SET_FAL_TRIG67     ( GPIO_BASE + 0xA4 )
#define GPIO_CLR_FAL_TRIG67     ( GPIO_BASE + 0xA8 )
#define GPIO_INSTAT67           ( GPIO_BASE + 0xAC )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  I2C Controller                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define I2C_BASE                0x01C21000
#define I2C_OAR                 ( I2C_BASE + 0x00 )
#define I2C_ICIMR               ( I2C_BASE + 0x04 )
#define I2C_ICSTR               ( I2C_BASE + 0x08 )
#define I2C_ICCLKL              ( I2C_BASE + 0x0C )
#define I2C_ICCLKH              ( I2C_BASE + 0x10 )
#define I2C_ICCNT               ( I2C_BASE + 0x14 )
#define I2C_ICDRR               ( I2C_BASE + 0x18 )
#define I2C_ICSAR               ( I2C_BASE + 0x1C )
#define I2C_ICDXR               ( I2C_BASE + 0x20 )
#define I2C_ICMDR               ( I2C_BASE + 0x24 )
#define I2C_ICIVR               ( I2C_BASE + 0x28 )
#define I2C_ICEMDR              ( I2C_BASE + 0x2C )
#define I2C_ICPSC               ( I2C_BASE + 0x30 )
#define I2C_ICPID1              ( I2C_BASE + 0x34 )
#define I2C_ICPID2              ( I2C_BASE + 0x38 )

/* I2C Field Definitions */
#define ICOAR_MASK_7                    0x007F
#define ICOAR_MASK_10                   0x03FF
#define ICSAR_MASK_7                    0x007F
#define ICSAR_MASK_10                   0x03FF
#define ICOAR_OADDR                     0x007f
#define ICSAR_SADDR                     0x0050

#define ICSTR_SDIR                      0x4000
#define ICSTR_NACKINT                   0x2000
#define ICSTR_BB                        0x1000
#define ICSTR_RSFULL                    0x0800
#define ICSTR_XSMT                      0x0400
#define ICSTR_AAS                       0x0200
#define ICSTR_AD0                       0x0100
#define ICSTR_SCD                       0x0020
#define ICSTR_ICXRDY                    0x0010
#define ICSTR_ICRRDY                    0x0008
#define ICSTR_ARDY                      0x0004
#define ICSTR_NACK                      0x0002
#define ICSTR_AL                        0x0001

#define ICMDR_NACKMOD                   0x8000
#define ICMDR_FREE                      0x4000
#define ICMDR_STT                       0x2000
#define ICMDR_IDLEEN                    0x1000
#define ICMDR_STP                       0x0800
#define ICMDR_MST                       0x0400
#define ICMDR_TRX                       0x0200
#define ICMDR_XA                        0x0100
#define ICMDR_RM                        0x0080
#define ICMDR_DLB                       0x0040
#define ICMDR_IRS                       0x0020
#define ICMDR_STB                       0x0010
#define ICMDR_FDF                       0x0008
#define ICMDR_BC_MASK                   0x0007

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  INTC controller                                                         *
 *      Controls the Interrupts                                             *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define INTC_BASE               0x01C48000
#define INTC_FIQ0               ( INTC_BASE + 0x00 )
#define INTC_FIQ1               ( INTC_BASE + 0x04 )
#define INTC_IRQ0               ( INTC_BASE + 0x08 )
#define INTC_IRQ1               ( INTC_BASE + 0x0C )
#define INTC_FIQENTRY           ( INTC_BASE + 0x10 )
#define INTC_IRQENTRY           ( INTC_BASE + 0x14 )
#define INTC_EINT0              ( INTC_BASE + 0x18 )
#define INTC_EINT1              ( INTC_BASE + 0x1C )
#define INTC_INTCTL             ( INTC_BASE + 0x20 )
#define INTC_EABASE             ( INTC_BASE + 0x24 )
#define INTC_INTPRI0            ( INTC_BASE + 0x30 )
#define INTC_INTPRI1            ( INTC_BASE + 0x34 )
#define INTC_INTPRI2            ( INTC_BASE + 0x38 )
#define INTC_INTPRI3            ( INTC_BASE + 0x3C )
#define INTC_INTPRI4            ( INTC_BASE + 0x40 )
#define INTC_INTPRI5            ( INTC_BASE + 0x44 )
#define INTC_INTPRI6            ( INTC_BASE + 0x48 )
#define INTC_INTPRI7            ( INTC_BASE + 0x4C )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  ASP Controllers                                                         *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define MCBSP0_BASE              0x01D02000
#define MCBSP0_DRR_32BIT         ( MCBSP0_BASE + 0x00 )
#define MCBSP0_DRR_16BIT         *( volatile Uint16* )( MCBSP0_BASE + 0x00 )
#define MCBSP0_DRR_8BIT          *( volatile Uint8* ) ( MCBSP0_BASE + 0x00 )
#define MCBSP0_DXR_32BIT         ( MCBSP0_BASE + 0x04 )
#define MCBSP0_DXR_16BIT         *( volatile Uint16* )( MCBSP0_BASE + 0x04 )
#define MCBSP0_DXR_8BIT          *( volatile Uint8* ) ( MCBSP0_BASE + 0x04 )
#define MCBSP0_SPCR              ( MCBSP0_BASE + 0x08 )
#define MCBSP0_RCR               ( MCBSP0_BASE + 0x0C )
#define MCBSP0_XCR               ( MCBSP0_BASE + 0x10 )
#define MCBSP0_SRGR              ( MCBSP0_BASE + 0x14 )
#define MCBSP0_MCR               ( MCBSP0_BASE + 0x18 )
#define MCBSP0_PCR               ( MCBSP0_BASE + 0x24 )

#define MCBSP_SPCR_FREE                     0x02000000
#define MCBSP_SPCR_SOFT                     0x01000000
#define MCBSP_SPCR_FRST                     0x00800000
#define MCBSP_SPCR_GRST                     0x00400000
#define MCBSP_SPCR_XSYNCERR                 0x00080000
#define MCBSP_SPCR_XEMPTY                   0x00040000
#define MCBSP_SPCR_XRDY                     0x00020000
#define MCBSP_SPCR_XRST                     0x00010000
#define MCBSP_SPCR_DLB                      0x00008000
#define MCBSP_SPCR_DXENA                    0x00000020
#define MCBSP_SPCR_ABIS                     0x00000010
#define MCBSP_SPCR_RSYNCERR                 0x00000008
#define MCBSP_SPCR_RFULL                    0x00000004
#define MCBSP_SPCR_RRDY                     0x00000002
#define MCBSP_SPCR_RRST                     0x00000001


/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  MMC Controller                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define MMC_BASE                0x01D11000
#define MMC_MMCCTL              ( MMC_BASE + 0x00 )
#define MMC_MMCCLK              ( MMC_BASE + 0x04 )
#define MMC_MMCST0              ( MMC_BASE + 0x08 )
#define MMC_MMCST1              ( MMC_BASE + 0x0C )
#define MMC_MMCIM               ( MMC_BASE + 0x10 )
#define MMC_MMCTOR              ( MMC_BASE + 0x14 )
#define MMC_MMCTOD              ( MMC_BASE + 0x18 )
#define MMC_MMCBLEN             ( MMC_BASE + 0x1C )
#define MMC_MMCNBLK             ( MMC_BASE + 0x20 )
#define MMC_MMCNBLC             ( MMC_BASE + 0x24 )
#define MMC_MMCDRR              ( MMC_BASE + 0x28 )
#define MMC_MMCDXR              ( MMC_BASE + 0x2C )
#define MMC_MMCCMD              ( MMC_BASE + 0x30 )
#define MMC_MMCARGHL            ( MMC_BASE + 0x34 )
#define MMC_MMCRSP01            ( MMC_BASE + 0x38 )
#define MMC_MMCRSP23            ( MMC_BASE + 0x3C )
#define MMC_MMCRSP45            ( MMC_BASE + 0x40 )
#define MMC_MMCRSP67            ( MMC_BASE + 0x44 )
#define MMC_MMCDRSP             ( MMC_BASE + 0x48 )
#define MMC_MMCCIDX             ( MMC_BASE + 0x50 )
#define MMC_SDIOCTL             ( MMC_BASE + 0x64 )
#define MMC_SDIOST0             ( MMC_BASE + 0x68 )
#define MMC_SDIOIEN             ( MMC_BASE + 0x6C )
#define MMC_SDIOIST             ( MMC_BASE + 0x70 )
#define MMC_MMCFIFOCTL          ( MMC_BASE + 0x74 )

#if(0)
/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  PLL1 Controller                                                         *
 *      Generates DSP, ARM clocks                                           *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define PLL1_BASE               0x01C40800
#define PLL1_PID                ( PLL1_BASE + 0x000 )
#define PLL1_RSTYPE             ( PLL1_BASE + 0x0E4 )
#define PLL1_PLLCTL             ( PLL1_BASE + 0x100 )
#define PLL1_PLLM               ( PLL1_BASE + 0x110 )
#define PLL1_PLLDIV1            ( PLL1_BASE + 0x118 )
#define PLL1_PLLDIV2            ( PLL1_BASE + 0x11C )
#define PLL1_PLLDIV3            ( PLL1_BASE + 0x120 )
#define PLL1_POSTDIV            ( PLL1_BASE + 0x128 )
#define PLL1_BPDIV              ( PLL1_BASE + 0x12C )
#define PLL1_PLLCMD             ( PLL1_BASE + 0x138 )
#define PLL1_PLLSTAT            ( PLL1_BASE + 0x13C )
#define PLL1_CKEN               ( PLL1_BASE + 0x148 )
#define PLL1_CKSTAT             ( PLL1_BASE + 0x14C )
#define PLL1_SYSTAT             ( PLL1_BASE + 0x150 )
#define PLL1_PLLDIV4            ( PLL1_BASE + 0x160 )
#define PLL1_PLLDIV5            ( PLL1_BASE + 0x164 )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  PLL2 Controller                                                         *
 *      Generates DDR2, VPBE clocks                                         *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define PLL2_BASE               0x01C40C00
#define PLL2_PID                ( PLL2_BASE + 0x000 )
#define PLL2_RSTYPE             ( PLL2_BASE + 0x0E4 )
#define PLL2_PLLCTL             ( PLL2_BASE + 0x100 )
#define PLL2_PLLM               ( PLL2_BASE + 0x110 )
#define PLL2_PLLDIV1            ( PLL2_BASE + 0x118 )
#define PLL2_PLLDIV2            ( PLL2_BASE + 0x11C )
#define PLL2_PLLDIV3            ( PLL2_BASE + 0x120 )
#define PLL2_POSTDIV            ( PLL2_BASE + 0x128 )
#define PLL2_BPDIV              ( PLL2_BASE + 0x12C )
#define PLL2_PLLCMD             ( PLL2_BASE + 0x138 )
#define PLL2_PLLSTAT            ( PLL2_BASE + 0x13C )
#define PLL2_CKEN               ( PLL2_BASE + 0x148 )
#define PLL2_CKSTAT             ( PLL2_BASE + 0x14C )
#define PLL2_SYSTAT             ( PLL2_BASE + 0x150 )
#define PLL2_PLLDIV4            ( PLL2_BASE + 0x160 )
#define PLL2_PLLDIV5            ( PLL2_BASE + 0x164 )
#endif

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  PSC ( Power and Sleep Controller )                                      *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define PSC_BASE                0x01C41000
#define PSC_INTEVAL             ( PSC_BASE + 0x018 )
#define PSC_MERRPR0             ( PSC_BASE + 0x040 )
#define PSC_MERRPR1             ( PSC_BASE + 0x044 )
#define PSC_MERRCR0             ( PSC_BASE + 0x050 )
#define PSC_MERRCR1             ( PSC_BASE + 0x054 )
#define PSC_PERRPR              ( PSC_BASE + 0x060 )
#define PSC_PERRCR              ( PSC_BASE + 0x068 )
#define PSC_EPCPR               ( PSC_BASE + 0x070 )
#define PSC_EPCcR               ( PSC_BASE + 0x078 )
#define PSC_PTCMD               ( PSC_BASE + 0x120 )
#define PSC_PTSTAT              ( PSC_BASE + 0x128 )
#define PSC_PDSTAT0             ( PSC_BASE + 0x200 )
#define PSC_PDSTAT1             ( PSC_BASE + 0x204 )
#define PSC_PDCTL0              ( PSC_BASE + 0x300 )
#define PSC_PDCTL1              ( PSC_BASE + 0x304 )
#define PSC_MDSTAT_BASE         ( PSC_BASE + 0x800 )
#define PSC_MDCTL_BASE          ( PSC_BASE + 0xA00 )

#define PSC_MDSTAT_DSP          ( PSC_MDSTAT_BASE + ( 4 * 39 ) )
#define PSC_MDCTL_DSP           ( PSC_MDCTL_BASE  + ( 4 * 39 ) )
#define PSC_MDSTAT_IMCOP        ( PSC_MDSTAT_BASE + ( 4 * 40 ) )
#define PSC_MDCTL_IMCOP         ( PSC_MDCTL_BASE  + ( 4 * 40 ) )

/* Power Domains */
#define ALWAYSON_POWER_DOMAIN   0
#define DSP_POWER_DOMAIN        1


/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  PWM Controller                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define PWM0_BASE               0x01C22000
#define PWM0_PID                ( PWM0_BASE + 0x00 )
#define PWM0_PCR                ( PWM0_BASE + 0x04 )
#define PWM0_CFG                ( PWM0_BASE + 0x08 )
#define PWM0_START              ( PWM0_BASE + 0x0C )
#define PWM0_RPT                ( PWM0_BASE + 0x10 )
#define PWM0_PER                ( PWM0_BASE + 0x14 )
#define PWM0_PH1D               ( PWM0_BASE + 0x18 )

#define PWM1_BASE               0x01C22400
#define PWM1_PID                ( PWM1_BASE + 0x00 )
#define PWM1_PCR                ( PWM1_BASE + 0x04 )
#define PWM1_CFG                ( PWM1_BASE + 0x08 )
#define PWM1_START              ( PWM1_BASE + 0x0C )
#define PWM1_RPT                ( PWM1_BASE + 0x10 )
#define PWM1_PER                ( PWM1_BASE + 0x14 )
#define PWM1_PH1D               ( PWM1_BASE + 0x18 )

#define PWM2_BASE               0x01C22800
#define PWM2_PID                ( PWM2_BASE + 0x00 )
#define PWM2_PCR                ( PWM2_BASE + 0x04 )
#define PWM2_CFG                ( PWM2_BASE + 0x08 )
#define PWM2_START              ( PWM2_BASE + 0x0C )
#define PWM2_RPT                ( PWM2_BASE + 0x10 )
#define PWM2_PER                ( PWM2_BASE + 0x14 )
#define PWM2_PH1D               ( PWM2_BASE + 0x18 )

#define PWM3_BASE               0x01C22C00
#define PWM3_PID                ( PWM2_BASE + 0x00 )
#define PWM3_PCR                ( PWM2_BASE + 0x04 )
#define PWM3_CFG                ( PWM2_BASE + 0x08 )
#define PWM3_START              ( PWM2_BASE + 0x0C )
#define PWM3_RPT                ( PWM2_BASE + 0x10 )
#define PWM3_PER                ( PWM2_BASE + 0x14 )
#define PWM3_PH1D               ( PWM2_BASE + 0x18 )

#define PWM_PID                 ( 0x00 )
#define PWM_PCR                 ( 0x04 )
#define PWM_CFG                 ( 0x08 )
#define PWM_START               ( 0x0C )
#define PWM_RPT                 ( 0x10 )
#define PWM_PER                 ( 0x14 )
#define PWM_PH1D                ( 0x18 )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  Timer Controller                                                        *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define TIMER0_BASE         0x01C21400
#define TIMER0_EMUMGT       ( TIMER0_BASE + 0x04 )
#define TIMER0_TIM12        ( TIMER0_BASE + 0x10 )
#define TIMER0_TIM34        ( TIMER0_BASE + 0x14 )
#define TIMER0_PRD12        ( TIMER0_BASE + 0x18 )
#define TIMER0_PRD34        ( TIMER0_BASE + 0x1C )
#define TIMER0_TRC          ( TIMER0_BASE + 0x20 )
#define TIMER0_TGCR         ( TIMER0_BASE + 0x24 )

#define TIMER1_BASE         0x01C21800
#define TIMER1_EMUMGT       ( TIMER1_BASE + 0x04 )
#define TIMER1_TIM12        ( TIMER1_BASE + 0x10 )
#define TIMER1_TIM34        ( TIMER1_BASE + 0x14 )
#define TIMER1_PRD12        ( TIMER1_BASE + 0x18 )
#define TIMER1_PRD34        ( TIMER1_BASE + 0x1C )
#define TIMER1_TRC          ( TIMER1_BASE + 0x20 )
#define TIMER1_TGCR         ( TIMER1_BASE + 0x24 )

#define TIMER2_BASE         0x01C21C00
#define TIMER2_EMUMGT       ( TIMER2_BASE + 0x04 )
#define TIMER2_TIM12        ( TIMER2_BASE + 0x10 )
#define TIMER2_TIM34        ( TIMER2_BASE + 0x14 )
#define TIMER2_PRD12        ( TIMER2_BASE + 0x18 )
#define TIMER2_PRD34        ( TIMER2_BASE + 0x1C )
#define TIMER2_TRC          ( TIMER2_BASE + 0x20 )
#define TIMER2_TGCR         ( TIMER2_BASE + 0x24 )
#define TIMER2_WDTCR        ( TIMER2_BASE + 0x28 )

#define TIMER3_BASE         0x01C20800
#define TIMER3_EMUMGT       ( TIMER2_BASE + 0x04 )
#define TIMER3_TIM12        ( TIMER2_BASE + 0x10 )
#define TIMER3_TIM34        ( TIMER2_BASE + 0x14 )
#define TIMER3_PRD12        ( TIMER2_BASE + 0x18 )
#define TIMER3_PRD34        ( TIMER2_BASE + 0x1C )
#define TIMER3_TRC          ( TIMER2_BASE + 0x20 )
#define TIMER3_TGCR         ( TIMER2_BASE + 0x24 )
#define TIMER3_WDTCR        ( TIMER2_BASE + 0x28 )

#define TIMER4_BASE         0x01C23800
#define TIMER4_EMUMGT       ( TIMER2_BASE + 0x04 )
#define TIMER4_TIM12        ( TIMER2_BASE + 0x10 )
#define TIMER4_TIM34        ( TIMER2_BASE + 0x14 )
#define TIMER4_PRD12        ( TIMER2_BASE + 0x18 )
#define TIMER4_PRD34        ( TIMER2_BASE + 0x1C )
#define TIMER4_TRC          ( TIMER2_BASE + 0x20 )
#define TIMER4_TGCR         ( TIMER2_BASE + 0x24 )
#define TIMER4_WDTCR        ( TIMER2_BASE + 0x28 )

#define TIMER_EMUMGT            ( 0x04 )
#define TIMER_TIM12             ( 0x10 )
#define TIMER_TIM34             ( 0x14 )
#define TIMER_PRD12             ( 0x18 )
#define TIMER_PRD34             ( 0x1C )
#define TIMER_TRC               ( 0x20 )
#define TIMER_TGCR              ( 0x24 )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  UART Controller                                                         *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define UART0_BASE          0x01C20000
#define UART0_RBR           ( UART0_BASE + 0x00 )
#define UART0_THR           ( UART0_BASE + 0x00 )
#define UART0_IER           ( UART0_BASE + 0x04 )
#define UART0_IIR           ( UART0_BASE + 0x08 )
#define UART0_FCR           ( UART0_BASE + 0x08 )
#define UART0_LCR           ( UART0_BASE + 0x0C )
#define UART0_MCR           ( UART0_BASE + 0x10 )
#define UART0_LSR           ( UART0_BASE + 0x14 )
#define UART0_DLL           ( UART0_BASE + 0x20 )
#define UART0_DLH           ( UART0_BASE + 0x24 )
#define UART0_PID1          ( UART0_BASE + 0x28 )
#define UART0_PID2          ( UART0_BASE + 0x2C )
#define UART0_PWREMU_MGMT   ( UART0_BASE + 0x30 )

#define UART1_BASE          0x01D06000
#define UART1_RBR           ( UART1_BASE + 0x00 )
#define UART1_THR           ( UART1_BASE + 0x00 )
#define UART1_IER           ( UART1_BASE + 0x04 )
#define UART1_IIR           ( UART1_BASE + 0x08 )
#define UART1_FCR           ( UART1_BASE + 0x08 )
#define UART1_LCR           ( UART1_BASE + 0x0C )
#define UART1_MCR           ( UART1_BASE + 0x10 )
#define UART1_LSR           ( UART1_BASE + 0x14 )
#define UART1_DLL           ( UART1_BASE + 0x20 )
#define UART1_DLH           ( UART1_BASE + 0x24 )
#define UART1_PID1          ( UART1_BASE + 0x28 )
#define UART1_PID2          ( UART1_BASE + 0x2C )
#define UART1_PWREMU_MGMT   ( UART1_BASE + 0x30 )

#define UART_RBR                ( 0x00 )
#define UART_THR                ( 0x00 )
#define UART_IER                ( 0x04 )
#define UART_IIR                ( 0x08 )
#define UART_FCR                ( 0x08 )
#define UART_LCR                ( 0x0C )
#define UART_MCR                ( 0x10 )
#define UART_LSR                ( 0x14 )
#define UART_DLL                ( 0x20 )
#define UART_DLH                ( 0x24 )
#define UART_PID1               ( 0x28 )
#define UART_PID2               ( 0x2C )
#define UART_PWREMU_MGMT        ( 0x30 )


/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  ISIF**************************                                          *
 *                                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define ISIF_BASE               0x01C71000
#define ISIF_SYNCEN               ( ISIF_BASE + 0x00 )
#define ISIF_MODESET              ( ISIF_BASE + 0x04 )
#define ISIF_HDW                  ( ISIF_BASE + 0x08 )
#define ISIF_VDW                  ( ISIF_BASE + 0x0C )
#define ISIF_PPLN                 ( ISIF_BASE + 0x10 )
#define ISIF_LPFR                 ( ISIF_BASE + 0x14 )
#define ISIF_SPH                  ( ISIF_BASE + 0x18 )
#define ISIF_LNH                  ( ISIF_BASE + 0x1C )
#define ISIF_SLV0                 ( ISIF_BASE + 0x20 )
#define ISIF_SLV1                 ( ISIF_BASE + 0x24 )
#define ISIF_LNV                  ( ISIF_BASE + 0x28 )
#define ISIF_CULH                 ( ISIF_BASE + 0x2C )
#define ISIF_CULV                 ( ISIF_BASE + 0x30 )
#define ISIF_HSIZE                ( ISIF_BASE + 0x34 )
#define ISIF_SDOFST               ( ISIF_BASE + 0x38 )
#define ISIF_CADU                 ( ISIF_BASE + 0x3C )
#define ISIF_CADL                 ( ISIF_BASE + 0x40 )
#define ISIF_LINCFG0              ( ISIF_BASE + 0x44 )
#define ISIF_LINCFG1              ( ISIF_BASE + 0x48 )
#define ISIF_CCOLP                ( ISIF_BASE + 0x4C )
#define ISIF_CRGAIN               ( ISIF_BASE + 0x50 )
#define ISIF_CGRGAIN              ( ISIF_BASE + 0x54 )
#define ISIF_CGBGAIN              ( ISIF_BASE + 0x58 )
#define ISIF_CBGAIN               ( ISIF_BASE + 0x5C )
#define ISIF_COFSTA               ( ISIF_BASE + 0x60 )
#define ISIF_FLSHGFG0             ( ISIF_BASE + 0x64 )
#define ISIF_FLSHGFG1             ( ISIF_BASE + 0x68 )
#define ISIF_FLSHGFG2             ( ISIF_BASE + 0x6C )
#define ISIF_VDINT0               ( ISIF_BASE + 0x70 )
#define ISIF_VDINT1               ( ISIF_BASE + 0x74 )
#define ISIF_VDINT2               ( ISIF_BASE + 0x78 )
#define ISIF_MISC                 ( ISIF_BASE + 0x7C )
#define ISIF_CGAMMAWD             ( ISIF_BASE + 0x80 )
#define ISIF_REC656IF             ( ISIF_BASE + 0x84 )
#define ISIF_CCDCFG               ( ISIF_BASE + 0x88 )
#define ISIF_DFCCTL               ( ISIF_BASE + 0x8C )
#define ISIF_VDFSATLV             ( ISIF_BASE + 0x90 )
#define ISIF_DFCMEMCTL            ( ISIF_BASE + 0x94 )
#define ISIF_DFCMEM0              ( ISIF_BASE + 0x98 )
#define ISIF_DFCMEM1              ( ISIF_BASE + 0x9C )
#define ISIF_DFCMEM2              ( ISIF_BASE + 0xA0 )
#define ISIF_DFCMEM3              ( ISIF_BASE + 0xA4 )
#define ISIF_DFCMEM4              ( ISIF_BASE + 0xA8 )
#define ISIF_CLAMPCFG             ( ISIF_BASE + 0xAC )
#define ISIF_CLDCOFST             ( ISIF_BASE + 0xB0 )
#define ISIF_CLSV                 ( ISIF_BASE + 0xB4 )
#define ISIF_CLHWIN0              ( ISIF_BASE + 0xB8 )
#define ISIF_CLHWIN1              ( ISIF_BASE + 0xBC )
#define ISIF_CLHWIN2              ( ISIF_BASE + 0xC0 )
#define ISIF_CLVRV                ( ISIF_BASE + 0xC4 )
#define ISIF_CLVWIN0              ( ISIF_BASE + 0xC8 )
#define ISIF_CLVWIN1              ( ISIF_BASE + 0xCC )
#define ISIF_CLVWIN2              ( ISIF_BASE + 0xD0 )
#define ISIF_CLVWIN3              ( ISIF_BASE + 0xD4 )
#define ISIF_DATAHOFST            ( ISIF_BASE + 0xD8 )
#define ISIF_DATAVOFST            ( ISIF_BASE + 0xDC )
#define ISIF_LSCHVAL              ( ISIF_BASE + 0xE0 )
#define ISIF_LSCVVAL              ( ISIF_BASE + 0xE4 )
#define ISIF_2DLSCCFG             ( ISIF_BASE + 0xE8 )
#define ISIF_2DLSCOFST            ( ISIF_BASE + 0xEC )
#define ISIF_2DLSCINI             ( ISIF_BASE + 0xF0 )
#define ISIF_2DLSCGRBU            ( ISIF_BASE + 0xF4 )
#define ISIF_2DLSCGRBL            ( ISIF_BASE + 0xF8 )
#define ISIF_2DLSCGROF            ( ISIF_BASE + 0xFC )
#define ISIF_2DLSCORBU            ( ISIF_BASE + 0x100 )
#define ISIF_2DLSCORBL            ( ISIF_BASE + 0x104 )
#define ISIF_2DLSCOROF            ( ISIF_BASE + 0x108 )
#define ISIF_2DLSCIRQEN           ( ISIF_BASE + 0x10C )
#define ISIF_2DLSCIRQST           ( ISIF_BASE + 0x110 )
#define ISIF_FMTCFG               ( ISIF_BASE + 0x114 )
#define ISIF_FMTPLEN              ( ISIF_BASE + 0x118 )
#define ISIF_FMTSPH               ( ISIF_BASE + 0x11C )
#define ISIF_FMTLNH               ( ISIF_BASE + 0x120 )
#define ISIF_FMTSLV               ( ISIF_BASE + 0x124 )
#define ISIF_FMTLNV               ( ISIF_BASE + 0x128 )
#define ISIF_FMTRLEN              ( ISIF_BASE + 0x12C )
#define ISIF_FMTHCNT              ( ISIF_BASE + 0x130 )
#define ISIF_FMTAPTR0             ( ISIF_BASE + 0x134 )
#define ISIF_FMTAPTR1             ( ISIF_BASE + 0x138 )
#define ISIF_FMTAPTR2             ( ISIF_BASE + 0x13C )
#define ISIF_FMTAPTR3             ( ISIF_BASE + 0x140 )
#define ISIF_FMTAPTR4             ( ISIF_BASE + 0x144 )
#define ISIF_FMTAPTR5             ( ISIF_BASE + 0x148 )
#define ISIF_FMTAPTR6             ( ISIF_BASE + 0x14C )
#define ISIF_FMTAPTR7             ( ISIF_BASE + 0x150 )
#define ISIF_FMTAPTR8             ( ISIF_BASE + 0x154 )
#define ISIF_FMTAPTR9             ( ISIF_BASE + 0x158 )
#define ISIF_FMTAPTR10            ( ISIF_BASE + 0x15C )
#define ISIF_FMTAPTR11            ( ISIF_BASE + 0x160 )
#define ISIF_FMTAPTR12            ( ISIF_BASE + 0x164 )
#define ISIF_FMTAPTR13            ( ISIF_BASE + 0x168 )
#define ISIF_FMTAPTR14            ( ISIF_BASE + 0x16C )
#define ISIF_FMTAPTR15            ( ISIF_BASE + 0x170 )
#define ISIF_FMTPGMVF0            ( ISIF_BASE + 0x174 )
#define ISIF_FMTPGMVF1            ( ISIF_BASE + 0x178 )
#define ISIF_FMTPGMAPU0           ( ISIF_BASE + 0x17C )
#define ISIF_FMTPGMAPU1           ( ISIF_BASE + 0x180 )
#define ISIF_FMTPGMAPS0           ( ISIF_BASE + 0x184 )
#define ISIF_FMTPGMAPS1           ( ISIF_BASE + 0x188 )
#define ISIF_FMTPGMAPS2           ( ISIF_BASE + 0x18C )
#define ISIF_FMTPGMAPS3           ( ISIF_BASE + 0x190 )
#define ISIF_FMTPGMAPS4           ( ISIF_BASE + 0x194 )
#define ISIF_FMTPGMAPS5           ( ISIF_BASE + 0x198 )
#define ISIF_FMTPGMAPS6           ( ISIF_BASE + 0x19C )
#define ISIF_FMTPGMAPS7           ( ISIF_BASE + 0x1A0 )
#define ISIF_CSCCTL               ( ISIF_BASE + 0x1A4 )
#define ISIF_CSCM0                ( ISIF_BASE + 0x1A8 )
#define ISIF_CSCM1                ( ISIF_BASE + 0x1AC )
#define ISIF_CSCM2                ( ISIF_BASE + 0x1B0 )
#define ISIF_CSCM3                ( ISIF_BASE + 0x1B4 )
#define ISIF_CSCM4                ( ISIF_BASE + 0x1B8 )
#define ISIF_CSCM5                ( ISIF_BASE + 0x1BC )
#define ISIF_CSCM6                ( ISIF_BASE + 0x1C0 )
#define ISIF_CSCM7                ( ISIF_BASE + 0x1C4 )
#define ISIF_OBWIN0               ( ISIF_BASE + 0x1C8 )
#define ISIF_OBWIN1               ( ISIF_BASE + 0x1CC )
#define ISIF_OBWIN2               ( ISIF_BASE + 0x1D0 )
#define ISIF_OBWIN3               ( ISIF_BASE + 0x1D4 )
#define ISIF_OBVAL0               ( ISIF_BASE + 0x1D8 )
#define ISIF_OBVAL1               ( ISIF_BASE + 0x1DC )
#define ISIF_OBVAL2               ( ISIF_BASE + 0x1E0 )
#define ISIF_OBVAL3               ( ISIF_BASE + 0x1E4 )
#define ISIF_OBVAL4               ( ISIF_BASE + 0x1E8 )
#define ISIF_OBVAL5               ( ISIF_BASE + 0x1EC )
#define ISIF_OBVAL6               ( ISIF_BASE + 0x1F0 )
#define ISIF_OBVAL7               ( ISIF_BASE + 0x1F4 )
#define ISIF_CLKCTL               ( ISIF_BASE + 0x1F8 )



/* ------------------------------------------------------------------------ *
 *                                                                          *
 *   Video Encoder********************************                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define VENC_BASE          0x01C71E00
#define VENC_VMOD          ( VENC_BASE + 0x000 )//**
#define VENC_VIOCTL        ( VENC_BASE + 0x004 )
#define VENC_VDPRO         ( VENC_BASE + 0x008 )
#define VENC_SYNCCTL       ( VENC_BASE + 0x00C )
#define VENC_HSPLS         ( VENC_BASE + 0x010 )
#define VENC_VSPLS         ( VENC_BASE + 0x014 )
#define VENC_HINTVL        ( VENC_BASE + 0x018 )//**
#define VENC_HSTART        ( VENC_BASE + 0x01C )
#define VENC_HVALID        ( VENC_BASE + 0x020 )
#define VENC_VINTVL        ( VENC_BASE + 0x024 )//**
#define VENC_VSTART        ( VENC_BASE + 0x028 )
#define VENC_VVALID        ( VENC_BASE + 0x02C )
#define VENC_HSDLY         ( VENC_BASE + 0x030 )
#define VENC_VSDLY         ( VENC_BASE + 0x034 )
#define VENC_YCCCTL        ( VENC_BASE + 0x038 )
#define VENC_RGBCTL        ( VENC_BASE + 0x03C )
#define VENC_RGBCLP        ( VENC_BASE + 0x040 )
#define VENC_LINECTL       ( VENC_BASE + 0x044 )
#define VENC_CULLLINE      ( VENC_BASE + 0x048 )
#define VENC_LCDOUT        ( VENC_BASE + 0x04C )
#define VENC_BRT0          ( VENC_BASE + 0x050 )//**
#define VENC_BRT1          ( VENC_BASE + 0x054 )//**
#define VENC_ACCTL         ( VENC_BASE + 0x058 )
#define VENC_PWM0          ( VENC_BASE + 0x05C )//**
#define VENC_PWM1          ( VENC_BASE + 0x060 )//**
#define VENC_DCLKCTL       ( VENC_BASE + 0x064 )
#define VENC_DCLKPTN0      ( VENC_BASE + 0x068 )
#define VENC_DCLKPTN1      ( VENC_BASE + 0x06C )
#define VENC_DCLKPTN2      ( VENC_BASE + 0x070 )
#define VENC_DCLKPTN3      ( VENC_BASE + 0x074 )
#define VENC_DCLKPTN0A     ( VENC_BASE + 0x078 )
#define VENC_DCLKPTN1A     ( VENC_BASE + 0x07C )
#define VENC_DCLKPTN2A     ( VENC_BASE + 0x080 )
#define VENC_DCLKPTN3A     ( VENC_BASE + 0x084 )
#define VENC_DCLKHSTT      ( VENC_BASE + 0x088 )//**
#define VENC_DCLKHSTTA     ( VENC_BASE + 0x08C )//**
#define VENC_DCLKHVLD      ( VENC_BASE + 0x090 )//**
#define VENC_DCLKVSTT      ( VENC_BASE + 0x094 )//**
#define VENC_DCLKVVLD      ( VENC_BASE + 0x098 )//**
#define VENC_CAPCTL        ( VENC_BASE + 0x09C )
#define VENC_CAPDO         ( VENC_BASE + 0x0A0 )
#define VENC_CAPDE         ( VENC_BASE + 0x0A4 )
#define VENC_ATR0          ( VENC_BASE + 0x0A8 )
#define VENC_ATR1          ( VENC_BASE + 0x0AC )
#define VENC_ATR2          ( VENC_BASE + 0x0B0 )
//#define RSV                (VENC_BASE + 0x0B4 )//**
#define VENC_VSTAT         ( VENC_BASE + 0x0B8 )
#define VENC_RAMADR        ( VENC_BASE + 0x0BC )
#define VENC_RAMPORT       ( VENC_BASE + 0x0C0 )
#define VENC_DACTST        ( VENC_BASE + 0x0C4 )
#define VENC_YCOLVL        ( VENC_BASE + 0x0C8 )
#define VENC_SCPROG        ( VENC_BASE + 0x0CC )
#define VENC_CVBS          ( VENC_BASE + 0x0DC )
#define VENC_CMPNT         ( VENC_BASE + 0x0E0 )
#define VENC_ETMG0         ( VENC_BASE + 0x0E4 )
#define VENC_ETMG1         ( VENC_BASE + 0x0E8 )
#define VENC_ETMG2         ( VENC_BASE + 0x0EC )
#define VENC_ETMG3         ( VENC_BASE + 0x0F0 )
#define VENC_DACSEL        ( VENC_BASE + 0x0F4 )
#define VENC_ARGBX0        ( VENC_BASE + 0x100 )
#define VENC_ARGBX1        ( VENC_BASE + 0x104 )
#define VENC_ARGBX2        ( VENC_BASE + 0x108 )
#define VENC_ARGBX3        ( VENC_BASE + 0x10C )
#define VENC_ARGBX4        ( VENC_BASE + 0x110 )
#define VENC_DRGBX0        ( VENC_BASE + 0x114 )
#define VENC_DRGBX1        ( VENC_BASE + 0x118 )
#define VENC_DRGBX2        ( VENC_BASE + 0x11C )
#define VENC_DRGBX3        ( VENC_BASE + 0x120 )
#define VENC_DRGBX4        ( VENC_BASE + 0x124 )
#define VENC_VSTARTA       ( VENC_BASE + 0x128 )
#define VENC_OSDCLK0       ( VENC_BASE + 0x12C )
#define VENC_OSDCLK1       ( VENC_BASE + 0x130 )
#define VENC_HVLDCL0       ( VENC_BASE + 0x134 )
#define VENC_HVLDCL1       ( VENC_BASE + 0x138 )
#define VENC_OSDHADV       ( VENC_BASE + 0x13C )
#define VENC_CLKCTL        ( VENC_BASE + 0x140 )//**
#define VENC_GAMCTL        ( VENC_BASE + 0x144 )//**
#define VENC_VVALIDA       ( VENC_BASE + 0x148 )//**
#define VENC_BATR0         ( VENC_BASE + 0x14C )//**
#define VENC_BATR1         ( VENC_BASE + 0x150 )//**
#define VENC_BATR2         ( VENC_BASE + 0x154 )//**
#define VENC_BATR3         ( VENC_BASE + 0x158 )//**
#define VENC_BATR4         ( VENC_BASE + 0x15C )//**
#define VENC_BATR5         ( VENC_BASE + 0x160 )//**
#define VENC_BATR6         ( VENC_BASE + 0x164 )//**
#define VENC_BATR7         ( VENC_BASE + 0x168 )//**
#define VENC_BATR8         ( VENC_BASE + 0x16C )//**
#define VENC_DACAMP        ( VENC_BASE + 0x170 )//**
#define VENC_XHINTVL       ( VENC_BASE + 0x174 )//**
#define VENC_SCTEST0       ( VENC_BASE + 0x1E8 )//** |SAME NAME DIFFERENT ADDRESS
#define VENC_SCTEST1       ( VENC_BASE + 0x1EC )//** |
#define VENC_SCTEST2       ( VENC_BASE + 0x1F0 )//** |
#define VENC_VTEST0        ( VENC_BASE + 0x1F4 )//** |
#define VENC_VTEST1        ( VENC_BASE + 0x1F8 )//** |
#define VENC_VTEST2        ( VENC_BASE + 0x1FC )//** ^



/* ------------------------------------------------------------------------ *
 *                                                                          *
 *   OSD                                                                    *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define OSD_BASE           0x01C71c00
#define OSD_MODE           ( OSD_BASE + 0x00 )
#define OSD_VIDWINMD       ( OSD_BASE + 0x04 )
#define OSD_OSDWIN0MD      ( OSD_BASE + 0x08 )
#define OSD_OSDWIN1MD      ( OSD_BASE + 0x0C )
#define OSD_RECTCUR        ( OSD_BASE + 0x10 )
#define OSD_VIDWIN0OFST    ( OSD_BASE + 0x18 )
#define OSD_VIDWIN1OFST    ( OSD_BASE + 0x1C )
#define OSD_OSDWIN0OFST    ( OSD_BASE + 0x20 )
#define OSD_OSDWIN1OFST    ( OSD_BASE + 0x24 )
#define OSD_VIDWIN0ADR     ( OSD_BASE + 0x2C )
#define OSD_VIDWIN1ADR     ( OSD_BASE + 0x30 )
#define OSD_VIDWINADH      ( OSD_BASE + 0x34 )
#define OSD_OSDWIN0ADL     ( OSD_BASE + 0x38 )
#define OSD_OSDWIN1ADL     ( OSD_BASE + 0x3C )
#define OSD_BASEPX         ( OSD_BASE + 0x40 )
#define OSD_BASEPY         ( OSD_BASE + 0x44 )
#define OSD_VIDWIN0XP      ( OSD_BASE + 0x48 )
#define OSD_VIDWIN0YP      ( OSD_BASE + 0x4C )
#define OSD_VIDWIN0XL      ( OSD_BASE + 0x50 )
#define OSD_VIDWIN0YL      ( OSD_BASE + 0x54 )
#define OSD_VIDWIN1XP      ( OSD_BASE + 0x58 )
#define OSD_VIDWIN1YP      ( OSD_BASE + 0x5C )
#define OSD_VIDWIN1XL      ( OSD_BASE + 0x60 )
#define OSD_VIDWIN1YL      ( OSD_BASE + 0x64 )
#define OSD_OSDWIN0XP      ( OSD_BASE + 0x68 )
#define OSD_OSDWIN0YP      ( OSD_BASE + 0x6C )
#define OSD_OSDWIN0XL      ( OSD_BASE + 0x70 )
#define OSD_OSDWIN0YL      ( OSD_BASE + 0x74 )
#define OSD_OSDWIN1XP      ( OSD_BASE + 0x78 )
#define OSD_OSDWIN1YP      ( OSD_BASE + 0x7C )
#define OSD_OSDWIN1XL      ( OSD_BASE + 0x80 )
#define OSD_OSDWIN1YL      ( OSD_BASE + 0x84 )
#define OSD_CURXP          ( OSD_BASE + 0x88 )
#define OSD_CURYP          ( OSD_BASE + 0x8C )
#define OSD_CURXL          ( OSD_BASE + 0x90 )
#define OSD_CURYL          ( OSD_BASE + 0x94 )
#define OSD_W0BMP01        ( OSD_BASE + 0xA0 )
#define OSD_W0BMP23        ( OSD_BASE + 0xA4 )
#define OSD_W0BMP45        ( OSD_BASE + 0xA8 )
#define OSD_W0BMP67        ( OSD_BASE + 0xAC )
#define OSD_W0BMP89        ( OSD_BASE + 0xB0 )
#define OSD_W0BMPAB        ( OSD_BASE + 0xB4 )
#define OSD_W0BMPCD        ( OSD_BASE + 0xB8 )
#define OSD_W0BMPEF        ( OSD_BASE + 0xBC )
#define OSD_W1BMP01        ( OSD_BASE + 0xC0 )
#define OSD_W1BMP23        ( OSD_BASE + 0xC4 )
#define OSD_W1BMP45        ( OSD_BASE + 0xC8 )
#define OSD_W1BMP67        ( OSD_BASE + 0xCC )
#define OSD_W1BMP89        ( OSD_BASE + 0xD0 )
#define OSD_W1BMPAB        ( OSD_BASE + 0xD4 )
#define OSD_W1BMPCD        ( OSD_BASE + 0xD8 )
#define OSD_W1BMPEF        ( OSD_BASE + 0xDC )
#define OSD_TI_TEST        ( OSD_BASE + 0xE0 )
#define OSD_MISCCTL        ( OSD_BASE + 0xE8 )
#define OSD_CLUTRAMYCB     ( OSD_BASE + 0xEC )
#define OSD_CLUTRAMCR      ( OSD_BASE + 0xF0 )
#define OSD_TRANSPVAL      ( OSD_BASE + 0xF0 )
#define OSD_PPVWIN0ADR     ( OSD_BASE + 0xFC )


/* ------------------------------------------------------------------------ *
 *                                                                          *
 *   VPSS Control                                                           *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define VPSS_BASE               0x01C70200
#define VPSS_VPBE_CLK_CTRL      ( VPSS_BASE + 0x00 )
#define VPSS_MISR_CTRL          ( VPSS_BASE + 0x04 )
#define VPSS_MISR_OUT           ( VPSS_BASE + 0x08 )

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *   ISP5 Control                                                           *
 *                                                                          *
 * ------------------------------------------------------------------------ */
#define ISP5_BASE               0x01C70000
#define ISP5_PCCR               ( ISP5_BASE + 0x04 )
#define ISP5_BCR                ( ISP5_BASE + 0x08 )
#define ISP5_INTSTAT            ( ISP5_BASE + 0x0C )
#define ISP5_INTSEL1            ( ISP5_BASE + 0x10 )
#define ISP5_INTSEL2            ( ISP5_BASE + 0x14 )
#define ISP5_INTSEL3            ( ISP5_BASE + 0x18 )
#define ISP5_EVTSEL             ( ISP5_BASE + 0x1C )
#define ISP5_CCDMUX             ( ISP5_BASE + 0x20 )




#endif
