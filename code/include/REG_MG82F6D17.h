/**
 ******************************************************************************
 *
 * @file        REG_MG82F6D17.H
 *
 * @brief       This is the header file of the SFR address.
 *
 * @par         Project
 *              MG82F6D17
 * @version     v2.00
 * @date        2022/02/15
 * @copyright   Copyright (c) 2019 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par         Disclaimer
 *      The Demo software is provided "AS IF"  without any warranty, either
 *      expressed or implied, including, but not limited to, the implied warranties
 *      of merchantability and fitness for a particular purpose.  The author will
 *      not be liable for any special, incidental, consequential or indirect
 *      damages due to loss of data or any other reason.
 *      These statements agree with the world wide and local dictated laws about
 *      authorship and violence against these laws.
 ******************************************************************************
 @if HIDE
 Modify History:
 * #2.00_Blake_20220215
 * >> Add SFR description
 @endif
 ******************************************************************************
 * @internal
 * @sign
 * @endinternal
 */

#ifndef __REG_MG82F6D17_H
#define __REG_MG82F6D17_H

#define GF_7         0x80
#define GF_6         0x40
#define GF_5         0x20
#define GF_4         0x10
#define GF_3         0x08
#define GF_2         0x04
#define GF_1         0x02
#define GF_0         0x01

sfr SP                     = 0x81;     //Stack Pointer

sfr DPL                    = 0x82;     //Data Pointer Low

sfr DPH                    = 0x83;     //Data Pointer High

sfr SPSTAT                 = 0x84;     //SPI Status Register
// (bits in SPSTAT)
#define SPIF                 0x80
#define WCOL                 0x40
#define THRF                 0x20
#define SPIBSY               0x10
#define MODF                 0x08
#define SPR2                 0x01

sfr SPCON                  = 0x85;     //SPI Control Register
// (bits in SPCON)
#define SSIG                 0x80
#define SPEN                 0x40
#define DORD                 0x20
#define MSTR                 0x10
#define CPOL                 0x08
#define CPHA                 0x04
#define SPR1                 0x02
#define SPR0                 0x01

sfr SPDAT                  = 0x86;     //SPI Data Register

sfr PCON0                  = 0x87;     //Power Control 0
// (bits in PCON0)
#define SMOD1                0x80
#define SMOD0                0x40
#define POF0                 0x10
#define PD                   0x02
#define IDL                  0x01

sfr TCON                   = 0x88;     //Timer Control
// (bits in TCON)
sbit TF1                   = TCON^7;
sbit TR1                   = TCON^6;
sbit TF0                   = TCON^5;
sbit TR0                   = TCON^4;
sbit IE1                   = TCON^3;
sbit IT1                   = TCON^2;
sbit IE0                   = TCON^1;
sbit IT0                   = TCON^0;

sfr TMOD                   = 0x89;     //Timer Mode
// (bits in TMOD)
#define T1GATE               0x80
#define T1C_T                0x40
#define T1M1                 0x20
#define T1M0                 0x10
#define T0GATE               0x08
#define T0C_T                0x04
#define T0M1                 0x02
#define T0M0                 0x01

sfr TL0                    = 0x8A;     //Timer Low 0

sfr TL1                    = 0x8B;     //Timer Low 1

sfr TH0                    = 0x8C;     //Timer High 0

sfr TH1                    = 0x8D;     //Timer High 1

sfr SFIE                   = 0x8E;     //System Flag INT En.
// (bits in SFIE)
#define SIDFIE               0x80
#define RTCFIE               0x10
#define BOF1IE               0x04
#define BOF0IE               0x02
#define WDTFIE               0x01

sfr XRPS                   = 0x8F;     //XRAM Page Select

sfr P1                     = 0x90;     //Port 1
// (bits in P1)
sbit P17                   = P1^7;
sbit P16                   = P1^6;
sbit P15                   = P1^5;
sbit P11                   = P1^1;
sbit P10                   = P1^0;

sfr P1M0                   = 0x91;     //P1 Mode Register 0
// (bits in P1M0)
#define P1M07                0x80
#define P1M06                0x40
#define P1M05                0x20
#define P1M01                0x02
#define P1M00                0x01

sfr P1M1                   = 0x92;     //P1 Mode Register 1
// (bits in P1M1)
#define P1M17                0x80
#define P1M16                0x40
#define P1M15                0x20
#define P1M11                0x02
#define P1M10                0x01

sfr P2M1                   = 0x92;     //P2 Mode Register 1
// (bits in P2M1)
#define P2M14                0x10
#define P2M12                0x04

sfr P4M1                   = 0x92;     //P4 Mode Register 1
// (bits in P4M1)
#define P4M17                0x80
#define P4M15                0x20
#define P4M14                0x10

sfr P6M1                   = 0x92;     //P6 Mode Register 1
// (bits in P6M1)
#define P6M11                0x02
#define P6M10                0x01

sfr P3FDC                  = 0x92;     //P3 Fast Drv. Ctrl.

sfr P1FDC                  = 0x92;     //P1 Fast Drv. Ctrl.

sfr P2FDC                  = 0x92;     //P2 Fast Drv. Ctrl.

sfr P4FDC                  = 0x92;     //P4 Fast Drv. Ctrl.

sfr T2MOD1                 = 0x93;     //Timer2 mode 1 Reg.
// (bits in T2MOD1)
#define TL2CS                0x80
#define TF2IG                0x40
#define TL2IS                0x20
#define T2CKS                0x10
#define T2MS1                0x08
#define CP2S2                0x04
#define CP2S1                0x02
#define CP2S0                0x01

