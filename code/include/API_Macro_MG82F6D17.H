#ifndef _MACRO_MG82F6D17_H
#define _MACRO_MG82F6D17_H

#define SFR_SetPage(x)		SFRPI=x

/*
*************************************************************************************
*  INTERRUPT 
*
*************************************************************************************
*/
// Interrupt Vector
#define INT_VECTOR_INT0		0
#define INT_VECTOR_T0		1
#define INT_VECTOR_INT1		2
#define INT_VECTOR_T1		3
#define INT_VECTOR_UART0	4
#define INT_VECTOR_T2		5
#define INT_VECTOR_INT2		6
#define INT_VECTOR_SPI		7
#define INT_VECTOR_ADC		8
#define INT_VECTOR_PCA		9
#define INT_VECTOR_SF		10
#define INT_VECTOR_KB		11
#define INT_VECTOR_TWI0		12
#define INT_VECTOR_UART1	14
#define INT_VECTOR_T3		16
#define INT_VECTOR_DMA		18

// Interrupt Enable/Disable
#define INT_EnAll()			EA=1		
#define INT_DisAll()		EA=0		
#define INT_EnINT0()		EX0=1
#define INT_DisINT0()		EX0=0
#define INT_EnTIMER0()		ET0=1
#define INT_DisTIMER0()		ET0=0
#define INT_EnINT1()		EX1=1
#define INT_DisINT1()		EX1=0
#define INT_EnTIMER1()		ET1=1
#define INT_DisTIMER1()		ET1=0
#define INT_EnUART0()		ES0=1
#define INT_DisUART0()		ES0=0
#define INT_EnTIMER2()		ET2=1
#define INT_EnTIMER2L()		TCLK_TL2IE=1
#define INT_DisTIMER2L()	TCLK_TL2IE=0
#define INT_DisTIMER2()		ET2=0
#define INT_EnINT2()		EX2=1
#define INT_DisINT2()		EX2=0
#define INT_EnSPI()			EIE1=EIE1|ESPI
#define INT_DisSPI()		EIE1=EIE1&(~ESPI)
#define INT_EnADC()			EIE1=EIE1|EADC
#define INT_DisADC()		EIE1=EIE1&(~EADC)
#define INT_EnPCA()			EIE1=EIE1|EPCA
#define INT_DisPCA()		EIE1=EIE1&(~EPCA)
#define INT_EnSF()			EIE1=EIE1|ESF
#define INT_DisSF()			EIE1=EIE1&(~ESF)
#define INT_EnKBI()			EIE1=EIE1|EKB
#define INT_DisKBI()		EIE1=EIE1&(~EKB)
#define INT_EnTWI0()		EIE1=EIE1|ETWI0
#define INT_DisTWI0()		EIE1=EIE1&(~ETWI0)
#define INT_EnUART1()		EIE1=EIE1|ES1
#define INT_DisUART1()		EIE1=EIE1&(~ES1)
#define INT_EnTIMER3()		EIE2=EIE2|ET3
#define INT_DisTIMER3()		EIE2=EIE2&(~ET3)
#define INT_EnTIMER3L()		SFRPI=1;TL3IE=1;SFRPI=0
#define INT_DisTIMER3L()	SFRPI=1;TL3IE=0;SFRPI=0
#define INT_EnDMA()			EDMA=1
#define INT_DisDMA()		EDMA=0

#define INT_EnSF_WDT()		SFIE=SFIE|WDTFIE
#define INT_DisSF_WDT()		SFIE=SFIE&(~WDTFIE)
#define INT_EnSF_BOD0()		SFIE=SFIE|BOF0IE
#define INT_DisSF_BOD0()	SFIE=SFIE&(~BOF0IE)
#define INT_EnSF_BOD1()		SFIE=SFIE|BOF1IE
#define INT_DisSF_BOD1()	SFIE=SFIE&(~BOF1IE)
#define INT_EnSF_RTC()		SFIE=SFIE|RTCFIE
#define INT_DisSF_RTC()		SFIE=SFIE&(~RTCFIE)
#define INT_EnSF_SID()		SFIE=SFIE|SIDFIE
#define INT_DisSF_SID()		SFIE=SFIE&(~SIDFIE)

// Interrupt priority
#define IP_INT0		BIT0
#define IP_T0		BIT1
#define IP_INT1		BIT2
#define IP_T1		BIT3
#define IP_UART0	BIT4
#define IP_T2		BIT5
#define IP_INT2		BIT6
#define INT_SetIPHighest(x)			IP0H=IP0H|x;IP0L=IP0L|x
#define INT_SetIPHigh(x)			IP0H=IP0H|x;IP0L=IP0L&(~x)
#define INT_SetIPLow(x)				IP0H=IP0H&(~x);IP0L=IP0L|x
#define INT_SetIPLowest(x)			IP0H=IP0H&(~x);IP0L=IP0L&(~x)

#define IPX_SPI		BIT0
#define IPX_ADC		BIT1
#define IPX_PCA		BIT2
#define IPX_SF		BIT3
#define IPX_KB		BIT5
#define IPX_TWI0	BIT6
#define INT_SetIPXHighest(x)		EIP1H=EIP1H|x;EIP1L=EIP1L|x
#define INT_SetIPXHigh(x)			EIP1H=EIP1H|x;EIP1L=EIP1L&(~x)
#define INT_SetIPXLow(x)			EIP1H=EIP1H&(~x);EIP1L=EIP1L|x
#define INT_SetIPXLowest(x)			EIP1H=EIP1H&(~x);EIP1L=EIP1L&(~x)

#define IPX2_TIMER3		BIT0
#define INT_SetIPX2Highest(x)		EIP1H=EIP1H|x;EIP1L=EIP1L|x
#define INT_SetIPX2High(x)			EIP1H=EIP1H|x;EIP1L=EIP1L&(~x)
#define INT_SetIPX2Low(x)			EIP1H=EIP1H&(~x);EIP1L=EIP1L|x
#define INT_SetIPX2Lowest(x)		EIP1H=EIP1H&(~x);EIP1L=EIP1L&(~x)

#define INT_SetDMAIPHighest(x)		SFRPI=8;DMACG0=DMACG0|(PDMAH|PDMAL);SFRPI=0
#define INT_SetDMAIPHigh(x)			SFRPI=8;DMACG0=(DMACG0&(~(PDMAH|PDMAL)))|(PDMAH);SFRPI=0
#define INT_SetDMAIPLow(x)			SFRPI=8;DMACG0=(DMACG0&(~(PDMAH|PDMAL)))|(PDMAL);SFRPI=0
#define INT_SetDMAIPLowest(x)		SFRPI=8;DMACG0=DMACG0&(~(PDMAH|PDMAL));SFRPI=0

// Clear INT Flag
#define INT_ClrINT0()		IE0=0
#define INT_ClrTIMER0()		TF0=0
#define INT_ClrINT1()		IE1=0
#define INT_ClrTIMER1()		TF1=0
#define INT_ClrUART0_Rx()	RI0=0
#define INT_ClrUART0_Tx()	TI0=0
#define INT_ClrTIMER2()		TF2=0
#define INT_ClrINT2()		IE2=0

#define INT_ClrSPI()		SPSTAT=SPSTAT&(~SPIF)
#define INT_ClrADC()		ADCON0=ADCON0&(~ADCI)
#define INT_ClrPCA_CF()		CF=0
#define INT_ClrPCA_CH0()	CCF0=0
#define INT_ClrPCA_CH1()	CCF1=0
#define INT_ClrPCA_CH2()	CCF2=0
#define INT_ClrPCA_CH3()	CCF3=0
#define INT_ClrPCA_CH4()	CCF4=0
#define INT_ClrPCA_CH5()	CCF5=0
#define INT_ClrSF_WDT()		PCON1=WDTF
#define INT_ClrSF_BOD0()	PCON1=BOF0
#define INT_ClrSF_BOD1()	PCON1=BOF1
#define INT_ClrSF_RTC()		PCON1=RTCF
#define INT_ClrKBI()		KBCON=KBCON&(~KBIF)
#define INT_ClrTWI0()		SICON=SICON&(~SI)

#define INT_ClrTIMER3		SFRPI=1;TF3=0;SFRPI=0
// nINT select nINT Pin
#define INT_SetINT0P45()			XICFG=XICFG&(~(INT0IS0|INT0IS1));SFRPI =1;XICFG1=XICFG1&(~INT0IS2);SFRPI=0
#define INT_SetINT0P30()			XICFG=(XICFG&(~INT0IS1))|INT0IS0;SFRPI =1;XICFG1=XICFG1&(~INT0IS2);SFRPI=0
#define INT_SetINT0P34()			XICFG=(XICFG&(~INT0IS0))|INT0IS1;SFRPI =1;XICFG1=XICFG1&(~INT0IS2);SFRPI=0
#define INT_SetINT0P47()			XICFG=XICFG|(INT0IS0|INT0IS1);SFRPI =1;XICFG1=XICFG1&(~INT0IS2);SFRPI=0
#define INT_SetINT0P60()			XICFG=XICFG&(~(INT0IS0|INT0IS1));SFRPI =1;XICFG1=XICFG1|INT0IS2;SFRPI=0
#define INT_SetINT0P11()			XICFG=(XICFG&(~INT0IS1))|INT0IS0;SFRPI =1;XICFG1=XICFG1|INT0IS2;SFRPI=0
#define INT_SetINT0P17()			XICFG=(XICFG&(~INT0IS0))|INT0IS1;SFRPI =1;XICFG1=XICFG1|INT0IS2;SFRPI=0
#define INT_SetINT0P22()			XICFG=XICFG|(INT0IS0|INT0IS1);SFRPI =1;XICFG1=XICFG1|INT0IS2;SFRPI=0

#define INT_SetINT1P33()			XICFG=XICFG&(~(INT1IS0|INT1IS1));SFRPI =1;XICFG1=XICFG1&(~INT1IS2);SFRPI=0
#define INT_SetINT1P31()			XICFG=(XICFG&(~INT1IS1))|INT1IS0;SFRPI =1;XICFG1=XICFG1&(~INT1IS2);SFRPI=0
#define INT_SetINT1P35()			XICFG=(XICFG&(~INT1IS0))|INT1IS1;SFRPI =1;XICFG1=XICFG1&(~INT1IS2);SFRPI=0
#define INT_SetINT1P10()			XICFG=XICFG|(INT1IS0|INT1IS1);SFRPI =1;XICFG1=XICFG1&(~INT1IS2);SFRPI=0
#define INT_SetINT1P61()			XICFG=XICFG&(~(INT1IS0|INT1IS1));SFRPI =1;XICFG1=XICFG1|INT1IS2;SFRPI=0
#define INT_SetINT1P34()			XICFG=(XICFG&(~INT1IS1))|INT1IS0;SFRPI =1;XICFG1=XICFG1|INT1IS2;SFRPI=0
#define INT_SetINT1P15()			XICFG=(XICFG&(~INT1IS0))|INT1IS1;SFRPI =1;XICFG1=XICFG1|INT1IS2;SFRPI=0
#define INT_SetINT1P24()			XICFG=XICFG|(INT1IS0|INT1IS1);SFRPI =1;XICFG1=XICFG1|INT1IS2;SFRPI=0

#define INT_SetINT2P44()			SFRPI=1;XICFG1=XICFG1&(~(INT2IS0|INT2IS1));SFRPI=0
#define INT_SetINT2P30()			SFRPI=1;XICFG1=(XICFG1&(~INT2IS1))|INT2IS0;SFRPI=0
#define INT_SetINT2P11()			SFRPI=1;XICFG1=(XICFG1&(~INT2IS0))|INT2IS1;SFRPI=0
#define INT_SetINT2P16()			SFRPI=1;XICFG1=XICFG1|(INT2IS0|INT2IS1);SFRPI=0

// nINT set Level/Edge trigger
#define INT_SetINT0_DetectLevel()		IT0=0
#define	INT_SetINT0_DetectEdge()		IT0=1

#define INT_SetINT1_DetectLevel()		IT1=0
#define	INT_SetINT1_DetectEdge()		IT1=1

#define INT_SetINT2_DetectLevel()		IT2=0
#define	INT_SetINT2_DetectEdge()		IT2=1

// nINT detect High/Low, Falling/Rising
#define INT_SetINT0_DetectLowFalling()	AUXR0=AUXR0&(~INT0H)
#define INT_SetINT0_DetectHighRising()	AUXR0=AUXR0|INT0H

#define INT_SetINT1_DetectLowFalling()	AUXR0=AUXR0&(~INT1H)
#define INT_SetINT1_DetectHighRising()	AUXR0=AUXR0|INT1H

#define INT_SetINT2_DetectLowFalling()	INT2H=0
#define INT_SetINT2_DetectHighRising()	INT2H=1


#define INT_SetINT0_DetectHighLevel()		IT0=0;AUXR0=AUXR0|INT0H
#define INT_SetINT0_DetectLowLevel()		IT0=0;AUXR0=AUXR0&(~INT0H)
#define	INT_SetINT0_DetectFallingEdge()		IT0=1;AUXR0=AUXR0&(~INT0H)
#define	INT_SetINT0_DetectRisingEdge()		IT0=1;AUXR0=AUXR0|INT0H

#define INT_SetINT1_DetectHighLevel()		IT1=0;AUXR0=AUXR0|INT1H
#define INT_SetINT1_DetectLowLevel()		IT1=0;AUXR0=AUXR0&(~INT1H)
#define	INT_SetINT1_DetectFallingEdge()		IT1=1;AUXR0=AUXR0&(~INT1H)
#define	INT_SetINT1_DetectRisingEdge()		IT1=1;AUXR0=AUXR0|INT1H

#define INT_SetINT2_DetectHighLevel()		IT2=0;INT2H=1
#define INT_SetINT2_DetectLowLevel()		IT2=0;INT2H=0
#define	INT_SetINT2_DetectFallingEdge()		IT2=1;INT2H=0
#define	INT_SetINT2_DetectRisingEdge()		IT2=1;INT2H=1



// nInt Filter
#define INT_SetINT0Filter_Disable()				XICFG=XICFG&(~X0FLT);SFRPI=1;XICFG1=XICFG1&(~X0FLT1);SFRPI=0
#define INT_SetINT0Filter_Sysclk_x3()			XICFG=XICFG|X0FLT;SFRPI=1;XICFG1=XICFG1&(~X0FLT1);SFRPI=0
#define INT_SetINT0Filter_SysclkDiv6_x3()		XICFG=XICFG&(~X0FLT);SFRPI=1;XICFG1=XICFG1|X0FLT1;SFRPI=0
#define INT_SetINT0Filter_S0TOF_x3()			XICFG=XICFG|X0FLT;SFRPI=1;XICFG1=XICFG1|X0FLT1;SFRPI=0

#define INT_SetINT1Filter_Disable()				XICFG=XICFG&(~X1FLT);SFRPI=1;XICFG1=XICFG1&(~X1FLT1);SFRPI=0
#define INT_SetINT1Filter_Sysclk_x3()			XICFG=XICFG|X1FLT;SFRPI=1;XICFG1=XICFG1&(~X1FLT1);SFRPI=0
#define INT_SetINT1Filter_SysclkDiv6_x3()		XICFG=XICFG&(~X1FLT);SFRPI=1;XICFG1=XICFG1|X1FLT1;SFRPI=0
#define INT_SetINT1Filter_S0TOF_x3()			XICFG=XICFG|X1FLT;SFRPI=1;XICFG1=XICFG1|X1FLT1;SFRPI=0