sfr T3MOD1                 = 0x93;     //Timer3 mode 1 Reg.
// (bits in T3MOD1)
#define TL3CS                0x80
#define TF3IG                0x40
#define T3CKS                0x10
#define T3MS1                0x08
#define CP3S2                0x04
#define CP3S1                0x02
#define CP3S0                0x01

sfr DMACR0                 = 0x94;     //DMA Control Reg. 0
// (bits in DMACR0)
#define DMAE0                0x08
#define DMAS0                0x04
#define DIE0                 0x02
#define DCF0                 0x01

sfr DMACG0                 = 0x94;     //DMA Configured Reg. 0
// (bits in DMACG0)
#define PDMAH                0x80
#define PDMAL                0x40
#define CRCW0                0x20
#define EXTS10               0x08
#define EXTS00               0x04
#define FAEN0                0x02
#define LOOP0                0x01

sfr DMADS0                 = 0x94;     //DMA Channel Selection 0
// (bits in DMADS0)
#define DSS30                0x80
#define DSS20                0x40
#define DSS10                0x20
#define DSS00                0x10
#define DDS30                0x08
#define DDS20                0x04
#define DDS10                0x02
#define DDS00                0x01

sfr P2M0                   = 0x95;     //P2 Mode Register 0
// (bits in P2M0)
#define P2M04                0x10
#define P2M02                0x04

sfr TREN0                  = 0x95;     //Timer Run Enable Register 0
// (bits in TREN0)
#define TR3LE                0x40
#define TR2LE                0x20
#define TR3E                 0x08
#define TR2E                 0x04
#define TR1E                 0x02
#define TR0E                 0x01

sfr TRLC0                  = 0x95;     //Timer Reload Control Register 0
// (bits in TRLC0)
#define TL3RLC               0x40
#define TL2RLC               0x20
#define T3RLC                0x08
#define T2RLC                0x04
#define T1RLC                0x02
#define T0RLC                0x01

sfr TSPC0                  = 0x95;     //Timer Stop Control Register 0
// (bits in TSPC0)
#define TL3SC                0x40
#define TL2SC                0x20
#define T3SC                 0x08
#define T2SC                 0x04
#define T1SC                 0x02
#define T0SC                 0x01

sfr BOREV                  = 0x96;     //Bit Order Reversed

sfr PCON1                  = 0x97;     //Power Control 1
// (bits in PCON1)
#define SWRF                 0x80
#define EXRF                 0x40
#define RTCF                 0x10
#define BOF1                 0x04
#define BOF0                 0x02
#define WDTF                 0x01

sfr S0CON                  = 0x98;     //Serial 0 Control
// (bits in S0CON)
sbit SM00_FE               = S0CON^7;
sbit SM10                  = S0CON^6;
sbit SM20                  = S0CON^5;
sbit REN0                  = S0CON^4;
sbit TB80                  = S0CON^3;
sbit RB80                  = S0CON^2;
sbit TI0                   = S0CON^1;
sbit RI0                   = S0CON^0;

sfr S1CON                  = 0x98;     //Serial 1 Control
// (bits in S1CON)
sbit SM01                  = S1CON^7;
sbit SM11                  = S1CON^6;
sbit SM21                  = S1CON^5;
sbit REN1                  = S1CON^4;
sbit TB81                  = S1CON^3;
sbit RB81                  = S1CON^2;
sbit TI1                   = S1CON^1;
sbit RI1                   = S1CON^0;

sfr S0BUF                  = 0x99;     //Serial 0 Buffer

sfr S1BUF                  = 0x99;     //Serial 1 Buffer

sfr S0BRT                  = 0x9A;     //S0 Baud-Rate Timer

sfr S1BRT                  = 0x9A;     //S1 Baud-Rate Timer

sfr S0BRC                  = 0x9B;     //S0 Baud-Rate Counter

sfr S1BRC                  = 0x9B;     //S1 Baud-Rate Counter

sfr S0CFG                  = 0x9C;     //S0 Configuration
// (bits in S0CFG)
#define URTS                 0x80
#define SMOD2                0x40
#define URM0X3               0x20
#define SM30                 0x10
#define S0DOR                0x08
#define BTI                  0x04
#define UTIE                 0x02
#define SMOD3                0x01

sfr S1CFG                  = 0x9C;     //S1 Configuration
// (bits in S1CFG)
#define SM31                 0x80
#define S1M0X3               0x40
#define S1DOR                0x20
#define S1TR                 0x10
#define S1MOD1               0x08
#define S1TX12               0x04
#define S1CKOE               0x02
#define S1TME                0x01

sfr S0CFG1                 = 0x9D;     //S0 Configuration 1
// (bits in S0CFG1)
#define SBF0                 0x80
#define TXER0                0x40
#define S0SB16               0x20
#define ATBR0                0x10
#define TXRX0                0x08
#define SYNC0                0x04

sfr P2                     = 0xA0;     //Port 2
// (bits in P2)
sbit P24                   = P2^4;
sbit P22                   = P2^2;

sfr AUXR0                  = 0xA1;     //Auxiliary Register 0
// (bits in AUXR0)
#define P60OC1               0x80
#define P60OC0               0x40
#define P60FD                0x20
#define PBKF                 0x10
#define INT1H                0x02
#define INT0H                0x01