#define INT_SetINT2Filter_Disable()				XICFG=XICFG&(~X2FLT);SFRPI=1;XICFG1=XICFG1&(~X2FLT1);SFRPI=0
#define INT_SetINT2Filter_Sysclk_x3()			XICFG=XICFG|X2FLT;SFRPI=1;XICFG1=XICFG1&(~X2FLT1);SFRPI=0
#define INT_SetINT2Filter_SysclkDiv6_x3()		XICFG=XICFG&(~X2FLT);SFRPI=1;XICFG1=XICFG1|X2FLT1;SFRPI=0
#define INT_SetINT2Filter_S0TOF_x3()			XICFG=XICFG|X2FLT;SFRPI=1;XICFG1=XICFG1|X2FLT1;SFRPI=0

/*
*************************************************************************************
*/ 



/*
*************************************************************************************
*  IAP 
*
*************************************************************************************
*/
//IAP 
#define ISP_STANBY		0
#define ISP_READ		1 	  // Read
#define ISP_WRITE 	    2 	  // Write
#define ISP_ERASE 	    3 	  // Erase
#define ISP_WRITE_P     4     // P Write
#define ISP_READ_P     	5     // P Read
#define ISP_AUTO_FLASH_CRC	0x80	// Auto calc FLASH CRC
#define ISP_READ_BYTE_INC	0x81	// Flash read,addr Inc
#define ISP_WRITE_BYTE_INC	0x82	// Flash write,addr Inc

/*
*************************************************************************************
*/


/*
*************************************************************************************
*  CLOCK 
*
*************************************************************************************
*/
// CLOCK IHRCO 12MHz/11.0592MHz
#define IHRCO_12MHz					0
#define IHRCO_110592MHz				0x80
#define CLK_SelIHRCO12MHz()					CKCON0=CKCON0&(~AFS)				
#define CLK_SelIHRCO110592MHz()				CKCON0=CKCON0|(AFS)	

// CLOCK CPUCLK 
#define CPUCLK_SYSCLK_DIV_1			0
#define CPUCLK_SYSCLK_DIV_2			0x08
#define CLK_SetCpuclkUseSysclk()			CKCON0=CKCON0&(~CCKS)				
#define CLK_SetCpuclkUseSysclkDiv2()		CKCON0=CKCON0|(CCKS)	

// CLOCK SYSCLK
#define SYSCLK_MCKDO_DIV_1			0
#define SYSCLK_MCKDO_DIV_2			1
#define SYSCLK_MCKDO_DIV_4			2
#define SYSCLK_MCKDO_DIV_8			3
#define SYSCLK_MCKDO_DIV_16			4
#define SYSCLK_MCKDO_DIV_32			5
#define SYSCLK_MCKDO_DIV_64			6
#define SYSCLK_MCKDO_DIV_128		7
#define CLK_SetSysclk(x)					CKCON0=(CKCON0&(~0x07))|x

// CLOCK CKM Enable/Disable
#define DISABLE_CKM					0
#define ENABLE_CKM					0x40
#define CLK_DisCKM()						CKCON0=CKCON0&(~ENCKM)
#define CLK_EnCKM()							CKCON0=CKCON0|(ENCKM)

// CLOCK CKM_OSC source
#define CKM_OSCIN_DIV_1				0x00	// OSCin=5~7MHz
#define CKM_OSCIN_DIV_2				0x10	// OSCin=10~14MHz	
#define CKM_OSCIN_DIV_4				0x20	// OSCin=20~28MHz
#define CKM_OSCIN_DIV_6				0x30	// OSCin=30~42MHz
#define CLK_SetCKMOSCin(x)					CKCON0=(CKCON0&(~0x30))|x

// CLOCK CKCON0
#define CLK_SetCKCON0(x)					CKCON0=x

// CLOCK CKCON2

#define DISABLE_IHRCO				0x00
#define ENABLE_IHRCO				0x10

#define MCK_OSCin					0x00
#define MCK_CKMI_X4					0x04
#define MCK_CKMI_X533				0x08
#define MCK_CKMI_X8					0x0C
#define MCK_CKMI_X4_X6				0x04
#define MCK_CKMI_X533_X8			0x08
#define MCK_CKMI_X8_x12				0x0C

#define OSCIn_IHRCO					0x00
#define OSCIn_ECKI					0x01
#define OSCIn_ILRCO					0x02
#define OSCIn_ECKI_P60				0x03

#define CLK_SetCKCON2(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON2_P;IFMT=ISP_WRITE_P;IFD=x;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// CLOCK CKCON3
#define WDTCS_ILRCO					0x00
#define WDTCS_ECKI					0x40
#define WDTCS_SYSCLK_DIV_12			0x80
#define WDTCS_S0TOF					0xC0

#define FWKP_NORMAL_120uS			0x00
#define FWKP_FAST_30uS				0x20

#define CLK_SetCKCON3(x)			ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON3_P;IFMT=ISP_WRITE_P;IFD=x;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// CLOCK CKM x4x533x8/x6x8x12
#define CLK_SetCKM_x4x533x8()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON5_P;IFMT=ISP_WRITE_P;IFD=0x00;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define CLK_SetCKM_x6x8x12()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON5_P;IFMT=ISP_WRITE_P;IFD=0x01;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// CLOCK CPU High speed (>25MHz)
#define CLK_SetCpuCLK_HighSpeed()	ISPCR=0x80;IFADRH=0x0;IFADRL=DCON0_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=IFD|(HSE_P|HSE1_P);IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// CLOCK IAP Time base 
#define CLK_SetIAPTimeBase(x)		CKCON1=x-1

// CLOCK P60 CLK Output
#define CLK_P60OC_P60()			AUXR0=AUXR0&(~(P60OC0|P60OC1))
#define CLK_P60OC_MCK()			AUXR0=(AUXR0&(~(P60OC0|P60OC1)))|(P60OC0)
#define CLK_P60OC_MCKDiv2()		AUXR0=(AUXR0&(~(P60OC0|P60OC1)))|(P60OC1)
#define CLK_P60OC_MCKDiv4()		AUXR0=AUXR0|((P60OC0|P60OC1))

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER0 & TIMER1 
*
*************************************************************************************
*/
// TIMER Enable/Disable
#define TM_DisableT0()			TR0=0					
#define TM_EnableT0()			TR0=1
#define TM_DisableT1()			TR1=0					
#define TM_EnableT1()			TR1=1

// TIMER Mode
#define TM_SetT0Mode_0_8BIT_PWM()				TMOD=(TMOD&(~(T0M0|T0M1)))
#define TM_SetT0Mode_1_16BIT_TIMER()			TMOD=(TMOD&(~(T0M0|T0M1)))|(T0M0)
#define TM_SetT0Mode_2_8BIT_AUTORELOAD()		TMOD=(TMOD&(~(T0M0|T0M1)))|(T0M1)
#define TM_SetT0Mode_3_TWO_8BIT()				TMOD=(TMOD|(T0M0|T0M1))


#define TM_SetT0Gate_Disable()					TMOD=TMOD&(~T0GATE);SFRPI=6;AUXR9=AUXR9&(~T0G1);SFRPI=0
#define TM_SetT0Gate_INT0()						TMOD=TMOD|T0GATE;SFRPI=6;AUXR9=AUXR9&(~T0G1);SFRPI=0
#define TM_SetT0Gate_TF2()						TMOD=TMOD&(~T0GATE);SFRPI=6;AUXR9=AUXR9|(T0G1);SFRPI=0
#define TM_SetT0Gate_KBI()						TMOD=TMOD|T0GATE;SFRPI=6;AUXR9=AUXR9|(T0G1);SFRPI=0

#define TM_SetT1Mode_0_8BIT_PWM()				TMOD=(TMOD&(~(T1M0|T1M1)))          
#define TM_SetT1Mode_1_16BIT_TIMER()			TMOD=(TMOD&(~(T1M0|T1M1)))|(T1M0)    
#define TM_SetT1Mode_2_8BIT_AUTORELOAD()		TMOD=(TMOD&(~(T1M0|T1M1)))|(T1M1)    
#define TM_SetT1Mode_3_Disable()				TMOD=(TMOD|(T1M0|T1M1))             

#define TM_SetT1Gate_Disable()					TMOD=TMOD&(~T1GATE);SFRPI=6;AUXR9=AUXR9&(~T1G1);SFRPI=0
#define TM_SetT1Gate_INT1()						TMOD=TMOD|T1GATE;SFRPI=6;AUXR9=AUXR9&(~T1G1);SFRPI=0
#define TM_SetT1Gate_TF3()						TMOD=TMOD&(~T1GATE);SFRPI=6;AUXR9=AUXR9|(T1G1);SFRPI=0
#define TM_SetT1Gate_TI1()						TMOD=TMOD|T1GATE;SFRPI=6;AUXR9=AUXR9|(T1G1);SFRPI=0

// TIMER Clock source
#define TM_SetT0Clock_SYSCLKDiv12()				AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_T0Port()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLK()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_ILRCO()					AUXR3=(AUXR3&(~T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLKDiv48()				AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_WDTPS()					AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2&(~T0X12));TMOD=(TMOD|(T0C_T))
#define TM_SetT0Clock_SYSCLKDiv192()			AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD&(~T0C_T))
#define TM_SetT0Clock_T1OF()					AUXR3=(AUXR3|(T0XL));AUXR2=(AUXR2|(T0X12));TMOD=(TMOD|(T0C_T))

#define TM_SetT1Clock_SYSCLKDiv12()				AUXR2=(AUXR2&(~T1X12));TMOD=(TMOD&(~T1C_T))
#define TM_SetT1Clock_T1Port()					AUXR2=(AUXR2&(~T1X12));TMOD=(TMOD|(T1C_T))
#define TM_SetT1Clock_SYSCLK()					AUXR2=(AUXR2|(T1X12));TMOD=(TMOD&(~T1C_T))
#define TM_SetT1Clock_SYSCLKDiv48()				AUXR2=(AUXR2|(T1X12));TMOD=(TMOD|(T1C_T))

// TIMER Value
#define TM_SetT0HighByte(x)			TH0=x
#define TM_SetT0LowByte(x)			TL0=x

#define TM_SetT1LowByte(x)			TL1=x
#define TM_SetT1HighByte(x)			TH1=x


// TIMER CKCKO Pin
#define TM_SetT0CKO_P34()			AUXR3=AUXR3&(~(T0PS0|T0PS1))
#define TM_SetT0CKO_P44()			AUXR3=(AUXR3&(~(T0PS0|T0PS1)))|(T0PS0)
#define TM_SetT0CKO_P22()			AUXR3=(AUXR3&(~(T0PS0|T0PS1)))|(T0PS1)
#define TM_SetT0CKO_P17()			AUXR3=AUXR3|(T0PS0|T0PS1)

#define TM_SetT1CKO_P35()			SFRPI=1;AUXR4=AUXR4&(~(T1PS0|T1PS1));SFRPI=0
#define TM_SetT1CKO_P45()			SFRPI=1;AUXR4=(AUXR4&(~(T1PS0|T1PS1)))|(T1PS0);SFRPI=0
#define TM_SetT1CKO_P17()			SFRPI=1;AUXR4=(AUXR4&(~(T1PS0|T1PS1)))|(T1PS1);SFRPI=0
#define TM_SetT1CKO_P33()			SFRPI=1;AUXR4=AUXR4|(T1PS0|T1PS1);SFRPI=0

// TIMER CKCKO Enable/Disable
#define TM_EnT0CKO()				AUXR2=AUXR2|(T0CKOE)
#define TM_EnT1CKO()				AUXR2=AUXR2|(T1CKOE)

#define TM_DisT0CKO()				AUXR2=AUXR2&(~T0CKOE)
#define TM_DisT1CKO()				AUXR2=AUXR2&(~T1CKOE)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER2
*
*************************************************************************************
*/
// TIMER2 Enable/Disable
#define TM_DisableT2()			TR2=0					
#define TM_EnableT2()			TR2=1

// TIMER2 TL2 Enable/Disable
#define TM_DisableTL2()			T2MOD=T2MOD&(~TR2L)					
#define TM_EnableTL2()			T2MOD=T2MOD|(TR2L)	

// TIMER2 Enable/Disable TR2L
#define TM_DisableTR2LC()			T2MOD=T2MOD&(~TR2LC)					
#define TM_EnableTR2LC()			T2MOD=T2MOD|(TR2LC)	

// TIMER2 Mode
#define TM_SetT2Mode_AutoRLandExI()			CP_RL2=0;T2MOD=T2MOD&(~T2MS0)
#define TM_SetT2Mode_AutoRLwithExI()		CP_RL2=0;T2MOD=T2MOD|(T2MS0)
#define TM_SetT2Mode_Capture()				CP_RL2=1;T2MOD=T2MOD&(~T2MS0)
#define TM_SetT2Mode_CapturewithAutoZero()	CP_RL2=1;T2MOD=T2MOD|(T2MS0)
#define TM_SetT2Mode_8bitPWM()				CP_RL2=0;T2MOD=T2MOD&(~T2MS0);T2MOD=T2MOD|(T2SPL);SFRPI=1;T2MOD1=T2MOD1|T2MS1;SFRPI=0

// TIMER2 Split
#define TM_EnT2Split()					T2MOD=T2MOD|(T2SPL)
#define TM_DisT2Split()					T2MOD=T2MOD&(~T2SPL)

// TIMER2 TF2 Int Enable/Disable
#define TM_DisTF2Int()					SFRPI=1;T2MOD1=T2MOD1|(TF2IG);SFRPI=0
#define TM_EnTF2Int()					SFRPI=1;T2MOD1=T2MOD1&(~TF2IG);SFRPI=0

// TIMER2 CKCKO Enable/Disable
#define TM_EnT2CKO()					T2MOD=T2MOD|(T2OE)
#define TM_DisT2CKO()					T2MOD=T2MOD&(~T2OE)

// TIMER2 Clock source
#define TM_SetT2Clock_SYSCLKDiv12()		C_T2=0;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_T2Pin()			C_T2=1;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_SYSCLK()			C_T2=0;T2MOD=T2MOD|(T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0
#define TM_SetT2Clock_INT0ET()			C_T2=1;T2MOD=T2MOD|(T2X12);SFRPI=1;T2MOD1=T2MOD1&(~T2CKS);SFRPI=0	
#define TM_SetT2Clock_S0TOF()			C_T2=0;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0
#define TM_SetT2Clock_T0OF()			C_T2=1;T2MOD=T2MOD&(~T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0
#define TM_SetT2Clock_KBIET()			C_T2=1;T2MOD=T2MOD1(T2X12);SFRPI=1;T2MOD1=T2MOD1|(T2CKS);SFRPI=0

// TIMER2 Split TL2 Clock source
#define TM_SetTL2Clock_SYSCLKDiv12()	T2MOD=T2MOD&(~TL2X12);SFRPI=1;T2MOD1=T2MOD1&(~TL2CS);SFRPI=0
#define TM_SetTL2Clock_SYSCLK()			T2MOD=T2MOD|(TL2X12);SFRPI=1;T2MOD1=T2MOD1&(~TL2CS);SFRPI=0
#define TM_SetTL2Clock_S0TOF()			T2MOD=T2MOD&(~TL2X12);SFRPI=1;T2MOD1=T2MOD1|(TL2CS);SFRPI=0
#define TM_SetTL2Clock_INT0ET()			T2MOD=T2MOD|(TL2X12);SFRPI=1;T2MOD1=T2MOD1|(TL2CS);SFRPI=0