sfr AUXR1                  = 0xA2;     //Auxiliary Register 1
// (bits in AUXR1)
#define CRCDS1               0x20
#define CRCDS0               0x10
#define DPS                  0x01

sfr AUXR2                  = 0xA3;     //Auxiliary Register 2
// (bits in AUXR2)
#define STAF                 0x80
#define STOF                 0x40
#define C0PLK                0x10
#define T1X12                0x08
#define T0X12                0x04
#define T1CKOE               0x02
#define T0CKOE               0x01

sfr AUXR3                  = 0xA4;     //Auxiliary Register 3
// (bits in AUXR3)
#define T0PS1                0x80
#define T0PS0                0x40
#define BPOC1                0x20
#define BPOC0                0x10
#define S0PS0                0x08
#define TWIPS1               0x04
#define TWIPS0               0x02
#define T0XL                 0x01

sfr AUXR4                  = 0xA4;     //Auxiliary Register 4
// (bits in AUXR4)
#define T2PS1                0x80
#define T2PS0                0x40
#define T1PS1                0x20
#define T1PS0                0x10

sfr AUXR5                  = 0xA4;     //Auxiliary Register 5
// (bits in AUXR5)
#define C0IC4S0              0x80
#define C0IC2S0              0x40
#define C0PPS1               0x20
#define C0PPS0               0x10
#define C0PS0                0x04
#define ECIPS0               0x02
#define C0COPS               0x01

sfr AUXR6                  = 0xA4;     //Auxiliary Register 6
// (bits in AUXR6)
#define KBI4PS1              0x80
#define KBI4PS0              0x40
#define KBI6PS0              0x20
#define KBI2PS0              0x10
#define SnMIPS               0x02
#define S0COPS               0x01

sfr AUXR7                  = 0xA4;     //Auxiliary Register 7
// (bits in AUXR7)
#define POE5                 0x80
#define POE4                 0x40
#define C0CKOE               0x20
#define SPI0M0               0x10

sfr AUXR8                  = 0xA4;     //Auxiliary Register 8
// (bits in AUXR8)
#define POE7                 0x80
#define POE6                 0x40
#define C0PPS2               0x20
#define KBI0PS0              0x08
#define S1COPS               0x04

sfr AUXR9                  = 0xA4;     //Auxiliary Register 9
// (bits in AUXR9)
#define T1G1                 0x20
#define T0G1                 0x10
#define C0FDC1               0x08
#define C0FDC0               0x04
#define S1PS1                0x02
#define S1PS0                0x01

sfr AUXR10                 = 0xA4;     //Aux. Register 10
// (bits in AUXR10)
#define SPIPS0               0x10
#define S0PS1                0x08
#define TWICF                0x02
#define PAA                  0x01

sfr AUXR11                 = 0xA4;     //Aux. Register 11
// (bits in AUXR11)
#define P30AM                0x80
#define C0M0                 0x02
#define C0OFS                0x01

sfr EIE2                   = 0xA5;     //Extended INT Enable 2
// (bits in EIE2)
#define ET3                  0x01

sfr EIP2L                  = 0xA6;     //Ext. INT Priority 2 Low
// (bits in EIP2L)
#define PT3L                 0x01

sfr EIP2H                  = 0xA7;     //Ext. INT Priority 2 High
// (bits in EIP2H)
#define PT3H                 0x01

sfr IE                     = 0xA8;     //Interrupt Enable
// (bits in IE)
sbit EA                    = IE^7;
sbit EDMA                  = IE^6;
sbit ET2                   = IE^5;
sbit ES0                   = IE^4;
sbit ET1                   = IE^3;
sbit EX1                   = IE^2;
sbit ET0                   = IE^1;
sbit EX0                   = IE^0;

sfr SADDR                  = 0xA9;     //Slave Address

sfr SFRPI                  = 0xAC;     //SFR Page Index
// (bits in SFRPI)
#define IDX3                 0x08
#define IDX2                 0x04
#define IDX1                 0x02
#define IDX0                 0x01

sfr EIE1                   = 0xAD;     //Extended INT Enable 1
// (bits in EIE1)
#define ETWI0                0x40
#define EKB                  0x20
#define ES1                  0x10
#define ESF                  0x08
#define EPCA                 0x04
#define EADC                 0x02
#define ESPI                 0x01

sfr EIP1L                  = 0xAE;     //Ext. INT Priority 1 Low
// (bits in EIP1L)
#define PTWI0L               0x40
#define PKBL                 0x20
#define PS1L                 0x10
#define PSFL                 0x08
#define PPCAL                0x04
#define PADCL                0x02
#define PSPIL                0x01

sfr EIP1H                  = 0xAF;     //Ext. INT Priority 1 High
// (bits in EIP1H)
#define PTWI0H               0x40
#define PKBH                 0x20
#define PS1H                 0x10
#define PSFH                 0x08
#define PPCAH                0x04
#define PADCH                0x02
#define PSPIH                0x01

sfr P3                     = 0xB0;     //Port 3
// (bits in P3)
sbit P35                   = P3^5;
sbit P34                   = P3^4;
sbit P33                   = P3^3;
sbit P31                   = P3^1;
sbit P30                   = P3^0;

sfr P3M0                   = 0xB1;     //P3 Mode Register 0
// (bits in P3M0)
#define P3M05                0x20
#define P3M04                0x10
#define P3M03                0x08
#define P3M01                0x02
#define P3M00                0x01

sfr P3M1                   = 0xB2;     //P3 Mode Register 1
// (bits in P3M1)
#define P3M15                0x20
#define P3M14                0x10
#define P3M13                0x08
#define P3M11                0x02
#define P3M10                0x01

sfr P4M0                   = 0xB3;     //P4 Mode Register 0
// (bits in P4M0)
#define P4M07                0x80
#define P4M05                0x20
#define P4M04                0x10

sfr PDRVC0                 = 0xB4;     //Port Driving Control 0
// (bits in PDRVC0)
#define P3DC1                0x80
#define P3DC0                0x40
#define P2DC1                0x20
#define P2DC0                0x10
#define P1DC1                0x08
#define P1DC0                0x04

sfr PDRVC1                 = 0xB4;     //Port Driving Control 1
// (bits in PDRVC1)
#define P4DC1                0x02

sfr P6M0                   = 0xB5;     //P6 Mode Register 0
// (bits in P6M0)
#define P6M01                0x02
#define P6M00                0x01

sfr RTCTM                  = 0xB6;     //RTC Timer Register
// (bits in RTCTM)
#define RTCCS1               0x80
#define RTCCS0               0x40
#define RTCCT5               0x20
#define RTCCT4               0x10
#define RTCCT3               0x08
#define RTCCT2               0x04
#define RTCCT1               0x02
#define RTCCT0               0x01

sfr IP0H                   = 0xB7;     //Interrupt Priority 0 High
// (bits in IP0H)
#define PX2H                 0x40
#define PT2H                 0x20
#define PSH                  0x10
#define PT1H                 0x08
#define PX1H                 0x04
#define PT0H                 0x02
#define PX0H                 0x01

sfr IP0L                   = 0xB8;     //Interrupt Priority Low
// (bits in IP0L)
sbit PX2L                  = IP0L^6;
sbit PT2L                  = IP0L^5;
sbit PSL                   = IP0L^4;
sbit PT1L                  = IP0L^3;
sbit PX1L                  = IP0L^2;
sbit PT0L                  = IP0L^1;
sbit PX0L                  = IP0L^0;

sfr SADEN                  = 0xB9;     //Slave Address Mask

sfr S0CR1                  = 0xB9;     //S0 Control 1
// (bits in S0CR1)
#define S0TR                 0x80
#define S0TX12               0x40
#define S0TCK                0x20
#define S0RCK                0x10
#define S0CKOE               0x08
#define ARTE                 0x04

sfr PWMCR                  = 0xBC;     //PWM Control Reg.
// (bits in PWMCR)
#define PCAE                 0x80
#define EXDT                 0x40
#define PBKM                 0x20
#define PBKE11               0x10
#define PBKE10               0x08
#define PBKE02               0x04
#define PBKE01               0x02
#define PBKE00               0x01

sfr PDTCRA                 = 0xBC;     //PWM Dead-Time Control Reg. -A
// (bits in PDTCRA)
#define DTPS1                0x80
#define DTPS0                0x40
#define DT5                  0x20
#define DT4                  0x10
#define DT3                  0x08
#define DT2                  0x04
#define DT1                  0x02
#define DT0                  0x01

sfr CRC0DA                 = 0xBD;     //CRC0 Data Port

sfr RTCCR                  = 0xBE;     //RTC Control Reg.
// (bits in RTCCR)
#define RTCE                 0x80
#define RTCO                 0x40
#define RTCRL5               0x20
#define RTCRL4               0x10
#define RTCRL3               0x08
#define RTCRL2               0x04
#define RTCRL1               0x02
#define RTCRL0               0x01

sfr CKCON1                 = 0xBF;     //Clock Control 1

sfr XICON                  = 0xC0;     //External INT Control
// (bits in XICON)
sbit INT2H                 = XICON^3;
sbit EX2                   = XICON^2;
sbit IE2                   = XICON^1;
sbit IT2                   = XICON^0;

sfr XICFG                  = 0xC1;     //Ext. INT. Configured
// (bits in XICFG)
#define INT1IS1              0x80
#define INT1IS0              0x40
#define INT0IS1              0x20
#define INT0IS0              0x10
#define X2FLT                0x04
#define X1FLT                0x02
#define X0FLT                0x01

sfr XICFG1                 = 0xC1;     //Ext. INT. Configured 1
// (bits in XICFG1)
#define INT1IS2              0x80
#define INT0IS2              0x40
#define INT2IS1              0x20
#define INT2IS0              0x10
#define X2FLT1               0x04
#define X1FLT1               0x02
#define X0FLT1               0x01

sfr ADCFG0                 = 0xC3;     //ADC Configuration 0
// (bits in ADCFG0)
#define ADCKS2               0x80
#define ADCKS1               0x40
#define ADCKS0               0x20
#define ADRJ                 0x10
#define ACHS                 0x08
#define SMPF                 0x04
#define ADTM1                0x02
#define ADTM0                0x01

sfr ADCFG1                 = 0xC3;     //ADC Configuration 1
// (bits in ADCFG1)
#define IGADCI               0x80
#define EADCWI               0x40
#define SMPFIE               0x20
#define SIGN                 0x10
#define AOS3                 0x08
#define AOS2                 0x04
#define AOS1                 0x02
#define AOS0                 0x01

sfr ADCFG2                 = 0xC3;     //ADC Configuration 2
// (bits in ADCFG2)
#define SHT7                 0x80
#define SHT6                 0x40
#define SHT5                 0x20
#define SHT4                 0x10
#define SHT3                 0x08
#define SHT2                 0x04
#define SHT1                 0x02
#define SHT0                 0x01