// TIMER2 Enable/Disable Access TF2L
#define TM_EnableAccessTF2L()			SFRPI=1;T2MOD1=T2MOD1|TL2IS;SFRPI=0;
#define TM_DisableAccessTF2L()			SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;

// TIMER2 Capture soruce
#define TM_SetT2Capture_T2EXPin()		SFRPI=1;T2MOD1=T2MOD1&(0xF8);SFRPI=0
#define TM_SetT2Capture_RXD0()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S0);SFRPI=0
#define TM_SetT2Capture_P60()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S1);SFRPI=0
#define TM_SetT2Capture_INT2ET()		SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S0|CP2S1);SFRPI=0	
#define TM_SetT2Capture_KBIET()			SFRPI=1;T2MOD1=(T2MOD1&(0xF8))|(CP2S1|CP2S2);SFRPI=0
#define TM_SetT2Capture_TWI0SCL()		SFRPI=1;T2MOD1=T2MOD1|(CP2S0|CP2S1|CP2S2);SFRPI=0

// TIMER2 T2CKO/T2EX Pin
#define TM_SetT2CKOT2EX_P10P11()		SFRPI=1;AUXR4=AUXR4&(~(T2PS1|T2PS0));SFRPI=0
#define TM_SetT2CKOT2EX_P30P31()		SFRPI=1;AUXR4=(AUXR4&(~(T2PS1|T2PS0)))|(T2PS0);SFRPI=0
#define TM_SetT2CKOT2EX_P60P35()		SFRPI=1;AUXR4=(AUXR4&(~(T2PS1|T2PS0)))|(T2PS1);SFRPI=0
#define TM_SetT2CKOT2EX_P45P44()		SFRPI=1;AUXR4=AUXR4|((T2PS1|T2PS0));SFRPI=0

// TIMER2 Detect Falling/Rising
#define TM_EnableT2EX_DetectFalling()					EXEN2=1
#define TM_DisableT2EX_DetectFalling()					EXEN2=0
#define TM_EnableT2EX_DetectRising()					T2MOD=T2MOD|T2EXH
#define TM_DisableT2EX_DetectRising()					T2MOD=T2MOD&(~T2EXH)

// TIMER2 T2CKO Invert
#define TM_DisableT2CKO_Invert()		T2MOD=T2MOD&(~TR2LC)
#define TM_EnableT2CKO_Invert()			T2MOD=T2MOD|(TR2LC)

// TIMER2 Value
#define TM_SetT2HighByte(x)			TH2=x
#define TM_SetT2LowByte(x)			TL2=x

#define TM_SetT2RLHighByte(x)		RCAP2H=x
#define TM_SetT2RLLowByte(x)		RCAP2L=x

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER3
*
*************************************************************************************
*/
// TIMER3 Enable/Disable
#define TM_DisableT3()			SFRPI=1;TR3=0;SFRPI=0					
#define TM_EnableT3()			SFRPI=1;TR3=1;SFRPI=0

// TIMER3 TL3 Enable/Disable
#define TM_DisableTL3()			SFRPI=1;T3MOD=T3MOD&(~TR3L);SFRPI=0				
#define TM_EnableTL3()			SFRPI=1;T3MOD=T3MOD|(TR3L);SFRPI=0	

// TIMER3 TR3L Enable/Disable
#define TM_DisableTR3LC()			SFRPI=1;T3MOD=T3MOD&(~TR2LC);SFRPI=0					
#define TM_EnableTR3LC()			SFRPI=1;T3MOD=T3MOD|(TR2LC);SFRPI=0	

// TIMER3 Mode
#define TM_SetT3Mode_AutoRLandExI()			SFRPI=1;CP_RL3=0;T3MOD=T3MOD&(~T3MS0);SFRPI=0
#define TM_SetT3Mode_AutoRLwithExI()		SFRPI=1;CP_RL3=0;T3MOD=T3MOD|(T3MS0);SFRPI=0
#define TM_SetT3Mode_Capture()				SFRPI=1;CP_RL3=1;T3MOD=T3MOD&(~T3MS0);SFRPI=0
#define TM_SetT3Mode_CapturewithAutoZero()	SFRPI=1;CP_RL3=1;T3MOD=T3MOD|(T3MS0);SFRPI=0
#define TM_SetT3Mode_8bitPWM()				SFRPI=1;CP_RL3=0;T3MOD=T3MOD&(~T3MS0);T3MOD=T3MOD|(T2SPL);SFRPI=2;T3MOD1=T3MOD1|T3MS1;SFRPI=0

// TIMER3 Split
#define TM_EnT3Split()					SFRPI=1;T3MOD=T3MOD|(T3SPL);SFRPI=0
#define TM_DisT3Split()					SFRPI=1;T3MOD=T3MOD&(~T3SPL);SFRPI=0

// TIMER3 T3CKO Enable/Disable
#define TM_EnT3CKO()					SFRPI=1;T3MOD=T3MOD|(T3OE);SFRPI=0
#define TM_DisT3CKO()					SFRPI=1;T3MOD=T3MOD&(~T3OE);SFRPI=0

// TIMER3 Clock source
#define TM_SetT3Clock_SYSCLKDiv12()		SFRPI=1;C_T3=0;T3MOD=T3MOD&(~T3X12);SFRPI=2;T3MOD1=T3MOD1&(~T3CKS);SFRPI=0
#define TM_SetT3Clock_T3Pin()			SFRPI=1;C_T3=1;T3MOD=T3MOD&(~T3X12);SFRPI=2;T3MOD1=T3MOD1&(~T3CKS);SFRPI=0
#define TM_SetT3Clock_SYSCLK()			SFRPI=1;C_T3=0;T3MOD=T3MOD|(T3X12);SFRPI=2;T3MOD1=T3MOD1&(~T3CKS);SFRPI=0
#define TM_SetT3Clock_INT1ET()			SFRPI=1;C_T3=1;T3MOD=T3MOD|(T3X12);SFRPI=2;T3MOD1=T3MOD1&(~T3CKS);SFRPI=0	
#define TM_SetT3Clock_S1TOF()			SFRPI=1;C_T3=0;T3MOD=T3MOD&(~T3X12);SFRPI=2;T3MOD1=T3MOD1|(T3CKS);SFRPI=0
#define TM_SetT3Clock_T0OF()			SFRPI=1;C_T3=1;T3MOD=T3MOD&(~T3X12);SFRPI=2;T3MOD1=T3MOD1|(T3CKS);SFRPI=0
#define TM_SetT3Clock_T1OF()			SFRPI=1;C_T3=1;T3MOD=T3MOD1(T3X12);SFRPI=2;T3MOD1=T3MOD1|(T3CKS);SFRPI=0

// TIMER3 Split TL3 Clock source
#define TM_SetTL3Clock_SYSCLKDiv12()	SFRPI=1;T3MOD=T3MOD&(~TL3X12);SFRPI=2;T3MOD1=T3MOD1&(~TL3CS);SFRPI=0
#define TM_SetTL3Clock_SYSCLK()			SFRPI=1;T3MOD=T3MOD|(TL3X12);SFRPI=2;T3MOD1=T3MOD1&(~TL3CS);SFRPI=0
#define TM_SetTL3Clock_S1TOF()			SFRPI=1;T3MOD=T3MOD&(~TL3X12);SFRPI=2;T3MOD1=T3MOD1|(TL3CS);SFRPI=0
#define TM_SetTL3Clock_INT1ET()			SFRPI=1;T3MOD=T3MOD(TL3X12);SFRPI=2;T3MOD1=T3MOD1|(TL3CS);SFRPI=0

// TIMER3 Capture source
#define TM_SetT3Capture_T3EXPin()		SFRPI=2;T3MOD1=T3MOD1&(0xF8);SFRPI=0
#define TM_SetT3Capture_INT0ET()		SFRPI=2;T3MOD1=(T3MOD1&(0xF8))|(CP2S0);SFRPI=0
#define TM_SetT3Capture_P60()			SFRPI=2;T3MOD1=(T3MOD1&(0xF8))|(CP2S1);SFRPI=0
#define TM_SetT3Capture_KBIET()			SFRPI=2;T3MOD1=(T3MOD1&(0xF8))|(CP2S2);SFRPI=0
#define TM_SetT3Capture_ILRCO()			SFRPI=2;T3MOD1=T3MOD1|(CP2S0|CP2S1|CP2S2);SFRPI=0

// TIMER3 Detect Falling/Rising
#define TM_EnableT3EX_DetectFalling()					SFRPI=1;EXEN3=1;SFRPI=0
#define TM_DisableT3EX_DetectFalling()					SFRPI=1;EXEN3=0;SFRPI=0
#define TM_EnableT3EX_DetectRising()					SFRPI=1;T3MOD=T3MOD|T3EXH;SFRPI=0
#define TM_DisableT3EX_DetectRising()					SFRPI=1;T3MOD=T3MOD&(~T3EXH);SFRPI=0

// TIMER3 T3CKO Invert
#define TM_DisableT3CKO_Invert()		SFRPI=1;T3MOD=T3MOD&(~TR3LC);SFRPI=0
#define TM_EnableT3CKO_Invert()			SFRPI=1;T3MOD=T3MOD|(TR3LC);SFRPI=0


// TIMER3 Value
#define TM_SetT3HighByte(x)			SFRPI=1;TH3=x;SFRPI=0
#define TM_SetT3LowByte(x)			SFRPI=1;TL3=x;SFRPI=0

#define TM_SetT3RLHighByte(x)		SFRPI=1;RCAP3H=x;SFRPI=0
#define TM_SetT3RLLowByte(x)		SFRPI=1;RCAP3L=x;SFRPI=0

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TIMER Global control
*
*************************************************************************************
*/
#define	TIMER0_GLOBAL_BIT  		0x01
#define	TIMER1_GLOBAL_BIT  		0x02
#define	TIMER2_GLOBAL_BIT  		0x04
#define	TIMER3_GLOBAL_BIT  		0x08
#define	TIMER2TL_GLOBAL_BIT 	0x20
#define	TIMER3TL_GLOBAL_BIT 	0x40

// TIMER Global enable
#define TM_GlobalStart(x)				SFRPI=1;TREN0=TREN0|x;SFRPI=0

// TIMER Global reload
#define TM_GlobalReload(x)				SFRPI=2;TRLC0=TRLC0|x;SFRPI=0

// TIMER Global stop
#define TM_GlobalSTOP(x)				SFRPI=3;TSPC0=TSPC0|x;SFRPI=0

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  IO PORT 
*
*************************************************************************************
*/
// P3 Mode
#define PORT_SetP3QuasiBi(x)				P3M0=P3M0&(~(x));P3M1=P3M1&(~(x))
#define PORT_SetP3PushPull(x)				P3M0=P3M0&(~(x));P3M1=P3M1|(x)
#define PORT_SetP3InputOnly(x)				P3M0=P3M0|(x);P3M1=P3M1&(~(x))
#define PORT_SetP3OpenDrain(x)				P3M0=P3M0|(x);P3M1=P3M1|(x)

// P30 Analog only En/Dis
#define PORT_P30_EnAnalogOnly()				SFRPI=8;AUXR11=AUXR11|(P30AM);SFRPI=0
#define PORT_P30_DisAnalogOnly()			SFRPI=8;AUXR11=AUXR11&(~P30AM);SFRPI=0

// P3 Driver level
#define PORT_P30P31P32P33_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P3DC0));SFRPI=0
#define PORT_P30P31P32P33_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P3DC0));SFRPI=0
#define PORT_P34P35P36P37_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P3DC1));SFRPI=0
#define PORT_P34P35P36P37_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P3DC1));SFRPI=0
#define PORT_P3_EnFastDrive(x)				SFRPI=7;P3FDC=P3FDC|((x));SFRPI=0
#define PORT_P3_DisFastDrive(x)				SFRPI=7;P3FDC=P3FDC&(~(x));SFRPI=0

// P1 Mode
#define PORT_SetP1OpenDrainPu(x)			P1M0=P1M0|(x);P1M1=P1M1|(x)
#define PORT_SetP1PushPull(x)				P1M0=P1M0|(x);P1M1=P1M1&(~(x))
#define PORT_SetP1AInputOnly(x)				P1M0=P1M0&(~(x));P1M1=P1M1|(x)
#define PORT_SetP1OpenDrain(x)				P1M0=P1M0&(~(x));P1M1=P1M1&(~(x))
// P1 Driver level
#define PORT_P10P11P12P13_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P1DC0));SFRPI=0
#define PORT_P10P11P12P13_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P1DC0));SFRPI=0
#define PORT_P14P15P16P17_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P1DC1));SFRPI=0
#define PORT_P14P15P16P17_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P1DC1));SFRPI=0
#define PORT_P1_EnFastDrive(x)				SFRPI=8;P1FDC=P1FDC|((x));SFRPI=0
#define PORT_P1_DisFastDrive(x)				SFRPI=8;P1FDC=P1FDC&(~(x));SFRPI=0

// P2 Mode
#define PORT_SetP2OpenDrainPu(x)			P2M0=P2M0|(x); SFRPI=1;P2M1=P2M1|(x) ;SFRPI=0 
#define PORT_SetP2PushPull(x)				P2M0=P2M0|(x); SFRPI=1;P2M1=P2M1&(~(x));SFRPI=0 
#define PORT_SetP2AInputOnly(x)				P2M0=P2M0&(~(x));SFRPI=1;P2M1=P2M1|(x) ;SFRPI=0
#define PORT_SetP2OpenDrain(x)				P2M0=P2M0&(~(x));SFRPI=1;P2M1=P2M1&(~(x));SFRPI=0
// P2 Driver level
#define PORT_P20P21P22P23_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P2DC0));SFRPI=0
#define PORT_P20P21P22P23_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P2DC0));SFRPI=0
#define PORT_P24P25P26P27_HighDrive()		SFRPI=2;PDRVC0=PDRVC0&(~(P2DC1));SFRPI=0
#define PORT_P24P25P26P27_LowDrive()		SFRPI=2;PDRVC0=PDRVC0|((P2DC1));SFRPI=0
#define PORT_P2_EnFastDrive(x)				SFRPI=9;P2FDC=P2FDC|((x));SFRPI=0
#define PORT_P2_DisFastDrive(x)				SFRPI=9;P2FDC=P2FDC&(~(x));SFRPI=0

// P4 Mode
#define PORT_SetP4OpenDrainPu(x)			P4M0=P4M0|(x); SFRPI=2;P4M1=P4M1|(x) ;SFRPI=0 
#define PORT_SetP4PushPull(x)				P4M0=P4M0|(x); SFRPI=2;P4M1=P4M1&(~(x));SFRPI=0 
#define PORT_SetP4AInputOnly(x)				P4M0=P4M0&(~(x));SFRPI=2;P4M1=P4M1|(x) ;SFRPI=0
#define PORT_SetP4OpenDrain(x)				P4M0=P4M0&(~(x));SFRPI=2;P4M1=P4M1&(~(x));SFRPI=0
// P4 Driver level
#define PORT_P44P45P46_HighDrive()			SFRPI=3;PDRVC1=PDRVC1&(~(P4DC1));SFRPI=0
#define PORT_P44P45P46_LowDrive()			SFRPI=3;PDRVC1=PDRVC1|((P4DC1));SFRPI=0
#define PORT_P4_EnFastDrive(x)				SFRPI=10;P4FDC=P4FDC|((x));SFRPI=0
#define PORT_P4_DisFastDrive(x)				SFRPI=10;P4FDC=P4FDC&(~(x));SFRPI=0
                                                                               