sfr ADCFG3                 = 0xC3;     //ADC Configuration 3
// (bits in ADCFG3)
#define ADPS1                0x80
#define ADPS0                0x40
#define ARES1                0x08
#define ARES0                0x04
#define ADES0                0x02

sfr ADCFG4                 = 0xC3;     //ADC Configuration 4
// (bits in ADCFG4)
#define ADWM0                0x40
#define ADTM3                0x20
#define ADTM2                0x10
#define DBSD                 0x02

sfr ADCFG5                 = 0xC3;     //ADC Configuration 5
// (bits in ADCFG5)
#define ASCE7                0x80
#define ASCE6                0x40
#define ASCE5                0x20
#define ASCE4                0x10
#define ASCE3                0x08
#define ASCE2                0x04
#define ASCE1                0x02
#define ASCE0                0x01

sfr ADCFG11                = 0xC3;     //ADC Configuration 11
// (bits in ADCFG11)
#define WHB3                 0x80
#define WHB2                 0x40
#define WHB1                 0x20
#define WHB0                 0x10

sfr ADCFG12                = 0xC3;     //ADC Configuration 12
// (bits in ADCFG12)
#define WHB11                0x80
#define WHB10                0x40
#define WHB9                 0x20
#define WHB8                 0x10
#define WHB7                 0x08
#define WHB6                 0x04
#define WHB5                 0x02
#define WHB4                 0x01

sfr ADCFG13                = 0xC3;     //ADC Configuration 13
// (bits in ADCFG13)
#define WLB3                 0x80
#define WLB2                 0x40
#define WLB1                 0x20
#define WLB0                 0x10

sfr ADCFG14                = 0xC3;     //ADC Configuration 14
// (bits in ADCFG14)
#define WLB11                0x80
#define WLB10                0x40
#define WLB9                 0x20
#define WLB8                 0x10
#define WLB7                 0x08
#define WLB6                 0x04
#define WLB5                 0x02
#define WLB4                 0x01

sfr ADCON0                 = 0xC4;     //ADC Control 0
// (bits in ADCON0)
#define ADCEN                0x80
#define ADCWI                0x40
#define CHS3                 0x20
#define ADCI                 0x10
#define ADCS                 0x08
#define CHS2                 0x04
#define CHS1                 0x02
#define CHS0                 0x01

sfr ADCDL                  = 0xC5;     //ADC Data Low
// (bits in ADCDL)
#define ADCV3                0x80
#define ADCV2                0x40
#define ADCV1                0x20
#define ADCV0                0x10

sfr ADCDH                  = 0xC6;     //ADC Data High
// (bits in ADCDH)
#define ADCV11               0x80
#define ADCV10               0x40
#define ADCV9                0x20
#define ADCV8                0x10
#define ADCV7                0x08
#define ADCV6                0x04
#define ADCV5                0x02
#define ADCV4                0x01

sfr CKCON0                 = 0xC7;     //Clock Control 0
// (bits in CKCON0)
#define AFS                  0x80
#define ENCKM                0x40
#define CKMIS1               0x20
#define CKMIS0               0x10
#define CCKS                 0x08
#define SCKS2                0x04
#define SCKS1                0x02
#define SCKS0                0x01

sfr T2CON                  = 0xC8;     //Timer 2 Control Reg.
// (bits in T2CON)
sbit TF2                   = T2CON^7;
sbit EXF2                  = T2CON^6;
sbit RCLK_TF2L             = T2CON^5;
sbit TCLK_TL2IE            = T2CON^4;
sbit EXEN2                 = T2CON^3;
sbit TR2                   = T2CON^2;
sbit C_T2                  = T2CON^1;
sbit CP_RL2                = T2CON^0;

sfr T3CON                  = 0xC8;     //Timer 3 Control Reg.
// (bits in T3CON)
sbit TF3                   = T3CON^7;
sbit EXF3                  = T3CON^6;
sbit TF3L                  = T3CON^5;
sbit TL3IE                 = T3CON^4;
sbit EXEN3                 = T3CON^3;
sbit TR3                   = T3CON^2;
sbit C_T3                  = T3CON^1;
sbit CP_RL3                = T3CON^0;

sfr T5CON                  = 0xC8;     //Timer 5 Control Reg.
// (bits in T5CON)
sbit TF5                   = T5CON^7;
sbit T5CKS1                = T5CON^5;
sbit T5CKS0                = T5CON^4;
sbit T5IE                  = T5CON^3;
sbit TR5                   = T5CON^2;
sbit T5GAT1                = T5CON^1;
sbit T5GAT0                = T5CON^0;

sfr T6CON                  = 0xC8;     //Timer 6 Control Reg.
// (bits in T6CON)
sbit TF6                   = T6CON^7;
sbit T6CKS1                = T6CON^5;
sbit T6CKS0                = T6CON^4;
sbit T6IE                  = T6CON^3;
sbit TR6                   = T6CON^2;
sbit T6GAT1                = T6CON^1;
sbit T6GAT0                = T6CON^0;

sfr T2MOD                  = 0xC9;     //Timer 2 mode Reg.
// (bits in T2MOD)
#define T2SPL                0x80
#define TL2X12               0x40
#define T2EXH                0x20
#define T2X12                0x10
#define TR2L                 0x08
#define TR2LC                0x04
#define T2OE                 0x02
#define T2MS0                0x01