// P6 Mode
#define PORT_SetP6OpenDrainPu(x)			SFRPI=1;P6M0=P6M0|(x); SFRPI=3;P6M1=P6M1|(x) ;SFRPI=0 
#define PORT_SetP6PushPull(x)				SFRPI=1;P6M0=P6M0|(x); SFRPI=3;P6M1=P6M1&(~(x));SFRPI=0 
#define PORT_SetP6AInputOnly(x)				SFRPI=1;P6M0=P6M0&(~(x));SFRPI=3;P6M1=P6M1|(x) ;SFRPI=0
#define PORT_SetP6OpenDrain(x)				SFRPI=1;P6M0=P6M0&(~(x));SFRPI=3;P6M1=P6M1&(~(x));SFRPI=0

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  TWI0 
*
*************************************************************************************
*/
// Clear TWI0
#define TWI0_Clear()				SICON=0
// TWI0 Enable/Disable
#define TWI0_Disable()				SICON=SICON&(~ENSI)					
#define TWI0_Enable()				SICON=SICON|(ENSI)

// TWIO Clock. Master:1MHz Max, Slave: 400KHz Max
#define TWI0_CLK_SYSCLK_8	0	// SYSCLK/8
#define TWI0_CLK_SYSCLK_16	1	// SYSCLK/16
#define TWI0_CLK_SYSCLK_32	2	// SYSCLK/32
#define TWI0_CLK_SYSCLK_64	3	// SYSCLK/64
#define TWI0_CLK_SYSCLK_128	4	// SYSCLK/128
#define TWI0_CLK_SYSCLK_256	5	// SYSCLK/256
#define TWI0_CLK_S0TOF_6	6	// S0TOF/6	
#define TWI0_CLK_T0OF_6		7	// T0OF/6	

#define TWI0_SetClock(x)			SICON=(SICON&B01111100)|((x&0x03)|((x<<5)&B10000000))

#define TWI0_SetSlaveAddr(x)		SIADR=x			// Set slave addr
#define TWI0_SendACK()				SICON |= AA		// Send ACK
#define TWI0_SendNOACK()			SICON &= ~AA	// Send NACK
#define TWI0_SendSTART()			SICON |= STA	// Send Start
#define TWI0_ClearSTART()			SICON &= ~STA	// Clear Start bit
#define TWI0_SendSTOP()				SICON |= STO	// Send Stop, Auto clear by HW
#define TWI0_ClearSI()				SICON &= ~SI	// Clear TWI interrupt flag

// TWI0 IO Port for SCL/SDA
#define TWI0_SetUseP31P30()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))
#define TWI0_SetUseP60P61()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))|TWIPS0
#define TWI0_SetUseP30P31()			AUXR3=(AUXR3&(~(TWIPS1|TWIPS0)))|TWIPS1
#define TWI0_SetUseP22P24()			AUXR3=(AUXR3|(TWIPS1|TWIPS0))

// TWI0 SCL Filter Enable/Disable
#define TWI0_DisClkFilter()			SFRPI=7;AUXR7=AUXR7&(~TWICF);SFRPI=0			
#define TWI0_EnClkFilter()			SFRPI=7;AUXR7=AUXR7|(TWICF);SFRPI=0

// TWI0 Pre-Assert ACK ON DMA
#define TWI0_DisPAA()				SFRPI=7;AUXR7=AUXR7&(~PAA);SFRPI=0			
#define TWI0_EnPAA()				SFRPI=7;AUXR7=AUXR7|(PAA);SFRPI=0

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  UART0 
*
*************************************************************************************
*/
// UART0 Mode
#define UART0_SetModeShiftReg()				S0CFG=S0CFG&(~SM30);SM00_FE=0;SM10=0
#define UART0_SetMode8bitUARTVar()			S0CFG=S0CFG&(~SM30);SM00_FE=0;SM10=1
#define UART0_SetMode9bitUART()				S0CFG=S0CFG&(~SM30);SM00_FE=1;SM10=0
#define UART0_SetMode9bitUARTVar()			S0CFG=S0CFG&(~SM30);SM00_FE=1;SM10=1
#define UART0_SetModeSPIMaster()			S0CFG=S0CFG|(SM30);SM00_FE=0;SM10=0
#define UART0_SetModeLIN()					S0CFG=S0CFG|(SM30);SM00_FE=0;SM10=1;S0CR1=S0CR1|(S0TCK|S0RCK)
#define UART0_SetMode9bitUART_S0BRT8BitTimer()	S0CFG=S0CFG&(~SM30);SM00_FE=1;SM10=0;S0CR1=S0CR1|(S0TCK|S0RCK);S0CFG=S0CFG&(~S0DOR)
#define UART0_SetMode9bitUART_S0BRT16BitTimer()	S0CFG=S0CFG&(~SM30);SM00_FE=1;SM10=0;S0CR1=S0CR1|(S0TCK|S0RCK);S0CFG=S0CFG|(S0DOR)

// UART0 Auto address recognition
#define UART0_EnAutoAddressRecognition()	SM20=1
#define UART0_DisAutoAddressRecognition()	SM20=0

// UART0 Reception Enable/Disable
#define UART0_EnReception()					REN0=1
#define UART0_DisReception()				REN0=0

// UART0 Data MSB/LSB
#define UART0_SetDataMSB()					S0CFG=S0CFG&(~S0DOR)
#define UART0_SetDataLSB()					S0CFG=S0CFG|(S0DOR)

// UART0 TI0 to be a source of UART0 interrupt 
#define UART0_EnTI0toS0Interrupt()			S0CFG=S0CFG&(~BTI)
#define UART0_DisTI0toS0Interrupt()			S0CFG=S0CFG|(BTI)

// UART0 TI0 to be a source of SYSFLAG interrupt 
#define UART0_EnTI0toSysFlagInterrupt()		S0CFG=S0CFG|(UTIE)
#define UART0_DisTI0toSysFlagInterrupt()	S0CFG=S0CFG&(~UTIE)

// UART0 Slave addr
#define UART0_SetSlaveAddr(x)				SADDR=x

// UART0 Slave addr mask
#define UART0_SetSlaveAddrMask(x)			SADEN=x

// UART0 B.R.  X1/X2/X4/X8
#define UART0_SetT1BaudRateX1()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT1BaudRateX2()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT1BaudRateX4()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)
#define UART0_SetT1BaudRateX8()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG|(SMOD2)

#define UART0_SetT2BaudRateX1()				S0CFG=S0CFG&(~SMOD2)
#define UART0_SetT2BaudRateX2()				PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)
#define UART0_SetT2BaudRateX4()				PCON0=PCON0|(SMOD1);S0CFG=S0CFG|(SMOD2)

#define UART0_SetS0BRGBaudRateX1()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetS0BRGBaudRateX2()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)

#define UART0_SetS1BRGBaudRateX1()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetS1BRGBaudRateX2()			PCON0=PCON0|(SMOD1);S0CFG=S0CFG&(~SMOD2)
#define UART0_SetS1BRGBaudRateX4()			PCON0=PCON0&(~SMOD1);S0CFG=S0CFG|(SMOD2)
#define UART0_SetS1BRGBaudRateX8()			PCON0=PCON0|(SMOD1);S0CFG=S0CFG|(SMOD2)



// UART0 B.R. Source
#define UART0_SetBRGFromT1()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK_TF2L=0;TCLK_TL2IE=0;S0CFG=S0CFG&(~URTS)		
#define UART0_SetBRGFromT2()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK_TF2L=1;TCLK_TL2IE=1
#define UART0_SetBRGFromS0BRG()				S0CR1=S0CR1|(S0TCK|S0RCK)		
#define UART0_SetBRGFromS1BRG()				S0CR1=S0CR1&(~(S0TCK|S0RCK));SFRPI=1;T2MOD1=T2MOD1&(~TL2IS);SFRPI=0;RCLK_TF2L=0;TCLK_TL2IE=0;S0CFG=S0CFG|(URTS)

// UART0 IO Port
#define UART0_SetRxTxP30P31()				SFRPI=7;AUXR10=AUXR10&(~S0PS1);SFRPI=0;	AUXR3=AUXR3&(~S0PS0)
#define UART0_SetRxTxP44P45()				SFRPI=7;AUXR10=AUXR10&(~S0PS1);SFRPI=0;	AUXR3=AUXR3|(S0PS0)
#define UART0_SetRxTxP31P30()				SFRPI=7;AUXR10=AUXR10|(S0PS1);SFRPI=0;	AUXR3=AUXR3&(~S0PS0)
#define UART0_SetRxTxP17P22()				SFRPI=7;AUXR10=AUXR10|(S0PS1);SFRPI=0;	AUXR3=AUXR3|(S0PS0)


// UART UART0/UART1 SPI-MASTER MISO IO port
#define UART_SetS0S1MISOP16P61()			SFRPI=3;AUXR6=AUXR6&(~SnMIPS);SFRPI=0				
#define UART_SetS0S1MISOP33P47()			SFRPI=3;AUXR6=AUXR6|(SnMIPS);SFRPI=0				

// UART0 S0BRG Enable/Disable
#define UART0_EnS0BRG()						S0CR1=S0CR1|S0TR
#define UART0_DisS0BRG()					S0CR1=S0CR1&(~S0TR)

// UART0 S0BRG Clock source
#define UART0_SetS0BRGSelSYSCLK()			S0CR1=S0CR1|(S0TX12)
#define UART0_SetS0BRGSelSYSCLKdiv12()		S0CR1=S0CR1&(~S0TX12)

// UART0 S0BRG Value
#define UART0_SetS0BRGValue(x)				S0BRT=x;S0BRC=x

// UART0 S0CKO Output Enable/Disable
#define UART0_EnS0CKO()						S0CR1=S0CR1|S0CKOE
#define UART0_DisS0CKO()					S0CR1=S0CR1&(~S0CKOE)

// UART0 S0CKO IO Port
#define UART0_SetS0CKOP33()					SFRPI=3;AUXR6=AUXR6|S0COPS;SFRPI=0
#define UART0_SetS0CKOP47()					SFRPI=3;AUXR6=AUXR6&(~S0COPS);SFRPI=0

// UART0 Auto repeat transmit Enable/Disable
#define UART0_EnAutoRepeatTrans()			S0CR1=S0CR1|ARTE
#define UART0_DisAutoRepeatTrans()			S0CR1=S0CR1&(~ARTE)

// UART0 SFR 0xB9 access SADEN or S0CR1
#define UART0_SetAccess_SADEN()				S0CFG=S0CFG&(~SMOD3)
#define UART0_SetAccess_S0CR1()				S0CFG=S0CFG|(SMOD3)

// UART0 SPI-MASTER Clock
#define UART0_SetSPIClock_SYSCLKDiv4()		S0CFG=S0CFG|(URM0X3)
#define UART0_SetSPIClock_SYSCLKDiv12()		S0CFG=S0CFG&(~URM0X3)

// UART0 SPI-MASTER S0MI£¨MISO£©IO Port
#define UART0_SetMISOP16()					SFRPI=3;AUXR6=AUXR6&(~SnMIPS);SFRPI=0
#define UART0_SetMISOP33()					SFRPI=3;AUXR6=AUXR6|SnMIPS;SFRPI=0

// UART0 LIN TX/RX
#define UART0_LIN_SetTX()					S0CFG1=S0CFG1|(TXRX0)
#define UART0_LIN_SetRX()					S0CFG1=S0CFG1&(~TXRX0)

// UART0 LIN TX Send SYNC-Break, RX Wait SYNC-Break
#define UART0_LIN_SendSYNC()				S0CFG1=S0CFG1|(SYNC0)
#define UART0_LIN_WaitSYNC()				S0CFG1=S0CFG1|(SYNC0)

// UART0 LIN TX SYNC 13bi/16Bit
#define UART0_LIN_TxSYNC_16Bit()			S0CFG1=S0CFG1|(S0SB16)
#define UART0_LIN_TxSYNC_13Bit()			S0CFG1=S0CFG1&(~S0SB16)

// UART0 LIN RX Aoto adjust B.R.
#define UART0_LIN_AutoBR()					S0CFG1=S0CFG1|(ATBR0)
#define UART0_LIN_DisAutoBR()				S0CFG1=S0CFG1&(~ATBR0)

// UART0 LIN Clear flag
#define UART0_LIN_ClrSBF0()					S0CFG1=S0CFG1|(SBF0)
#define UART0_LIN_ClrTXER0()				S0CFG1=S0CFG1|(TXER0)
/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  UART1 
*
*************************************************************************************
*/
// UART1 Mode
#define UART1_SetModeShiftReg()				SFRPI=1;S1CFG=S1CFG&(~SM31);SM01=0;SM11=0;SFRPI=0
#define UART1_SetMode8bitUARTVar()			SFRPI=1;S1CFG=S1CFG&(~SM31);SM01=0;SM11=1;SFRPI=0
#define UART1_SetMode9bitUART()				SFRPI=1;S1CFG=S1CFG&(~SM31);SM01=1;SM11=0;SFRPI=0
#define UART1_SetMode9bitUARTVar()			SFRPI=1;S1CFG=S1CFG&(~SM31);SM01=1;SM11=1;SFRPI=0
#define UART1_SetModeSPIMaster()			SFRPI=1;S1CFG=S1CFG|(SM31);SM01=0;SM11=0;SFRPI=0
#define UART1_SetMode8BitTimer()			SFRPI=1;S1CFG=S1CFG|(S1TME);S1CFG=S1CFG&(~S1DOR);SFRPI=0
#define UART1_SetMode16BitTimer()			SFRPI=1;S1CFG=S1CFG|(S1TME);S1CFG=S1CFG|(S1DOR);SFRPI=0


// UART1 Reception Enable/Disable
#define UART1_EnReception()					SFRPI=1;REN1=1;SFRPI=0
#define UART1_DisReception()				SFRPI=1;REN1=0;SFRPI=0

// UART1 Data MSB/LSB
#define UART1_SetDataMSB()					SFRPI=1;S1CFG=S1CFG&(~S1DOR);SFRPI=0
#define UART1_SetDataLSB()					SFRPI=1;S1CFG=S1CFG|(S1DOR);SFRPI=0

// UART1 B.R. X1/X2
#define UART1_SetBaudRateX1()				SFRPI=1;S1CFG=S1CFG&(~S1MOD1);SFRPI=0
#define UART1_SetBaudRateX2()				SFRPI=1;S1CFG=S1CFG|(S1MOD1);SFRPI=0

// UART1 S1BRG Enable/Disable
#define UART1_EnS1BRG()						SFRPI=1;S1CFG=S1CFG|(S1TR);SFRPI=0
#define UART1_DisS1BRG()					SFRPI=1;S1CFG=S1CFG&(~S1TR);SFRPI=0

// UART1 S1BRG Clock source
#define UART1_SetS1BRGSelSYSCLK()			SFRPI=1;S1CFG=S1CFG|(S1TX12);SFRPI=0
#define UART1_SetS1BRGSelSYSCLKdiv12()		SFRPI=1;S1CFG=S1CFG&(~S1TX12);SFRPI=0

// UART1 S1BRG Value
#define UART1_SetS1BRGValue(x)				SFRPI=1;S1BRT=x;S1BRC=x;SFRPI=0

// UART1 IO Port
#define UART1_SetRxTxP10P11()				SFRPI=6;AUXR9=AUXR9&(~(S1PS1|S1PS0));SFRPI=0
#define UART1_SetRxTxP60P61()				SFRPI=6;AUXR9=(AUXR9&(~(S1PS1|S1PS0)))|S1PS0;SFRPI=0
#define UART1_SetRxTxP44P45()				SFRPI=6;AUXR9=(AUXR9&(~(S1PS1|S1PS0)))|S1PS1;SFRPI=0
#define UART1_SetRxTxP34P35()				SFRPI=6;AUXR9=AUXR9|(S1PS1|S1PS0);SFRPI=0

// UART1 SPI-MASTER Clock
#define UART1_SetSPIClock_SYSCLKDiv4()		SFRPI=1;S0CFG=S0CFG|(S1M0X3);SFRPI=0
#define UART1_SetSPIClock_SYSCLKDiv12()		SFRPI=1;S0CFG=S0CFG&(~S1M0X3);SFRPI=0

// UART1 SPI-MASTER S0MI£¨MISO£©IO Port
#define UART1_SetMISOP61()					SFRPI=3;AUXR6=AUXR6&(~SnMIPS);SFRPI=0
#define UART1_SetMISOP47()					SFRPI=3;AUXR6=AUXR6|SnMIPS;SFRPI=0

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  ADC
*
*************************************************************************************
*/
// ADC Enable/Disable
#define ADC_Disable()						ADCON0=ADCON0&(~ADCEN)					
#define ADC_Enable()						ADCON0=ADCON0|(ADCEN)

// ADC Start conversion
#define ADC_SoftStart()						ADCON0=ADCON0|(ADCS)					

// ADC Clock source
#define ADC_SetClock_SYSCLK()				ADCFG0=ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2))
#define ADC_SetClock_SYSCLKDiv2()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0)
#define ADC_SetClock_SYSCLKDiv4()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS1)
#define ADC_SetClock_SYSCLKDiv8()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0|ADCKS1)
#define ADC_SetClock_SYSCLKDiv16()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS2)
#define ADC_SetClock_SYSCLKDiv32()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS0|ADCKS2)
#define ADC_SetClock_S0TOFDiv2()			ADCFG0=(ADCFG0&(~(ADCKS0|ADCKS1|ADCKS2)))|(ADCKS1|ADCKS2)
#define ADC_SetClock_T2OFDiv2()				ADCFG0=ADCFG0|(ADCKS0|ADCKS1|ADCKS2)

// ADC Select Channel
#define ADC_SetChannel_AIN0()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))
#define ADC_SetChannel_AIN1()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS0)
#define ADC_SetChannel_AIN2()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS1)
#define ADC_SetChannel_AIN3()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS1|CHS0)
#define ADC_SetChannel_AIN4()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2)
#define ADC_SetChannel_AIN5()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2|CHS0)
#define ADC_SetChannel_AIN6()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2|CHS1)
#define ADC_SetChannel_AIN7()				ADCFG0=ADCFG0&(~ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS2|CHS1|CHS0)
#define ADC_SetChannel_IVR14()				ADCFG0=ADCFG0|(ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))
#define ADC_SetChannel_AVSS()				ADCFG0=ADCFG0|(ACHS);ADCON0=(ADCON0&(~(CHS3|CHS2|CHS1|CHS0)))|(CHS0)

// ADC Trigger Mode
#define ADC_SetMode_SetADCS()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_T0Overflow()			SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM0)
#define ADC_SetMode_FreeRunning()			SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)
#define ADC_SetMode_S0BRGOverflow()			SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)));SFRPI=0;ADCFG0=ADCFG0|(ADTM0|ADTM1)
#define ADC_SetMode_KBIET()					SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_INT1ET()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM0)
#define ADC_SetMode_INT2ET()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)
#define ADC_SetMode_T2EXES()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3);SFRPI=0;ADCFG0=ADCFG0&(~(ADTM0|ADTM1))
#define ADC_SetMode_T3EXES()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)
#define ADC_SetMode_PCA0Overflow()			SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3|ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))
#define ADC_SetMode_C0CMP6()				SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3|ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM0)
#define ADC_SetMode_C0CMP6orC0CMP7()		SFRPI=4;ADCFG4=(ADCFG4&(~(ADTM3|ADTM2)))|(ADTM3|ADTM2);SFRPI=0;ADCFG0=(ADCFG0&(~(ADTM0|ADTM1)))|(ADTM1)


// ADC Justified selection, Left(ADCDH[7:0]ADCDL[7:4])/Right(ADCDH[3:0]ADCDL[7:0])
#define ADC_SetLeftJustified()				ADCFG0=ADCFG0&(~ADRJ)					
#define ADC_SetRightJustified()				ADCFG0=ADCFG0|(ADRJ)					

// ADC SHT
#define ADC_SetSampleHoldTime(x)		SFRPI=2;ADCFG2=x;SFRPI=0	// SHT=x

// ADC Offset
#define ADC_SetOffsetAdd(x)				SFRPI=1;ADCFG1=(ADCFG1&(~(0x1F)))|(x);SFRPI=0	// ADCÖµ+x (x=0~15)
#define ADC_SetOffsetSub(x)				SFRPI=1;ADCFG1=(ADCFG1&(~(0x1F)))|((~x));SFRPI=0	// ADCÖµ-x (x=1~16)

// ADC Window In/Out
#define ADC_SetWindow_WithIn()			SFRPI=0x04;ADCFG4=ADCFG4&(~ADWM0);SFRPI=0
#define ADC_SetWindow_OutSide()			SFRPI=0x04;ADCFG4=ADCFG4|(ADWM0);SFRPI=0

// ADC Window value
#define ADC_SetWindow_High(x)			SFRPI=0x0B;ADCFG11=(((x&0x0F)<<4)|0x0F)	;SFRPI=0x0C;ADCFG12=((x>>4)&0xFF);SFRPI=0
#define ADC_SetWindow_Low(x)			SFRPI=0x0D;ADCFG13=(((x&0x0F)<<4)&0xF0)	;SFRPI=0x0E;ADCFG14=((x>>4)&0xFF);SFRPI=0

// ADC Resolution
#define ADC_SetADCData_12Bit()			SFRPI=0x03;ADCFG3=ADCFG3&(~(ARES1|ARES0));SFRPI=0
#define ADC_SetADCData_10Bit()			SFRPI=0x03;ADCFG3=(ADCFG3&(~(ARES1|ARES0)))|(ARES0);SFRPI=0
#define ADC_SetADCData_8Bit()			SFRPI=0x03;ADCFG3=(ADCFG3&(~(ARES1|ARES0)))|(ARES1);SFRPI=0

// ADC Auto channel scan
#define ADC_SetChannelAutoScan(x)		SFRPI=0x05;ADCFG5=x;SFRPI=0

// ADC ADCI trigger ADC interrupt
#define ADC_EnInterrupt_ADCI()			SFRPI=1;ADCFG1=ADCFG1&(~IGADCI);SFRPI=0
#define ADC_DisInterrupt_ADCI()			SFRPI=1;ADCFG1=ADCFG1|(IGADCI);SFRPI=0

// ADC ADCWI trigger ADC interrupt
#define ADC_DisInterrupt_ADCWI()		SFRPI=1;ADCFG1=ADCFG1&(~EADCWI);SFRPI=0
#define ADC_EnInterrupt_ADCWI()			SFRPI=1;ADCFG1=ADCFG1|(EADCWI);SFRPI=0

// ADC SMPF trigger ADC interrupt
#define ADC_DisInterrupt_SMPF()			SFRPI=1;ADCFG1=ADCFG1&(~SMPFIE);SFRPI=0
#define ADC_ENInterrupt_SMPF()			SFRPI=1;ADCFG1=ADCFG1|(SMPFIE);SFRPI=0


#define ADC_ClrInterruptFlag()			ADCON0=ADCON0&(~ADCI)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  IVREF
*
*************************************************************************************
*/
#define IVREF_Enable()						ISPCR=0x80;IFADRH=0x0;IFADRL=PCON3_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xEF))|(IVREN_P);IFADRH=0x0;IFADRL=CKCON3_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0		
#define IVREF_Disable()						ISPCR=0x80;IFADRH=0x0;IFADRL=PCON3_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xEF));IFADRH=0x0;IFADRL=CKCON3_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0		

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  SPI 
*
*************************************************************************************
*/
// SPI Enable/Disable
#define SPI_Disable()						SPCON=SPCON&(~SPEN)					
#define SPI_Enable()						SPCON=SPCON|(SPEN)

// SPI Select MASTER/SLAVE
#define SPI_SelectMASTERByMSTRbit()			SPCON=SPCON|(SSIG|MSTR)					
#define SPI_SelectSLAVEByMSTRbit()			SPCON=(SPCON|(SSIG))&(~MSTR)						
#define SPI_SelectMASTERSLAVEBynSSpin()		SPCON=SPCON&(~SSIG)

// SPI CPOL
#define SPI_SetCPOL_0()						SPCON=SPCON&(~CPOL)
#define SPI_SetCPOL_1()						SPCON=SPCON|(CPOL)

// SPI Data MSB/LSB
#define SPI_SetDataMSB()					SPCON=SPCON&(~DORD)
#define SPI_SetDataLSB()					SPCON=SPCON|(DORD)

// SPI Clock source
#define SPI_CLK_SYSCLK_4	0	// SYSCLK/4
#define SPI_CLK_SYSCLK_8	1	// SYSCLK/8
#define SPI_CLK_SYSCLK_16	2	// SYSCLK/16
#define SPI_CLK_SYSCLK_32	3	// SYSCLK/32
#define SPI_CLK_SYSCLK_64	4	// SYSCLK/64
#define SPI_CLK_SYSCLK_2	5	// SYSCLK/2
#define SPI_CLK_S0TOF_6		6	// S0TOF/6	
#define SPI_CLK_T0OF_6		7	// T0OF/6	

#define SPI_SetClock(x)						SPCON=(SPCON&B11111100)|(x&0x03);SPSTAT=(x>>2)

// SPI CPHA
#define SPI_SetCPHA_0()						SPCON=SPCON&(~CPHA)
#define SPI_SetCPHA_1()						SPCON=SPCON|(CPHA)

// SPI  nSS/MOSI/MISO/SPICLK IO Port
#define SPI_SetUseP33P15P16P17()			SFRPI=7;AUXR10=AUXR10&(~SPIPS0);SFRPI=0
#define SPI_SetUseP17P35P34P33()			SFRPI=7;AUXR10=AUXR10|(SPIPS0);SFRPI=0


// SPI Check/Clear SPIF
#define SPI_ClearCompleteFlag()		SPSTAT=SPSTAT|SPIF
#define SPI_ChkCompleteFlag()		(SPSTAT&SPIF)

// SPI Write/Read Data
#define SPI_SendData(x)		SPDAT=x
#define SPI_GetData()		SPDAT


/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  PCA
*
*************************************************************************************
*/
// PCA Counter En/Dis
#define	PCA_EnPCACounter()					CR=1
#define	PCA_DisPCACounter()					CR=0

// PCA Clock source, If select CKMIX16/MCKDO,need >=SYSCLKx2 & >=CPUCLKx3
#define PCA_SetCLOCK_SYSCLKdiv12()			CMOD=CMOD&(~(CPS2|CPS1|CPS0))
#define PCA_SetCLOCK_SYSCLKdiv2()			CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS0)
#define PCA_SetCLOCK_TO()					CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS1)
#define PCA_SetCLOCK_ECI()					CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS1|CPS0)
#define PCA_SetCLOCK_CKMIX16()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2)
#define PCA_SetCLOCK_SYSCLK()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2|CPS0)
#define PCA_SetCLOCK_S0BRT()				CMOD=(CMOD&(~(CPS2|CPS1|CPS0)))|(CPS2|CPS1)
#define PCA_SetCLOCK_MCKDO()				CMOD=CMOD|(CPS2|CPS1|CPS0)

// PCA FIFO Data trigger source
#define PCA_SetFDCK_T0OF()					SFRPI=6;AUXR9=AUXR9&(C0FDC1|C0FDC0);SFRPI=0			
#define PCA_SetFDCK_T1OF()					SFRPI=6;AUXR9=(AUXR9&(C0FDC1|C0FDC0))|(C0FDC0);SFRPI=0			
#define PCA_SetFDCK_T3OF()					SFRPI=6;AUXR9=(AUXR9&(C0FDC1|C0FDC0))|(C0FDC1);SFRPI=0			
#define PCA_SetFDCK_S0TOF()					SFRPI=6;AUXR9=AUXR9|(C0FDC1|C0FDC0));SFRPI=0			

// PCA Counter value
#define PCA_SetCounter(x)					CH=HIBYTE(x);CL=LOBYTE(x)
#define PCA_SetCounterReload(x)				CHRL=HIBYTE(x);CLRL=LOBYTE(x)


// PCA Mode
#define PCA_CH0_SetMode_16BitCaptureRising()	CCAPM0=CAPP0		
#define PCA_CH0_SetMode_16BitCaptureFalling()	CCAPM0=CAPN0		
#define PCA_CH0_SetMode_16BitCaptureDaul()		CCAPM0=CAPP0|CAPN0		
#define PCA_CH0_SetMode_16BitSoftwareTimer()	CCAPM0=ECOM0|MAT0		
#define PCA_CH0_SetMode_16BitHighSpeedOutput()	CCAPM0=ECOM0|MAT0|TOG0		
#define PCA_CH0_SetMode_PWM()					CCAPM0=ECOM0|PWM0	
#define PCA_CH0_SetMode_COPM()					CCAPM0=ECOM0|PWM0|TOG0	
#define PCA_CH0_SetMode_FIFOData()				CCAPM0=ECOM0|CAPN0|PWM0	

#define PCA_CH1_SetMode_16BitCaptureRising()	CCAPM1=CAPP1		
#define PCA_CH1_SetMode_16BitCaptureFalling()	CCAPM1=CAPN1		
#define PCA_CH1_SetMode_16BitCaptureDaul()		CCAPM1=CAPP1|CAPN1		
#define PCA_CH1_SetMode_16BitSoftwareTimer()	CCAPM1=ECOM1|MAT1		
#define PCA_CH1_SetMode_16BitHighSpeedOutput()	CCAPM1=ECOM1|MAT1|TOG1		
#define PCA_CH1_SetMode_PWM()					CCAPM1=ECOM1|PWM1	
#define PCA_CH1_SetMode_COPM()					CCAPM1=ECOM1|PWM1|TOG1	
#define PCA_CH1_SetMode_FIFOData()				CCAPM1=ECOM1|CAPN1|PWM1	

#define PCA_CH2_SetMode_16BitCaptureRising()	CCAPM2=CAPP2		
#define PCA_CH2_SetMode_16BitCaptureFalling()	CCAPM2=CAPN2		
#define PCA_CH2_SetMode_16BitCaptureDaul()		CCAPM2=CAPP2|CAPN2		
#define PCA_CH2_SetMode_16BitSoftwareTimer()	CCAPM2=ECOM2|MAT2		
#define PCA_CH2_SetMode_16BitHighSpeedOutput()	CCAPM2=ECOM2|MAT2|TOG2		
#define PCA_CH2_SetMode_PWM()					CCAPM2=ECOM2|PWM2	
#define PCA_CH2_SetMode_COPM()					CCAPM2=ECOM2|PWM2|TOG2	
#define PCA_CH2_SetMode_FIFOData()				CCAPM2=ECOM2|CAPN2|PWM2	