sfr T3MOD                  = 0xC9;     //Timer 3 mode Reg.
// (bits in T3MOD)
#define T3SPL                0x80
#define TL3X12               0x40
#define T3EXH                0x20
#define T3X12                0x10
#define TR3L                 0x08
#define TR3LC                0x04
#define T3OE                 0x02
#define T3MS0                0x01

sfr RCAP2L                 = 0xCA;     //Timer2 Capture Low

sfr RCAP3L                 = 0xCA;     //Timer3 Capture Low

sfr TLR5                   = 0xCA;     //TL5 reload Reg.

sfr TLR6                   = 0xCA;     //TL6 reload Reg.

sfr RCAP2H                 = 0xCB;     //Timer2 Capture High

sfr RCAP3H                 = 0xCB;     //Timer3 Capture High

sfr THR5                   = 0xCB;     //TH5 reload Reg.

sfr THR6                   = 0xCB;     //TH6 reload Reg.

sfr TL2                    = 0xCC;     //Timer Low 2

sfr TL3                    = 0xCC;     //Timer Low 3

sfr TL5                    = 0xCC;     //Timer Low 5

sfr TL6                    = 0xCC;     //Timer Low 6

sfr TH2                    = 0xCD;     //Timer High 2

sfr TH3                    = 0xCD;     //Timer High 3

sfr TH5                    = 0xCD;     //Timer High 5

sfr TH6                    = 0xCD;     //Timer High 6

sfr CLRL                   = 0xCE;     //CL Reload register

sfr CHRL                   = 0xCF;     //CH Reload register

sfr PSW                    = 0xD0;     //Program Status Word
// (bits in PSW)
sbit CY                    = PSW^7;
sbit AC                    = PSW^6;
sbit F0                    = PSW^5;
sbit RS1                   = PSW^4;
sbit RS0                   = PSW^3;
sbit OV                    = PSW^2;
sbit F1                    = PSW^1;
sbit P                     = PSW^0;

sfr SIADR                  = 0xD1;     //TWI0 Address Reg.
// (bits in SIADR)
#define GC                   0x01

sfr SIDAT                  = 0xD2;     //TWI0 Data Reg.

sfr SISTA                  = 0xD3;     //TWI0 Status Reg.

sfr SICON                  = 0xD4;     //TWI0 Control Reg.
// (bits in SICON)
#define CR2                  0x80
#define ENSI                 0x40
#define STA                  0x20
#define STO                  0x10
#define SI                   0x08
#define AA                   0x04
#define CR1                  0x02
#define CR0                  0x01

sfr KBPATN                 = 0xD5;     //Keypad Pattern

sfr KBCON                  = 0xD6;     //Keypad Control
// (bits in KBCON)
#define KBCS1                0x80
#define KBCS0                0x40
#define KBES                 0x20
#define PATN_SEL             0x02
#define KBIF                 0x01

sfr KBMASK                 = 0xD7;     //Keypad Int. Mask

sfr CCON                   = 0xD8;     //PCA Control Reg.
// (bits in CCON)
sbit CF                    = CCON^7;
sbit CR                    = CCON^6;
sbit CCF5                  = CCON^5;
sbit CCF4                  = CCON^4;
sbit CCF3                  = CCON^3;
sbit CCF2                  = CCON^2;
sbit CCF1                  = CCON^1;
sbit CCF0                  = CCON^0;

sfr CMOD                   = 0xD9;     //PCA Mode Reg.
// (bits in CMOD)
#define CIDL                 0x80
#define BME4                 0x40
#define BME2                 0x20
#define BME0                 0x10
#define CPS2                 0x08
#define CPS1                 0x04
#define CPS0                 0x02
#define ECF                  0x01

sfr CCAPM0                 = 0xDA;     //PCA Module0 Mode
// (bits in CCAPM0)
#define DTE0                 0x80
#define ECOM0                0x40
#define CAPP0                0x20
#define CAPN0                0x10
#define MAT0                 0x08
#define TOG0                 0x04
#define PWM0                 0x02
#define ECCF0                0x01

sfr CCAPM6                 = 0xDA;     //PCA Module6 Mode
// (bits in CCAPM6)
#define BME6                 0x80
#define ECOM6                0x40
#define CAPN6                0x10
#define MAT6                 0x08
#define TOG6                 0x04
#define PWM6                 0x02
#define ECCF6                0x01

sfr CCAPM1                 = 0xDB;     //PCA Module1 Mode
// (bits in CCAPM1)
#define ECOM1                0x40
#define CAPP1                0x20
#define CAPN1                0x10
#define MAT1                 0x08
#define TOG1                 0x04
#define PWM1                 0x02
#define ECCF1                0x01

sfr CCAPM7                 = 0xDB;     //PCA Module7 Mode
// (bits in CCAPM7)
#define ECOM7                0x40
#define CAPN7                0x10
#define MAT7                 0x08
#define TOG7                 0x04
#define PWM7                 0x02
#define ECCF7                0x01

sfr CCAPM2                 = 0xDC;     //PCA Module2 Mode
// (bits in CCAPM2)
#define DTE2                 0x80
#define ECOM2                0x40
#define CAPP2                0x20
#define CAPN2                0x10
#define MAT2                 0x08
#define TOG2                 0x04
#define PWM2                 0x02
#define ECCF2                0x01

sfr CCAPM3                 = 0xDD;     //PCA Module3 Mode
// (bits in CCAPM3)
#define ECOM3                0x40
#define CAPP3                0x20
#define CAPN3                0x10
#define MAT3                 0x08
#define TOG3                 0x04
#define PWM3                 0x02
#define ECCF3                0x01