#define PCA_CH3_SetMode_16BitCaptureRising()	CCAPM3=CAPP3		
#define PCA_CH3_SetMode_16BitCaptureFalling()	CCAPM3=CAPN3		
#define PCA_CH3_SetMode_16BitCaptureDaul()		CCAPM3=CAPP3|CAPN3		
#define PCA_CH3_SetMode_16BitSoftwareTimer()	CCAPM3=ECOM3|MAT3		
#define PCA_CH3_SetMode_16BitHighSpeedOutput()	CCAPM3=ECOM3|MAT3|TOG3		
#define PCA_CH3_SetMode_PWM()					CCAPM3=ECOM3|PWM3	
#define PCA_CH3_SetMode_COPM()					CCAPM3=ECOM3|PWM3|TOG3	
#define PCA_CH3_SetMode_FIFOData()				CCAPM3=ECOM3|CAPN3|PWM3	

#define PCA_CH4_SetMode_16BitCaptureRising()	CCAPM4=CAPP4		
#define PCA_CH4_SetMode_16BitCaptureFalling()	CCAPM4=CAPN4		
#define PCA_CH4_SetMode_16BitCaptureDaul()		CCAPM4=CAPP4|CAPN4		
#define PCA_CH4_SetMode_16BitSoftwareTimer()	CCAPM4=ECOM4|MAT4		
#define PCA_CH4_SetMode_16BitHighSpeedOutput()	CCAPM4=ECOM4|MAT4|TOG4		
#define PCA_CH4_SetMode_PWM()					CCAPM4=ECOM4|PWM4	
#define PCA_CH4_SetMode_COPM()					CCAPM4=ECOM4|PWM4|TOG4	
#define PCA_CH4_SetMode_FIFOData()				CCAPM4=ECOM4|CAPN4|PWM4	

#define PCA_CH5_SetMode_16BitCaptureRising()	CCAPM5=CAPP5		
#define PCA_CH5_SetMode_16BitCaptureFalling()	CCAPM5=CAPN5		
#define PCA_CH5_SetMode_16BitCaptureDaul()		CCAPM5=CAPP5|CAPN5		
#define PCA_CH5_SetMode_16BitSoftwareTimer()	CCAPM5=ECOM5|MAT5		
#define PCA_CH5_SetMode_16BitHighSpeedOutput()	CCAPM5=ECOM5|MAT5|TOG5		
#define PCA_CH5_SetMode_PWM()					CCAPM5=ECOM5|PWM5	
#define PCA_CH5_SetMode_COPM()					CCAPM5=ECOM5|PWM5|TOG5	
#define PCA_CH5_SetMode_FIFOData()				CCAPM5=ECOM5|CAPN5|PWM5	

#define PCA_CH6_SetMode_16BitSoftwareTimer()	SFRPI=1;CCAPM6=ECOM6|MAT6;SFRPI=0		
#define PCA_CH6_SetMode_16BitHighSpeedOutput()	SFRPI=1;CCAPM6=ECOM6|MAT6|TOG6;SFRPI=0		
#define PCA_CH6_SetMode_PWM()					SFRPI=1;CCAPM6=ECOM6|PWM6;SFRPI=0	
#define PCA_CH6_SetMode_COPM()					SFRPI=1;CCAPM6=ECOM6|PWM6|TOG6;SFRPI=0	
#define PCA_CH6_SetMode_FIFOData()				SFRPI=1;CCAPM6=ECOM6|CAPN6|PWM6;SFRPI=0	

#define PCA_CH7_SetMode_16BitSoftwareTimer()	SFRPI=1;CCAPM7=ECOM7|MAT7;SFRPI=0		
#define PCA_CH7_SetMode_16BitHighSpeedOutput()	SFRPI=1;CCAPM7=ECOM7|MAT7|TOG7;SFRPI=0		
#define PCA_CH7_SetMode_PWM()					SFRPI=1;CCAPM7=ECOM7|PWM7;SFRPI=0	
#define PCA_CH7_SetMode_COPM()					SFRPI=1;CCAPM7=ECOM7|PWM7|TOG7;SFRPI=0	
#define PCA_CH7_SetMode_FIFOData()				SFRPI=1;CCAPM7=ECOM7|CAPN7|PWM7;SFRPI=0	

#define PCA_CH0_SetPWM_8Bit()					PCAPWM0=PCAPWM0&(~(P0RS0|P0RS1))
#define PCA_CH0_SetPWM_10Bit()					PCAPWM0=(PCAPWM0&(~(P0RS0|P0RS1)))|(P0RS0)
#define PCA_CH0_SetPWM_12Bit()					PCAPWM0=(PCAPWM0&(~(P0RS0|P0RS1)))|(P0RS1)
#define PCA_CH0_SetPWM_16Bit()					PCAPWM0=PCAPWM0|((P0RS0|P0RS1))

#define PCA_CH1_SetPWM_8Bit()					PCAPWM1=PCAPWM1&(~(P1RS0|P1RS1))
#define PCA_CH1_SetPWM_10Bit()					PCAPWM1=(PCAPWM1&(~(P1RS0|P1RS1)))|(P1RS0)
#define PCA_CH1_SetPWM_12Bit()					PCAPWM1=(PCAPWM1&(~(P1RS0|P1RS1)))|(P1RS1)
#define PCA_CH1_SetPWM_16Bit()					PCAPWM1=PCAPWM1|((P1RS0|P1RS1))

#define PCA_CH2_SetPWM_8Bit()					PCAPWM2=PCAPWM0&(~(P2RS0|P2RS1))
#define PCA_CH2_SetPWM_10Bit()					PCAPWM2=(PCAPWM0&(~(P2RS0|P2RS1)))|(P2RS0)
#define PCA_CH2_SetPWM_12Bit()					PCAPWM2=(PCAPWM0&(~(P2RS0|P2RS1)))|(P2RS1)
#define PCA_CH2_SetPWM_16Bit()					PCAPWM2=PCAPWM0|((P2RS0|P2RS1))

#define PCA_CH3_SetPWM_8Bit()					PCAPWM3=PCAPWM0&(~(P3RS0|P3RS1))
#define PCA_CH3_SetPWM_10Bit()					PCAPWM3=(PCAPWM0&(~(P3RS0|P3RS1)))|(P3RS0)
#define PCA_CH3_SetPWM_12Bit()					PCAPWM3=(PCAPWM0&(~(P3RS0|P3RS1)))|(P3RS1)
#define PCA_CH3_SetPWM_16Bit()					PCAPWM3=PCAPWM0|((P3RS0|P3RS1))

#define PCA_CH4_SetPWM_8Bit()					PCAPWM4=PCAPWM0&(~(P4RS0|P4RS1))
#define PCA_CH4_SetPWM_10Bit()					PCAPWM4=(PCAPWM0&(~(P4RS0|P4RS1)))|(P4RS0)
#define PCA_CH4_SetPWM_12Bit()					PCAPWM4=(PCAPWM0&(~(P4RS0|P4RS1)))|(P4RS1)
#define PCA_CH4_SetPWM_16Bit()					PCAPWM4=PCAPWM0|((P4RS0|P4RS1))

#define PCA_CH5_SetPWM_8Bit()					PCAPWM5=PCAPWM0&(~(P5RS0|P5RS1))
#define PCA_CH5_SetPWM_10Bit()					PCAPWM5=(PCAPWM0&(~(P5RS0|P5RS1)))|(P5RS0)
#define PCA_CH5_SetPWM_12Bit()					PCAPWM5=(PCAPWM0&(~(P5RS0|P5RS1)))|(P5RS1)
#define PCA_CH5_SetPWM_16Bit()					PCAPWM5=PCAPWM0|((P5RS0|P5RS1))

#define PCA_CH6_SetPWM_8Bit()					SFRPI=1;PCAPWM6=PCAPWM0&(~(P6RS0|P6RS1));SFRPI=0	
#define PCA_CH6_SetPWM_10Bit()					SFRPI=1;PCAPWM6=(PCAPWM0&(~(P6RS0|P6RS1)))|(P6RS0);SFRPI=0	
#define PCA_CH6_SetPWM_12Bit()					SFRPI=1;PCAPWM6=(PCAPWM0&(~(P6RS0|P6RS1)))|(P6RS1);SFRPI=0	
#define PCA_CH6_SetPWM_16Bit()					SFRPI=1;PCAPWM6=PCAPWM0|((P6RS0|P6RS1));SFRPI=0	

#define PCA_CH7_SetPWM_8Bit()					SFRPI=1;PCAPWM7=PCAPWM0&(~(P7RS0|P7RS1));SFRPI=0	
#define PCA_CH7_SetPWM_10Bit()					SFRPI=1;PCAPWM7=(PCAPWM0&(~(P7RS0|P7RS1)))|(P7RS0);SFRPI=0	
#define PCA_CH7_SetPWM_12Bit()					SFRPI=1;PCAPWM7=(PCAPWM0&(~(P7RS0|P7RS1)))|(P7RS1);SFRPI=0	
#define PCA_CH7_SetPWM_16Bit()					SFRPI=1;PCAPWM7=PCAPWM0|((P7RS0|P7RS1));SFRPI=0	

// PCA Channel value
#define PCA_CH0_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3
#define PCA_CH4_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM4=PCAPWM4|0x03;}else{CCAP4L=y;CCAP4H=x;PCAPWM4=PCAPWM4&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 4 4,5
#define PCA_CH5_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);if((x==0)&&(y==0)){PCAPWM5=PCAPWM5|0x03;}else{CCAP5L=y;CCAP5H=x;PCAPWM5=PCAPWM5&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 5 4,5
#define PCA_CH6_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x==0)&&(y==0)){PCAPWM6=PCAPWM6|0x03;}else{CCAP6L=y;CCAP6H=x;PCAPWM6=PCAPWM6&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 6 
#define PCA_CH7_SetValue(x,y)					AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x==0)&&(y==0)){PCAPWM7=PCAPWM7|0x03;}else{CCAP7L=y;CCAP7H=x;PCAPWM7=PCAPWM7&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 7 

#define PCA_CH0_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3
#define PCA_CH4_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM4=PCAPWM4|0x03;}else{CCAP4L=y;CCAP4H=x;PCAPWM4=PCAPWM4&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 4 4,5
#define PCA_CH5_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x10)){PCAPWM5=PCAPWM5|0x03;}else{CCAP5L=y;CCAP5H=x;PCAPWM5=PCAPWM5&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 5 4,5
#define PCA_CH6_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x>=0x10)){PCAPWM6=PCAPWM6|0x03;}else{CCAP6L=y;CCAP6H=x;PCAPWM6=PCAPWM6&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 6 
#define PCA_CH7_SetValue_12Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x>=0x10)){PCAPWM7=PCAPWM7|0x03;}else{CCAP7L=y;CCAP7H=x;PCAPWM7=PCAPWM7&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 7 

#define PCA_CH0_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM0=PCAPWM0|0x03;}else{CCAP0L=y;CCAP0H=x;PCAPWM0=PCAPWM0&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 0 0,1
#define PCA_CH1_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM1=PCAPWM1|0x03;}else{CCAP1L=y;CCAP1H=x;PCAPWM1=PCAPWM1&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 1 0,1
#define PCA_CH2_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM2=PCAPWM2|0x03;}else{CCAP2L=y;CCAP2H=x;PCAPWM2=PCAPWM2&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 2 2,3
#define PCA_CH3_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM3=PCAPWM3|0x03;}else{CCAP3L=y;CCAP3H=x;PCAPWM3=PCAPWM3&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 3 2,3
#define PCA_CH4_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM4=PCAPWM4|0x03;}else{CCAP4L=y;CCAP4H=x;PCAPWM4=PCAPWM4&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 4 4,5
#define PCA_CH5_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x>=0x04)){PCAPWM5=PCAPWM5|0x03;}else{CCAP5L=y;CCAP5H=x;PCAPWM5=PCAPWM5&(~0x03);};AUXR2=AUXR2&(~C0PLK)		// 5 4,5
#define PCA_CH6_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x>=0x04)){PCAPWM6=PCAPWM6|0x03;}else{CCAP6L=y;CCAP6H=x;PCAPWM6=PCAPWM6&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 6 
#define PCA_CH7_SetValue_10Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x>=0x04)){PCAPWM7=PCAPWM7|0x03;}else{CCAP7L=y;CCAP7H=x;PCAPWM7=PCAPWM7&(~0x03);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 7 

#define PCA_CH0_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM0=PCAPWM0|0x02;}else{CCAP0H=y;PCAPWM0=PCAPWM0&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 0 
#define PCA_CH1_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM1=PCAPWM1|0x02;}else{CCAP1H=y;PCAPWM1=PCAPWM1&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 1 
#define PCA_CH2_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM2=PCAPWM2|0x02;}else{CCAP2H=y;PCAPWM2=PCAPWM2&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 2 
#define PCA_CH3_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM3=PCAPWM3|0x02;}else{CCAP3H=y;PCAPWM3=PCAPWM3&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 3 
#define PCA_CH4_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM4=PCAPWM4|0x02;}else{CCAP4H=y;PCAPWM4=PCAPWM4&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 4 
#define PCA_CH5_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);if((x!=0)){PCAPWM5=PCAPWM5|0x02;}else{CCAP5H=y;PCAPWM5=PCAPWM5&(~0x02);};AUXR2=AUXR2&(~C0PLK)		// 5 
#define PCA_CH6_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x!=0)){PCAPWM6=PCAPWM6|0x02;}else{CCAP6H=y;PCAPWM6=PCAPWM6&(~0x02);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 6 
#define PCA_CH7_SetValue_8Bit(x,y)				AUXR2=AUXR2|(C0PLK);SFRPI=1;if((x!=0)){PCAPWM7=PCAPWM7|0x02;}else{CCAP7H=y;PCAPWM7=PCAPWM7&(~0x02);};SFRPI=0;AUXR2=AUXR2&(~C0PLK)		// 7 



#define PCA_CH0_SetValue_L(x)					CCAP0L=x                        // 0
#define PCA_CH1_SetValue_L(x)					CCAP1L=x                        // 1
#define PCA_CH2_SetValue_L(x)					CCAP2L=x                        // 2
#define PCA_CH3_SetValue_L(x)					CCAP3L=x                        // 3
#define PCA_CH4_SetValue_L(x)					CCAP4L=x                        // 4
#define PCA_CH5_SetValue_L(x)					CCAP5L=x                        // 5
#define PCA_CH6_SetValue_L(x)					SFRPI=1;CCAP6L=x;SFRPI=0		// 6 
#define PCA_CH7_SetValue_L(x)					SFRPI=1;CCAP7L=x;SFRPI=0		// 7 

#define PCA_CH0_SetValue_H(x)					CCAP0H=x						// 0
#define PCA_CH1_SetValue_H(x)					CCAP1H=x                        // 1
#define PCA_CH2_SetValue_H(x)					CCAP2H=x                        // 2
#define PCA_CH3_SetValue_H(x)					CCAP3H=x                        // 3
#define PCA_CH4_SetValue_H(x)					CCAP4H=x                        // 4
#define PCA_CH5_SetValue_H(x)					CCAP5H=x                        // 5
#define PCA_CH6_SetValue_H(x)					SFRPI=1;CCAP6H=x;SFRPI=0		// 6 
#define PCA_CH7_SetValue_H(x)					SFRPI=1;CCAP7H=x;SFRPI=0		// 7 