sfr CCAPM4                 = 0xDE;     //PCA Module4 Mode
// (bits in CCAPM4)
#define DTE4                 0x80
#define ECOM4                0x40
#define CAPP4                0x20
#define CAPN4                0x10
#define MAT4                 0x08
#define TOG4                 0x04
#define PWM4                 0x02
#define ECCF4                0x01

sfr CCAPM5                 = 0xDF;     //PCA Module5 Mode
// (bits in CCAPM5)
#define ECOM5                0x40
#define CAPP5                0x20
#define CAPN5                0x10
#define MAT5                 0x08
#define TOG5                 0x04
#define PWM5                 0x02
#define ECCF5                0x01

sfr ACC                    = 0xE0;     //Accumulator

sfr WDTCR                  = 0xE1;     //WDT Control register
// (bits in WDTCR)
#define WREN                 0x80
#define NSW                  0x40
#define ENW                  0x20
#define CLRW                 0x10
#define WIDL                 0x08
#define PS2                  0x04
#define PS1                  0x02
#define PS0                  0x01

sfr IFD                    = 0xE2;     //ISP Flash data

sfr IFADRH                 = 0xE3;     //ISP Flash Addr. High

sfr IFADRL                 = 0xE4;     //ISP Flash Addr. Low

sfr IFMT                   = 0xE5;     //ISP Mode Table
// (bits in IFMT)
#define MS7                  0x80
#define MS2                  0x04
#define MS1                  0x02
#define MS0                  0x01

sfr SCMD                   = 0xE6;     //ISP Serial Command

sfr ISPCR                  = 0xE7;     //ISP Control Register
// (bits in ISPCR)
#define ISPEN                0x80
#define SWBS                 0x40
#define SRST                 0x20
#define CFAIL                0x10

sfr P4                     = 0xE8;     //Port 4
// (bits in P4)
sbit P47                   = P4^7;
sbit P45                   = P4^5;
sbit P44                   = P4^4;

sfr CL                     = 0xE9;     //PCA base timer Low

sfr CCAP0L                 = 0xEA;     //PCA module0 capture Low

sfr CCAP6L                 = 0xEA;     //PCA module6 capture Low

sfr CCAP1L                 = 0xEB;     //PCA module1 capture Low

sfr CCAP7L                 = 0xEB;     //PCA module7 capture Low

sfr CCAP2L                 = 0xEC;     //PCA module2 capture Low

sfr CCAP3L                 = 0xED;     //PCA module3 capture Low

sfr CCAP4L                 = 0xEE;     //PCA module4 capture Low

sfr CCAP5L                 = 0xEF;     //PCA module5 capture Low

sfr B                      = 0xF0;     //B Register

sfr PAOE                   = 0xF1;     //PWM Additional Output Enable
// (bits in PAOE)
#define POE3                 0x80
#define POE2B                0x40
#define POE2A                0x20
#define POE2                 0x10
#define POE1                 0x08
#define POE0B                0x04
#define POE0A                0x02
#define POE0                 0x01

sfr PCAPWM0                = 0xF2;     //PCA PWM0 Mode
// (bits in PCAPWM0)
#define P0RS1                0x80
#define P0RS0                0x40
#define P0INV                0x04
#define ECAP0H               0x02
#define ECAP0L               0x01

sfr PCAPWM6                = 0xF2;     //PCA PWM6 Mode
// (bits in PCAPWM6)
#define P6RS1                0x80
#define P6RS0                0x40
#define CCF6                 0x08
#define P6INV                0x04
#define ECAP6H               0x02
#define ECAP6L               0x01

sfr PCAPWM1                = 0xF3;     //PCA PWM1 Mode
// (bits in PCAPWM1)
#define P1RS1                0x80
#define P1RS0                0x40
#define P1INV                0x04
#define ECAP1H               0x02
#define ECAP1L               0x01

sfr PCAPWM7                = 0xF3;     //PCA PWM7 Mode
// (bits in PCAPWM7)
#define P7RS1                0x80
#define P7RS0                0x40
#define CCF7                 0x08
#define P7INV                0x04
#define ECAP7H               0x02
#define ECAP7L               0x01

sfr PCAPWM2                = 0xF4;     //PCA PWM2 Mode
// (bits in PCAPWM2)
#define P2RS1                0x80
#define P2RS0                0x40
#define P2INV                0x04
#define ECAP2H               0x02
#define ECAP2L               0x01

sfr PCAPWM3                = 0xF5;     //PCA PWM3 Mode
// (bits in PCAPWM3)
#define P3RS1                0x80
#define P3RS0                0x40
#define P3INV                0x04
#define ECAP3H               0x02
#define ECAP3L               0x01

sfr PCAPWM4                = 0xF6;     //PCA PWM4 Mode
// (bits in PCAPWM4)
#define P4RS1                0x80
#define P4RS0                0x40
#define P4INV                0x04
#define ECAP4H               0x02
#define ECAP4L               0x01

sfr PCAPWM5                = 0xF7;     //PCA PWM5 Mode
// (bits in PCAPWM5)
#define P5RS1                0x80
#define P5RS0                0x40
#define P5INV                0x04
#define ECAP5H               0x02
#define ECAP5L               0x01

sfr P6                     = 0xF8;     //Port 6
// (bits in P6)
sbit P61                   = P6^1;
sbit P60                   = P6^0;