#define PCA_CH0_SetValue_9thBit_L_0()			PCAPWM0=PCAPWM0&(~0x01)        	// 0
#define PCA_CH1_SetValue_9thBit_L_0()			PCAPWM1=PCAPWM1&(~0x01)         // 1
#define PCA_CH2_SetValue_9thBit_L_0()			PCAPWM2=PCAPWM2&(~0x01)         // 2
#define PCA_CH3_SetValue_9thBit_L_0()			PCAPWM3=PCAPWM3&(~0x01)         // 3
#define PCA_CH4_SetValue_9thBit_L_0()			PCAPWM4=PCAPWM4&(~0x01)         // 4
#define PCA_CH5_SetValue_9thBit_L_0()			PCAPWM5=PCAPWM5&(~0x01)         // 5
#define PCA_CH6_SetValue_9thBit_L_0()			SFRPI=1;PCAPWM6=PCAPWM6&(~0x01);SFRPI=0		// 6 
#define PCA_CH7_SetValue_9thBit_L_0()			SFRPI=1;PCAPWM7=PCAPWM7&(~0x01);SFRPI=0		// 7 
#define PCA_CH0_SetValue_9thBit_L_1()			PCAPWM0=PCAPWM0|(0x01)        	// 0             
#define PCA_CH1_SetValue_9thBit_L_1()			PCAPWM1=PCAPWM1|(0x01)         // 1             
#define PCA_CH2_SetValue_9thBit_L_1()			PCAPWM2=PCAPWM2|(0x01)         // 2             
#define PCA_CH3_SetValue_9thBit_L_1()			PCAPWM3=PCAPWM3|(0x01)         // 3             
#define PCA_CH4_SetValue_9thBit_L_1()			PCAPWM4=PCAPWM4|(0x01)         // 4             
#define PCA_CH5_SetValue_9thBit_L_1()			PCAPWM5=PCAPWM5|(0x01)         // 5             
#define PCA_CH6_SetValue_9thBit_L_1()			SFRPI=1;PCAPWM6=PCAPWM6|(0x01);SFRPI=0		// 6 
#define PCA_CH7_SetValue_9thBit_L_1()			SFRPI=1;PCAPWM7=PCAPWM7|(0x01);SFRPI=0		// 7 

#define PCA_CH0_SetValue_9thBit_H_0()			PCAPWM0=PCAPWM0&(~0x02)        	// 0             
#define PCA_CH1_SetValue_9thBit_H_0()			PCAPWM1=PCAPWM1&(~0x02)         // 1             
#define PCA_CH2_SetValue_9thBit_H_0()			PCAPWM2=PCAPWM2&(~0x02)         // 2             
#define PCA_CH3_SetValue_9thBit_H_0()			PCAPWM3=PCAPWM3&(~0x02)         // 3             
#define PCA_CH4_SetValue_9thBit_H_0()			PCAPWM4=PCAPWM4&(~0x02)         // 4             
#define PCA_CH5_SetValue_9thBit_H_0()			PCAPWM5=PCAPWM5&(~0x02)         // 5             
#define PCA_CH6_SetValue_9thBit_H_0()			SFRPI=1;PCAPWM6=PCAPWM6&(~0x02);SFRPI=0		// 6 
#define PCA_CH7_SetValue_9thBit_H_0()			SFRPI=1;PCAPWM7=PCAPWM7&(~0x02);SFRPI=0		// 7 
#define PCA_CH0_SetValue_9thBit_H_1()			PCAPWM0=PCAPWM0|(0x02)        	// 0             
#define PCA_CH1_SetValue_9thBit_H_1()			PCAPWM1=PCAPWM1|(0x02)         // 1              
#define PCA_CH2_SetValue_9thBit_H_1()			PCAPWM2=PCAPWM2|(0x02)         // 2              
#define PCA_CH3_SetValue_9thBit_H_1()			PCAPWM3=PCAPWM3|(0x02)         // 3              
#define PCA_CH4_SetValue_9thBit_H_1()			PCAPWM4=PCAPWM4|(0x02)         // 4              
#define PCA_CH5_SetValue_9thBit_H_1()			PCAPWM5=PCAPWM5|(0x02)         // 5              
#define PCA_CH6_SetValue_9thBit_H_1()			SFRPI=1;PCAPWM6=PCAPWM6|(0x02);SFRPI=0		// 6 
#define PCA_CH7_SetValue_9thBit_H_1()			SFRPI=1;PCAPWM7=PCAPWM7|(0x02);SFRPI=0		// 7 

// PCA Invert
#define PCA_CH0_SetPWM_EnInvert()				PCAPWM0=PCAPWM0|P0INV
#define PCA_CH1_SetPWM_EnInvert()				PCAPWM1=PCAPWM1|P1INV
#define PCA_CH2_SetPWM_EnInvert()				PCAPWM2=PCAPWM2|P2INV
#define PCA_CH3_SetPWM_EnInvert()				PCAPWM3=PCAPWM3|P3INV
#define PCA_CH4_SetPWM_EnInvert()				PCAPWM4=PCAPWM4|P4INV
#define PCA_CH5_SetPWM_EnInvert()				PCAPWM5=PCAPWM5|P5INV
#define PCA_CH6_SetPWM_EnInvert()				SFRPI=1;PCAPWM6=PCAPWM6|P6INV;SFRPI=0	
#define PCA_CH7_SetPWM_EnInvert()				SFRPI=1;PCAPWM7=PCAPWM7|P7INV;SFRPI=0	

#define PCA_CH0_SetPWM_DisInvert()				PCAPWM0=PCAPWM0&(~(P0INV))
#define PCA_CH1_SetPWM_DisInvert()				PCAPWM1=PCAPWM1&(~(P1INV))
#define PCA_CH2_SetPWM_DisInvert()				PCAPWM2=PCAPWM2&(~(P2INV))
#define PCA_CH3_SetPWM_DisInvert()				PCAPWM3=PCAPWM3&(~(P3INV))
#define PCA_CH4_SetPWM_DisInvert()				PCAPWM4=PCAPWM4&(~(P4INV))
#define PCA_CH5_SetPWM_DisInvert()				PCAPWM5=PCAPWM5&(~(P5INV))
#define PCA_CH6_SetPWM_DisInvert()				SFRPI=1;PCAPWM6=PCAPWM6&(~(P6INV));SFRPI=0	
#define PCA_CH7_SetPWM_DisInvert()				SFRPI=1;PCAPWM7=PCAPWM7&(~(P7INV));SFRPI=0	

// PCA Output Enable/Disable
#define PCA_SetPWM0_EnOutput()					PAOE=PAOE|(POE0)
#define PCA_SetPWM1_EnOutput()					PAOE=PAOE|(POE1)
#define PCA_SetPWM2_EnOutput()					PAOE=PAOE|(POE2)
#define PCA_SetPWM3_EnOutput()					PAOE=PAOE|(POE3)
#define PCA_SetPWM0_2nd_EnOutput()				PAOE=PAOE|(POE0A)
#define PCA_SetPWM0_3rd_EnOutput()				PAOE=PAOE|(POE0B)
#define PCA_SetPWM2_2nd_EnOutput()				PAOE=PAOE|(POE2A)
#define PCA_SetPWM2_3rd_EnOutput()				PAOE=PAOE|(POE2B)
#define PCA_SetPWM4_EnOutput()					SFRPI=4;AUXR7=AUXR7|(POE4);SFRPI=0
#define PCA_SetPWM5_EnOutput()					SFRPI=4;AUXR7=AUXR7|(POE5);SFRPI=0
#define PCA_SetPWM6_EnOutput()					SFRPI=5;AUXR8=AUXR8|(POE6);SFRPI=0
#define PCA_SetPWM7_EnOutput()					SFRPI=5;AUXR8=AUXR8|(POE7);SFRPI=0

#define PCA_SetPWM0_DisOutput()					PAOE=PAOE&(~POE0)
#define PCA_SetPWM1_DisOutput()					PAOE=PAOE&(~POE1)
#define PCA_SetPWM2_DisOutput()					PAOE=PAOE&(~POE2)
#define PCA_SetPWM3_DisOutput()					PAOE=PAOE&(~POE3)
#define PCA_SetPWM0_2nd_DisOutput()				PAOE=PAOE&(~POE0A)
#define PCA_SetPWM0_3rd_DisOutput()				PAOE=PAOE&(~POE0B)
#define PCA_SetPWM2_2nd_DisOutput()				PAOE=PAOE&(~POE2A)
#define PCA_SetPWM2_3rd_DisOutput()				PAOE=PAOE&(~POE2B)
#define PCA_SetPWM4_DisOutput()					SFRPI=4;AUXR7=AUXR7&(~POE4);SFRPI=0
#define PCA_SetPWM5_DisOutput()					SFRPI=4;AUXR7=AUXR7&(~POE5);SFRPI=0
#define PCA_SetPWM6_DisOutput()					SFRPI=5;AUXR8=AUXR8&(~POE6);SFRPI=0
#define PCA_SetPWM7_DisOutput()					SFRPI=5;AUXR8=AUXR8&(~POE7);SFRPI=0

// PCA Buffer mode En/Dis
#define PCA_CH01_SetPWM_EnBufferMode()				CMOD=CMOD|BME0
#define PCA_CH23_SetPWM_EnBufferMode()				CMOD=CMOD|BME2
#define PCA_CH45_SetPWM_EnBufferMode()				CMOD=CMOD|BME4
#define PCA_CH67_SetPWM_EnBufferMode()				SFRPI=1;CCAPM6=CCAPM6|BME6;SFRPI=0
#define PCA_CH01_SetPWM_DisBufferMode()				CMOD=CMOD&(~(BME0))
#define PCA_CH23_SetPWM_DisBufferMode()				CMOD=CMOD&(~(BME2))
#define PCA_CH45_SetPWM_DisBufferMode()				CMOD=CMOD&(~(BME4))
#define PCA_CH67_SetPWM_DisBufferMode()				SFRPI=1;CCAPM6=CCAPM6&(~(BME6));SFRPI=0

// PCA Dead-Time En/Dis
#define PCA_CH01_SetPWM_EnDeadTime()				CCAPM0=CCAPM0|DTE0
#define PCA_CH23_SetPWM_EnDeadTime()				CCAPM2=CCAPM2|DTE2
#define PCA_CH45_SetPWM_EnDeadTime()				CCAPM4=CCAPM4|DTE4
#define PCA_CH01_SetPWM_DisDeadTime()				CCAPM0=CCAPM0&(~(DTE0))
#define PCA_CH23_SetPWM_DisDeadTime()				CCAPM2=CCAPM2&(~(DTE2))
#define PCA_CH45_SetPWM_DisDeadTime()				CCAPM4=CCAPM4&(~(DTE4))

// PCA Dead-Time prescaler
#define PCA_SetDeadTimePreScaler_Sysclk()		SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)));SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv2()	SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)))|(DTPS0);SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv4()	SFRPI=1;PDTCRA=(PDTCRA&(~(DTPS1|DTPS0)))|(DTPS1);SFRPI=0
#define PCA_SetDeadTimePreScaler_SysclkDiv8()	SFRPI=1;PDTCRA=(PDTCRA|((DTPS1|DTPS0)));SFRPI=0

// PCA Dead-Time period  PreScaler*(x) 0:no, 1~63:PreScaler*(1~63)
#define PCA_SetDeadTimePeriod(x)				SFRPI=1;PDTCRA=(PDTCRA&((DTPS1|DTPS0)))|x;SFRPI=0

// PCA Duty Reload En/Dis 
#define PCA_EnPCAReload()					AUXR2=AUXR2&(~C0PLK)
#define PCA_DisPCAReload()					AUXR2=AUXR2|(C0PLK)

// PCA Interrupt En/Dis

#define PCA_CF_EnInterrupt()				CMOD=CMOD|ECF
#define PCA_CF_DisInterrupt()				CMOD=CMOD&(~(ECF))

#define PCA_CH0_EnInterrupt()				CCAPM0=CCAPM0|ECCF0
#define PCA_CH1_EnInterrupt()				CCAPM1=CCAPM1|ECCF1
#define PCA_CH2_EnInterrupt()				CCAPM2=CCAPM2|ECCF2
#define PCA_CH3_EnInterrupt()				CCAPM3=CCAPM3|ECCF3
#define PCA_CH4_EnInterrupt()				CCAPM4=CCAPM4|ECCF4
#define PCA_CH5_EnInterrupt()				CCAPM5=CCAPM5|ECCF5
#define PCA_CH6_EnInterrupt()				SFRPI=1;CCAPM6=CCAPM6|ECCF6;SFRPI=0	
#define PCA_CH7_EnInterrupt()				SFRPI=1;CCAPM7=CCAPM7|ECCF7;SFRPI=0	

#define PCA_CH0_DisInterrupt()				CCAPM0=CCAPM0&(~(ECCF0))
#define PCA_CH1_DisInterrupt()				CCAPM1=CCAPM1&(~(ECCF1))
#define PCA_CH2_DisInterrupt()				CCAPM2=CCAPM2&(~(ECCF2))
#define PCA_CH3_DisInterrupt()				CCAPM3=CCAPM3&(~(ECCF3))
#define PCA_CH4_DisInterrupt()				CCAPM4=CCAPM4&(~(ECCF4))
#define PCA_CH5_DisInterrupt()				CCAPM5=CCAPM5&(~(ECCF5))
#define PCA_CH6_DisInterrupt()				SFRPI=1;CCAPM6=CCAPM6&(~(ECCF6));SFRPI=0	
#define PCA_CH7_DisInterrupt()				SFRPI=1;CCAPM7=CCAPM7&(~(ECCF7));SFRPI=0	

// PCA Align
#define PCA_SetPWM_EdgeAligned()			PWMCR=PWMCR&(~PCAE)
#define PCA_SetPWM_CenterAligned()			PWMCR=PWMCR|(PCAE)

// PCA Variable resolution on Central Aligh PWM
#define PCA_SetCenterAligned_DisVar()			SFRPI=8;AUXR11=AUXR11&(~C0M0);SFRPI=0
#define PCA_SetCenterAligned_EnVar()			SFRPI=8;AUXR11=AUXR11|(C0M0);SFRPI=0

// PCA CF is set on the top/bottom central aligned PWM cycle
#define PCA_SetCenterAligned_CFonTop()			SFRPI=8;AUXR11=AUXR11&(~C0OFS);SFRPI=0
#define PCA_SetCenterAligned_CFonBottom()		SFRPI=8;AUXR11=AUXR11|(C0OFS);SFRPI=0

// PCA IO Port
#define PCA_SetPCA0ClockOut_P47()			SFRPI=2;AUXR5=AUXR5&(~C0COPS);SFRPI=0
#define PCA_SetPCA0ClockOut_P33()			SFRPI=2;AUXR5=AUXR5|(C0COPS);SFRPI=0

#define PCA_SetPCA0ECIPort_P44()			SFRPI=2;AUXR5=AUXR5&(~ECIPS0);SFRPI=0
#define PCA_SetPCA0ECIPort_P16()			SFRPI=2;AUXR5=AUXR5|(ECIPS0);SFRPI=0

#define PCA_SetCEX0CEX2CEX4_P22P24P17()		SFRPI=2;AUXR5=AUXR5&(~C0PS0);SFRPI=0
#define PCA_SetCEX0CEX2CEX4_P30P24P31()		SFRPI=2;AUXR5=AUXR5|(C0PS0);SFRPI=0

#define PCA_SetPWM0APWM0B_P16P17()			SFRPI=2;AUXR5=AUXR5&(~C0PPS0);SFRPI=0
#define PCA_SetPWM0APWM0B_P60P61()			SFRPI=2;AUXR5=AUXR5|(C0PPS0);SFRPI=0