sfr CH                     = 0xF9;     //PCA base timer High

sfr CCAP0H                 = 0xFA;     //PCA Module0 capture High

sfr CCAP6H                 = 0xFA;     //PCA Module6 capture High

sfr CCAP1H                 = 0xFB;     //PCA Module1 capture High

sfr CCAP7H                 = 0xFB;     //PCA Module7 capture High

sfr CCAP2H                 = 0xFC;     //PCA Module2 capture High

sfr CCAP3H                 = 0xFD;     //PCA Module3 capture High

sfr CCAP4H                 = 0xFE;     //PCA Module4 capture High

sfr CCAP5H                 = 0xFF;     //PCA Module5 capture High


//===== Page P =====//
#define IAPLB_P              0x03     //IAP Low Boundary
// (bits in IAPLB)
#define IAPLB6_P             0x80
#define IAPLB5_P             0x40
#define IAPLB4_P             0x20
#define IAPLB3_P             0x10
#define IAPLB2_P             0x08
#define IAPLB1_P             0x04
#define IAPLB0_P             0x02

#define CKCON2_P             0x40     //Clock Control 2
// (bits in CKCON2)
#define IHRCOE_P             0x10
#define MCKS1_P              0x08
#define MCKS0_P              0x04
#define OSCS1_P              0x02
#define OSCS0_P              0x01

#define CKCON3_P             0x41     //Clock Control 3
// (bits in CKCON3)
#define WDTCS1_P             0x80
#define WDTCS0_P             0x40
#define FWKP_P               0x20
#define WDTFS_P              0x10
#define MCKD1_P              0x08
#define MCKD0_P              0x04

#define CKCON4_P             0x42     //Clock Control 4
// (bits in CKCON4)
#define RCSS2_P              0x80
#define RCSS1_P              0x40
#define RCSS0_P              0x20
#define RPSC2_P              0x10
#define RPSC1_P              0x08
#define RPSC0_P              0x04
#define RTCCS3_P             0x02
#define RTCCS2_P             0x01

#define CKCON5_P             0x43     //Clock Control 5
// (bits in CKCON5)
#define CKMS0_P              0x01

#define PCON2_P              0x44     //Power Control 2
// (bits in PCON2)
#define AWBOD1_P             0x80
#define AWBOD0_P             0x40
#define BO1S1_P              0x20
#define BO1S0_P              0x10
#define BO1RE_P              0x08
#define EBOD1_P              0x04
#define BO0RE_P              0x02

#define PCON3_P              0x45     //Power Control 3
// (bits in PCON3)
#define IVREN_P              0x80

#define SPCON0_P             0x48     //SFR Page Control 0
// (bits in SPCON0)
#define P6CTL_P              0x40
#define P4CTL_P              0x20
#define WRCTL_P              0x10
#define CKCTL0_P             0x04
#define PWCTL1_P             0x02
#define PWCTL0_P             0x01

#define DCON0_P              0x4C     //Device Control 0
// (bits in DCON0)
#define HSE_P                0x80
#define IAPO_P               0x40
#define HSE1_P               0x20
#define IORCTL_P             0x04
#define RSTIO_P              0x02
#define OCDE_P               0x01

#define RTCCR_P              0x54     //RTC Control Reg.
// (bits in RTCCR)
#define RTCE_P               0x80
#define RTCO_P               0x40
#define RTCRL5_P             0x20
#define RTCRL4_P             0x10
#define RTCRL3_P             0x08
#define RTCRL2_P             0x04
#define RTCRL1_P             0x02
#define RTCRL0_P             0x01

#define RTCTM_P              0x55     //RTC Timer Register
// (bits in RTCTM)
#define RTCCS1_P             0x80
#define RTCCS0_P             0x40
#define RTCCT5_P             0x20
#define RTCCT4_P             0x10
#define RTCCT3_P             0x08
#define RTCCT2_P             0x04
#define RTCCT1_P             0x02
#define RTCCT0_P             0x01

#define PCON0_P              0x80     //Power Control 0
// (bits in PCON0)
#define SMOD1_P              0x80
#define SMOD0_P              0x40
#define POF0_P               0x10
#define PD_P                 0x02
#define IDL_P                0x01

#define PCON1_P              0x97     //Power Control 1
// (bits in PCON1)
#define SWRF_P               0x80
#define EXRF_P               0x40
#define RTCF_P               0x10
#define BOF1_P               0x04
#define BOF0_P               0x02
#define WDTF_P               0x01

#define CKCON0_P             0xC7     //Clock Control 0
// (bits in CKCON0)
#define AFS_P                0x80
#define ENCKM_P              0x40
#define CKMIS1_P             0x20
#define CKMIS0_P             0x10
#define CCKS_P               0x08
#define SCKS2_P              0x04
#define SCKS1_P              0x02
#define SCKS0_P              0x01

#define WDTCR_P              0xE1     //Watch-dog-timer Control register
// (bits in WDTCR)
#define WREN_P               0x80
#define NSW_P                0x40
#define ENW_P                0x20
#define CLRW_P               0x10
#define WIDL_P               0x08
#define PS2_P                0x04
#define PS1_P                0x02
#define PS0_P                0x01

#define P4_P                 0xE8     //Port 4
// (bits in P4)
#define P47_P                0x80
#define P45_P                0x20
#define P44_P                0x10

#define P6_P                 0xF8     //Port 6
// (bits in P6)
#define P61_P                0x02
#define P60_P                0x01

#endif