#define PCA_SetPWM2APWM2B_P60P61()			SFRPI=2;AUXR5=AUXR5&(~C0PPS1);SFRPI=0
#define PCA_SetPWM2APWM2B_P34P35()			SFRPI=2;AUXR5=AUXR5|(C0PPS1);SFRPI=0

#define PCA_SetCEX2InputPort_CEX2()			SFRPI=2;AUXR5=AUXR5&(~C0IC2S0);SFRPI=0
#define PCA_SetCEX2InputPort_T3EXI()		SFRPI=2;AUXR5=AUXR5|(C0IC2S0);SFRPI=0

#define PCA_SetCEX4InputPort_CEX4()			SFRPI=2;AUXR5=AUXR5&(~C0IC4S0);SFRPI=0
#define PCA_SetCEX4InputPort_T2EXI()		SFRPI=2;AUXR5=AUXR5|(C0IC4S0);SFRPI=0

#define PCA_SetPWM6PWM7_P60P61()			SFRPI=5;AUXR8=AUXR8&(~(C0PPS2));SFRPI=0
#define PCA_SetPWM6PWM7_P30P31()			SFRPI=5;AUXR8=AUXR8|((C0PPS2));SFRPI=0

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  WDT 
*
*************************************************************************************
*/
#define WDT_SetClock_32K_DIV_1_16ms()		WDTCR=(WDTCR&(~0x07))
#define WDT_SetClock_32K_DIV_2_32ms()		WDTCR=(WDTCR&(~0x07))|0x01	
#define WDT_SetClock_32K_DIV_4_64ms()		WDTCR=(WDTCR&(~0x07))|0x02
#define WDT_SetClock_32K_DIV_8_128ms()		WDTCR=(WDTCR&(~0x07))|0x03
#define WDT_SetClock_32K_DIV_16_256ms()		WDTCR=(WDTCR&(~0x07))|0x04
#define WDT_SetClock_32K_DIV_32_512ms()		WDTCR=(WDTCR&(~0x07))|0x05
#define WDT_SetClock_32K_DIV_64_1024ms()	WDTCR=(WDTCR&(~0x07))|0x06
#define WDT_SetClock_32K_DIV_128_2048ms()	WDTCR=(WDTCR|(0x07))

#define WDT_EnReset()		WDTCR|=WREN
#define WDT_Enable_OnPD()	WDTCR|=NSW
#define WDT_Enable_OnIDLE()	WDTCR|=WIDL
#define WDT_Clear()			WDTCR|=CLRW
#define WDT_Enable()		WDTCR|=ENW

#define CLRWDT()	WDTCR|=CLRW
#define ENWDT()		WDTCR|=ENW
/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  RTC  
*
*************************************************************************************
*/
// RTC Enable/Disable
#define RTC_Enable()			RTCCR=RTCCR|RTCE
#define RTC_Disable()			RTCCR=RTCCR&(~RTCE)

// RTC RTCKO output on P4.5 
#define RTC_EnRTCO_OutP45()			RTCCR=RTCCR|RTCO
#define RTC_DisRTCO_OutP45()		RTCCR=RTCCR&(~RTCO)

// RTC reload x=0~63 
#define RTC_SetReload(x)		RTCCR=(RTCCR&(0xC0))|(x)

// RTC  value x=0~63
#define RTC_SetCounter(x)		RTCTM=(RTCTM&(0xC0))|(x)

// RTC clock selection x=0~15 2^15~2^0
#define RTC_SetClock_Div_1()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_2()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_4()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_8()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1|BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_16()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_32()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_64()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_128()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT1);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_256()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_512()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_1024()		RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_2048()		RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC))|(BIT0);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_4096()		RTCTM=(RTCTM&(0x3F))|(BIT7|BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_8192()		RTCTM=(RTCTM&(0x3F))|(BIT7);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_16384()	RTCTM=(RTCTM&(0x3F))|(BIT6);ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_Div_32768()	RTCTM=(RTCTM&(0x3F));ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0xFC));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// RTC clock source
#define RTC_SetClock_ECKI_P60()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F));IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_ILRCO()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_WDTPS()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS1_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_WDTOF()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS1_P|RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_SYSCLK()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS2_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0
#define RTC_SetClock_SYSCLKDiv12()		ISPCR=0x80;IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_READ_P;SCMD=0x46;SCMD=0xB9;_nop_();IFD=(IFD&(0x1F))|(RCSS2_P|RCSS0_P);IFADRH=0x0;IFADRL=CKCON4_P;IFMT=ISP_WRITE_P;SCMD=0x46;SCMD=0xB9;_nop_();IFMT=0;ISPCR=0x0

// RTC clear RTCF
#define RTC_ClearRTCF()			PCON1=RTCF

// RTC interrupt En/Dis
#define RTC_EnInterrupt()			SFIE=SFIE|RTCFIE
#define RTC_DisInterrupt()			SFIE=SFIE&(~RTCFIE)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  SID  I2C START/STOP Detect
*
*************************************************************************************
*/

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  BEEPER  
*
*************************************************************************************
*/
// BEEPER IO Port
#define BEEP_SetP44_IOPort()						AUXR3=AUXR3&(~(BPOC0|BPOC1))
#define BEEP_SetP44_OutILRCODiv32_1KHz()			AUXR3=(AUXR3&(~(BPOC0|BPOC1)))|(BPOC0)
#define BEEP_SetP44_OutILRCODiv16_2KHz()			AUXR3=(AUXR3&(~(BPOC0|BPOC1)))|(BPOC1)
#define BEEP_SetP44_OutILRCODiv8_4KHz()				AUXR3=AUXR3|((BPOC0|BPOC1))

/*
*************************************************************************************
*/ 


/*
*************************************************************************************
*  KBI  
*
*************************************************************************************
*/
// KBI IO Port
#define KBI_SetKBI01P10P11()				SFRPI=5;AUXR8=AUXR8&(~(KBI0PS0));SFRPI=0
#define KBI_SetKBI01P47P33()				SFRPI=5;AUXR8=AUXR8|((KBI0PS0));SFRPI=0

#define KBI_SetKBI23P30P31()				SFRPI=3;AUXR6=AUXR6&(~(KBI2PS0));SFRPI=0
#define KBI_SetKBI23P22P24()				SFRPI=3;AUXR6=AUXR6|((KBI2PS0));SFRPI=0

#define KBI_SetKBI45P33P15()				SFRPI=3;AUXR6=AUXR6&(~(KBI4PS0|KBI4PS1));SFRPI=0
#define KBI_SetKBI45P34P35()				SFRPI=3;AUXR6=(AUXR6&(~(KBI4PS0|KBI4PS1)))|(KBI4PS0);SFRPI=0
#define KBI_SetKBI45P60P61()				SFRPI=3;AUXR6=(AUXR6&(~(KBI4PS0|KBI4PS1)))|(KBI4PS1);SFRPI=0
#define KBI_SetKBI45P15P33()				SFRPI=3;AUXR6=AUXR6|((KBI4PS0|KBI4PS1));SFRPI=0

#define KBI_SetKBI67P16P17()				SFRPI=3;AUXR6=AUXR6&(~(KBI6PS0));SFRPI=0
#define KBI_SetKBI67P30P31()				SFRPI=3;AUXR6=AUXR6|((KBI6PS0));SFRPI=0

// KBI Pattern
#define KBI0_1	0x01
#define KBI1_1	0x02
#define KBI2_1	0x04
#define KBI3_1	0x08
#define KBI4_1	0x10
#define KBI5_1	0x20
#define KBI6_1	0x40
#define KBI7_1	0x80
#define KBI0_0	0x00
#define KBI1_0	0x00
#define KBI2_0	0x00
#define KBI3_0	0x00
#define KBI4_0	0x00
#define KBI5_0	0x00
#define KBI6_0	0x00
#define KBI7_0	0x00
#define KBI_SetKBPattern(x)					KBPATN=x

// KBI Mask
#define KBI0	0x01
#define KBI1	0x02
#define KBI2	0x04
#define KBI3	0x08
#define KBI4	0x10
#define KBI5	0x20
#define KBI6	0x40
#define KBI7	0x80
#define KBI_SetKBMask(x)					KBMASK=x

// KBI Clear flag
#define KBI_ClrITFlag()						KBCON=KBCON&(~KBIF)

// KBI Detect Edge/Level
#define KBI_SetDetectLevel()				KBCON=KBCON&(~KBES)
#define KBI_SetDetectEdge()					KBCON=KBCON|(KBES)

// KBI Pattern not-equal/equal
#define KBI_SetPatternNotEqual()			KBCON=KBCON&(~PATN_SEL)
#define KBI_SetPatternEqual()				KBCON=KBCON|(PATN_SEL)

// KBI Filter
#define KBI_SetFilter_Disable()				KBCON=KBCON&(~(KBCS0|KBCS1))
#define KBI_SetFilter_Sysclk_x3()			KBCON=(KBCON&(~(KBCS0|KBCS1)))|(KBCS0)
#define KBI_SetFilter_SysclkDiv6_x3()		KBCON=(KBCON&(~(KBCS0|KBCS1)))|(KBCS1)
#define KBI_SetFilter_S0TOF_x3()			KBCON=KBCON|((KBCS0|KBCS1))
/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  DMA
*
*************************************************************************************
*/
// DMA Enable/Disable
#define DMA_Enable()			DMACR0=DMACR0|DMAE0
#define DMA_Disable()			DMACR0=DMACR0&(~DMAE0)

// DMA Start/Suspend
#define DMA_Start()				DMACR0=DMACR0|DMAS0
#define DMA_Suspend()			DMACR0=DMACR0&(~DMAS0)

// DMA DCF0 interrupt
#define DMA_EnDCF0Int()			DMACR0=DMACR0|DIE0
#define DMA_DisDCF0Int()		DMACR0=DMACR0&(~DIE0)

// DMA Copy to CRC16
#define DMA_EnCopy2CRC16()		SFRPI=8;DMACG0=DMACG0|CRCW0;SFRPI=0
#define DMA_DisCopy2CRC16()		SFRPI=8;DMACG0=DMACG0&(~CRCW0);SFRPI=0

// DMA trigger source
#define DMA_SetTrig_Software()		SFRPI=8;DMACG0=DMACG0&(~(EXTS00|EXTS10));SFRPI=0
#define DMA_SetTrig_INT2ET()		SFRPI=8;DMACG0=(DMACG0&(~(EXTS00|EXTS10)))|(EXTS00);SFRPI=0
#define DMA_SetTrig_KBIET()			SFRPI=8;DMACG0=DMACG0|(EXTS00|EXTS10);SFRPI=0

// DMA Loop En/Dis
#define DMA_EnLoop()				SFRPI=8;DMACG0=DMACG0|LOOP0;SFRPI=0
#define DMA_DisLoop()				SFRPI=8;DMACG0=DMACG0&(~LOOP0);SFRPI=0

// DMA Source and Destination
#define DMA_SetSource_S0RX()		SFRPI=9;DMADS0=(DMADS0&(0x0F))|(DSS00);SFRPI=0
#define DMA_SetSource_S1RX()		SFRPI=9;DMADS0=(DMADS0&(0x0F))|(DSS10);SFRPI=0
#define DMA_SetSource_TWI0RX()		SFRPI=9;DMADS0=(DMADS0&(0x0F))|(DSS20|DSS00);SFRPI=0
#define DMA_SetSource_SPI0RX()		SFRPI=9;DMADS0=(DMADS0&(0x0F))|(DSS20|DSS10|DSS00);SFRPI=0
#define DMA_SetSource_ADC0()		SFRPI=9;DMADS0=(DMADS0&(0x0F))|(DSS30|DSS00);SFRPI=0
#define DMA_SetSource_XRAM()		SFRPI=9;DMADS0=DMADS0|(0xF0);SFRPI=0
#define DMA_SetDestination_S0TX()		SFRPI=9;DMADS0=(DMADS0&(0xF0))|(DDS00);SFRPI=0
#define DMA_SetDestination_S1TX()		SFRPI=9;DMADS0=(DMADS0&(0xF0))|(DDS10);SFRPI=0
#define DMA_SetDestination_TWI0TX()		SFRPI=9;DMADS0=(DMADS0&(0xF0))|(DDS20|DDS00);SFRPI=0
#define DMA_SetDestination_SPI0TX()		SFRPI=9;DMADS0=(DMADS0&(0xF0))|(DDS20|DDS10|DDS00);SFRPI=0
#define DMA_SetDestination_CRC()		SFRPI=9;DMADS0=(DMADS0&(0xF0))|(DDS30|DDS20|DDS00);SFRPI=0
#define DMA_SetDestination_XRAM()		SFRPI=9;DMADS0=DMADS0|(0x0F);SFRPI=0

// DMA XRAM Start address
#define DMA_SetXRAMStartaddr(x)		SFRPI=4;TL6=(x)&0xFF;TH6=(x)>>8;SFRPI=0
// DMA XRAM Start address reload
#define DMA_SetXRAMStartaddrRL(x)	SFRPI=4;TLR6=(x)&0xFF;THR6=(x)>>8;SFRPI=0

// DMA counter
#define DMA_SetCount(x)				SFRPI=3;TL5=(x)&0xFF;TH5=(x)>>8;SFRPI=0
// DMA counter reload
#define DMA_SetCountRL(x)			SFRPI=3;TLR5=(x)&0xFF;THR5=(x)>>8;SFRPI=0

// DMA Check/Clear DCF0(DMA Complete Flag)
#define DMA_ClearCompleteFlag()		DMACR0=DMACR0&(~DCF0)
#define DMA_ChkCompleteFlag()		(DMACR0&DCF0)

/*
*************************************************************************************
*/ 

/*
*************************************************************************************
*  GPL General Purpose Logic
*
*************************************************************************************
*/
// GPL BOREV 
#define GPL_BOREV(x)						BOREV=x;x=BOREV

// GPL CRC

#define GPL_CRC_CRC0DA_DataIn()				AUXR1=(CRCDS0|CRCDS1)

#define GPL_CRC_WriteCRCSeedL(x)			AUXR1=AUXR1&(~(CRCDS0|CRCDS1));CRC0DA=x
#define GPL_CRC_WriteCRCSeedH(x)			AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0);CRC0DA=x
#define GPL_CRC_WriteCRCData(x)				AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0|CRCDS1);CRC0DA=x
#define GPL_CRC_ReadCRCResultL(x)			AUXR1=AUXR1&(~(CRCDS0|CRCDS1));x=CRC0DA
#define GPL_CRC_ReadCRCResultH(x)			AUXR1=(AUXR1&(~(CRCDS0|CRCDS1)))|(CRCDS0);x=CRC0DA


/*
*************************************************************************************
*/ 



/*
*************************************************************************************
*  POWER Management
*
*************************************************************************************
*/
#define POW_BOD1_Enable_OnPD		BIT7
#define POW_BOD1_Disable_OnPD		0x00

#define POW_BOD1_Set20V			0x00
#define POW_BOD1_Set24V			B00010000
#define POW_BOD1_Set37V			B00100000
#define POW_BOD1_Set42V			B00110000

#define POW_BOD1_Enable			BIT2
#define POW_BOD1_Disable		0x00

#define POW_BOD1_EnReset		BIT3
#define POW_BOD1_DisReset		0x00

#define POW_BOD0_EnReset		BIT1
#define POW_BOD0_DisReset		0x00

#define POW_SetMode_PD()			PCON0|=PD;

#define POW_ResetToAP()			ISPCR=SRST
#define POW_ResetToISP()		ISPCR=SWBS|SRST


/*
*************************************************************************************
*/ 


#endif



