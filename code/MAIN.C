/*********************************************************************
    Project:MG82F6D17-DEMO
    Author:LZD
			MG82F6D17 SSOP20_V10 EV Board (TH194A)
			CpuCLK=24MHz, SysCLK=48MHz
	Description:
			SPI(nSS/P33,MOSI/P15,MISO/P16,SPICLK/P17) 
			Master 
	Note:

    Creat time::
    Modify::
    
*********************************************************************/
#define _MAIN_C

#include <Intrins.h>
#include <Absacc.h>

#include <Stdio.h>  // for printf
#include <stdarg.h>
#include <string.h>
//#include <stdint.h>

#include ".\include\REG_MG82F6D17.H"
#include ".\include\Type.h"
#include ".\include\API_Macro_MG82F6D17.H"
#include ".\include\API_Uart_BRGRL_MG82F6D17.H"

#include "./BL0942/BL0942.h"

#define UART0_RX_BUFF_SIZE 32
#define UART0_TX_BUFF_SIZE 32
xdata u8 RcvBuf[UART0_RX_BUFF_SIZE];
u8 Uart0RxIn = 0;
u8 Uart0RxOut = 0;
xdata u8 TxBuf[UART0_TX_BUFF_SIZE];
u8 Uart0TxIn = 0;
u8 Uart0TxOut = 0;
bit bUart0TxFlag;

#define IAP_END_ADDRESS   0x3400
//#define SIZE_DATA         RD_SIZE_FLASH

xdata uint8_t data_flash[SIZE_DATA] = {0};
extern u8 rec_data[6];

/*************************************************
Set SysClk (MAX.50MHz) (MAX.50MHz)
Selection: 
	11059200,12000000,
	22118400,24000000,
	29491200,32000000,
	44236800,48000000
*************************************************/
#define MCU_SYSCLK		24000000

/*************************************************/
/*************************************************
set CpuClk (MAX.36MHz)
	1) CpuCLK=SysCLK
	2) CpuClk=SysClk/2
*************************************************/
#define MCU_CPUCLK		(MCU_SYSCLK)
//#define MCU_CPUCLK		(MCU_SYSCLK/2)

#define TIMER_1T_1ms_TH	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(1000000)))) /256) 			
#define TIMER_1T_1ms_TL	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(1000000)))) %256)

#define TIMER_12T_1ms_TH	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(12000000)))) /256) 			
#define TIMER_12T_1ms_TL	((65536-(u16)(float)(1000*((float)(MCU_SYSCLK)/(float)(12000000)))) %256)

#define SFR_Page_(x) SFRPI = x;

#define LED_G_0		P33
#define LED_R		P34
#define LED_G_1		P35


#define SPI_nSS		P33

#if MCU_SYSCLK == 24000000
#define RD_BAUND      S0BRG_BRGRL_115200_2X_24000000_1T     // 115200
#define RD_SPI_CLOCK  SPI_CLK_SYSCLK_32
#elif MCU_SYSCLK == 12000000
#define RD_BAUND      S0BRG_BRGRL_9600_2X_12000000_1T       //9600
#define RD_SPI_CLOCK  SPI_CLK_SYSCLK_16
#elif MCU_SYSCLK == 32000000
#define RD_BAUND      S0BRG_BRGRL_115200_2X_32000000_1T
#define RD_SPI_CLOCK  SPI_CLK_SYSCLK_32
#endif

/***********************************************************************************
Function:   void INT_SPI(void)
Description:SPI Interrupt handler
		 
Input:   
Output:     
*************************************************************************************/
void INT_SPI() interrupt INT_VECTOR_SPI
{
	BYTE i;
	i=SPDAT;				// read current SPI data
	SPSTAT = SPSTAT |SPIF;	// clear flag
	SPDAT=i+1; 				// SPI data +1£¬for next trans
}

/***********************************************************************************
Function:   	void INT_UART0(void)
Description:	UART0 Interrupt handler
Input:
Output:
*************************************************************************************/
void INT_UART0(void) interrupt INT_VECTOR_UART0
{
	_push_(SFRPI);

	SFR_Page_(0);
	if (TI0)
	{
		TI0 = 0;
		if (Uart0TxIn == Uart0TxOut)
		{
			bUart0TxFlag = FALSE;
		}
		else
		{
			S0BUF = TxBuf[Uart0TxOut];
			bUart0TxFlag = TRUE;
			Uart0TxOut++;
			if (Uart0TxOut >= UART0_TX_BUFF_SIZE)
			{
				Uart0TxOut = 0;
			}
		}
	}
	if (RI0)
	{
		RI0 = 0;
		RcvBuf[Uart0RxIn] = S0BUF;
		Uart0RxIn++;
		if (Uart0RxIn >= UART0_RX_BUFF_SIZE)
		{
			Uart0RxIn = 0;
		}
	}
	_pop_(SFRPI);
}


// u16 time_count = 0;
// u16 time_second = 0;
// u16 time_second_old = 0;
// u16 time_min = 0;
// u16 time_min_old = 0;
u16 time_system = 0;
/***********************************************************************************
Function:   	void INT_T0(void)
Description:	T0 Interrupt handler
Input:
Output:
*************************************************************************************/
void INT_T0(void) interrupt INT_VECTOR_T0  // Timer 1ms
{
	TH0 = TIMER_12T_1ms_TH;
	TL0 = TIMER_12T_1ms_TL;
	time_system++;
	// time_count++;
	// if (time_count >= 999)
	// {
	// 	time_count = 0;
	// 	time_second++;
	// }
	// if (time_second >= 59)
	// {
	// 	time_second = 0;
	// 	time_min++;
	// 	if (time_min >= 65534)
	// 		time_min = 0;
	// }
}

/***********************************************************************************
Function:		void Uart0SendByte(u8 tByte)
Description:	Uart0 send byte
Input:			u8 tByte: the data to be send
Output:
*************************************************************************************/
void Uart0SendByte(u8 tByte)
{
	u8 i;

	if (bUart0TxFlag == FALSE)
	{
		Uart0TxOut = 0;
		Uart0TxIn = 1;
		TxBuf[0] = tByte;
		TI0 = 1;
	}
	else
	{
		i = Uart0TxIn;
		TxBuf[i] = tByte;
		i++;
		if (i >= UART0_TX_BUFF_SIZE)
		{
			i = 0;
		}
		while (i == Uart0TxOut)
		{
		}
		ES0 = 0;
		Uart0TxIn = i;
		ES0 = 1;
	}
}

/***********************************************************************************
Function:		void Uart0SendStr(BYTE* PStr)
Description:	Uart0 send string
Input: 			u8* PStr:the string to be send
Output:
*************************************************************************************/
void Uart0SendStr(u8 *PStr)
{
	while (*PStr != '\0')
	{
		Uart0SendByte(*PStr);
		PStr++;
	}
}



/*************************************************
Function:     	void DelayXus(u16 xUs)
Description:   	dealy��unit:us
Input:     		u8 Us -> *1us  (1~255)
Output:     
*************************************************/
void DelayXus(u8 xUs)
{
	while(xUs!=0)
	{
#if (MCU_CPUCLK>=11059200)
		_nop_();
#endif
#if (MCU_CPUCLK>=14745600)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=16000000)
		_nop_();
#endif

#if (MCU_CPUCLK>=22118400)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=24000000)
		_nop_();
		_nop_();
#endif		
#if (MCU_CPUCLK>=29491200)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=32000000)
		_nop_();
		_nop_();
#endif

		xUs--;
	}
}

/*************************************************
Function:     	void DelayXms(u16 xMs)
Description:    dealy��unit:ms
Input:     		u16 xMs -> *1ms  (1~65535)
Output:     
*************************************************/
void DelayXms(u16 xMs)
{
	while(xMs!=0)
	{
		CLRWDT();
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		xMs--;
		
	}
}

/***********************************************************************************
Function:   	void InitPort()
Description:	Initialize IO Port
Input:   
Output:   		
*************************************************************************************/
void InitPort(void)
{
	//SPI
	PORT_SetP1PushPull(BIT5|BIT7);				// Set P15(MOSI),P17(SPICLK) as push-pull for output
	PORT_SetP1OpenDrainPu(BIT6);				// Set P16(MISO) as open-drain with pull-high for digital input
	PORT_SetP3PushPull(BIT3);					// Set P33(nSS) as push-pull for output
	//UART
	PORT_SetP3QuasiBi(BIT0 | BIT1);  // rx tx
	//Pin
	PORT_SetP3OpenDrain(BIT4); // BTN
	PORT_SetP2AInputOnly(BIT4); // ZX_BL
	PORT_SetP2PushPull(BIT2); // relay
	PORT_SetP6PushPull(BIT0 | BIT1); // led

}

/***********************************************************************************
Function:   	void InitInterrupt()
Description:	Initialize Interrupt
Input:
Output:
*************************************************************************************/
void InitInterrupt(void)
{
	INT_EnTIMER0(); // Enable Timer0 interrupt
	INT_EnUART0();	// Enable UART0 interrupt
	//INT_EnSPI();   // Enable SPI interrupt
	INT_EnAll();	// Enable global interrupt
}

/***********************************************************************************
Function:   	void InitUart0_S0BRG()
Description:	Initialize Uart0, The source of baud rate was S0BRG
Input:
Output:
*************************************************************************************/
void InitUart0_S0BRG(void)
{
	UART0_SetAccess_S0CR1();	// Enable access S0CR1
	UART0_SetMode8bitUARTVar(); // UART0 Mode: 8-bit, Variable B.R.
	UART0_EnReception();		// Enable reception
	UART0_SetBRGFromS0BRG();	// B.R. source: S0BRG
	UART0_SetS0BRGBaudRateX2(); // S0BRG x2
	UART0_SetS0BRGSelSYSCLK();	// S0BRG clock source: SYSCLK

	// Sets B.R. value
	UART0_SetS0BRGValue(RD_BAUND);  // baund 115200
	UART0_EnS0BRG(); // Enable S0BRG
}

/***********************************************************************************
Function:   	void InitTimer0()
Description:	Initialize Timer0
Input:
Output:
*************************************************************************************/

void InitTimer0(void)
{
	TM_SetT0Mode_1_16BIT_TIMER(); // TIMER0 Mode: 16-bit
	TM_SetT0Clock_SYSCLKDiv12();  // TIMER0 Clock source: SYSCLK/12
	TM_SetT0Gate_Disable();		  // TIMER0 disable gate

	TM_SetT0LowByte(TIMER_12T_1ms_TL);	// Set TL0 value
	TM_SetT0HighByte(TIMER_12T_1ms_TH); // Set TH0 value

	TM_EnableT0(); // Enable TIMER0
}


/***********************************************************************************
Function:   	void IAP_ErasePage(u8 ByteAddr)
Description:	Erase one page
Input:   		u8 ByteAddr: IAP Address High byte

Output:
*************************************************************************************/
void IAP_ErasePage(u8 ByteAddr)
{
	bit bEA = EA;
	IFADRH = ByteAddr; // IAP Address High byte
	IFADRL = 0x00;	   // must 0x00
	EA = 0;
	IFMT = ISP_ERASE; // Erase
	ISPCR = 0x80;	  // Enable ISP/IAP
					  //		CheckTrapFlag();
	SCMD = 0x46;
	//		CheckTrapFlag();
	SCMD = 0xB9;
	nop();
	IFMT = 0;
	ISPCR = 0; // clear
	EA = bEA;
}

/***********************************************************************************
Function:		void IAP_WritePPage(u8 PsfrAddr,u8 PsfrData)
Description:	write P page sfr
Input:
				u8 PsfrAddr: sfr Address
				u8 PsfrData: sfr data
Output:
*************************************************************************************/
void IAP_WritePPage(u8 PsfrAddr, u8 PsfrData)
{
	bit bEA = EA;
	EA = 0;				//
	IFADRH = 0;			// IFADRH must be 0
	IFADRL = PsfrAddr;	// sfr Address
	IFD = PsfrData;		// sfr data
	IFMT = ISP_WRITE_P; // write P page sfr
	ISPCR = 0x80;		// Enable ISP/IAP
						//	CheckTrapFlag();
	SCMD = 0x46;
	//	CheckTrapFlag();
	SCMD = 0xB9;
	nop();
	IFMT = 0;
	ISPCR = 0; // clear
	EA = bEA;
}

/***********************************************************************************
Function:   	void IAP_WriteByte(u16 ByteAddr,u8 ByteData)
Description:	write one byte to IAP
Input:   		u16 ByteAddr: IAP Address
				u8 ByteData: the data to be write
Output:
*************************************************************************************/
void IAP_WriteByte(u16 ByteAddr, u8 ByteData)
{
	bit bEA = EA;
	IFD = ByteData;			// data to be write
	IFADRH = ByteAddr >> 8; // IAP address high
	IFADRL = ByteAddr;		// IAP address low
	EA = 0;					//
	IFMT = ISP_WRITE;		// write
	ISPCR = 0x80;			// Enable ISP/IAP
							//		CheckTrapFlag();
	SCMD = 0x46;
	//		CheckTrapFlag();
	SCMD = 0xB9;
	nop();
	IFMT = 0;
	ISPCR = 0; // clear
	EA = bEA;
}

// Read IAP data by MOVC
#define IAP_ReadByteByMOVC(x) CBYTE[x]

void write_data_fash(void)
{
	u8 i = 0;
	IAP_WritePPage(IAPLB_P, IAP_END_ADDRESS / 256);
	IAP_ErasePage(IAP_END_ADDRESS / 256);
	for (i = 0; i < SIZE_DATA; i++)
	{
		IAP_WriteByte(IAP_END_ADDRESS + i, data_flash[i]);
	}
}

unsigned char read_data_flash(unsigned char j)
{
	unsigned char data_read;
	data_read = IAP_ReadByteByMOVC(IAP_END_ADDRESS + j);
	return data_read;
}

void read_all_flash(void){
	u8 i = 0;
	for (i = 0; i < SIZE_DATA; i++)
	{
		data_flash[i] = read_data_flash(i);
	}
	Read_Flash = (data_flash_t *)(&data_flash[0]);
}

/***********************************************************************************
Function:   	void InitSPI()
Description:	Initialize SPI
Input:   
Output:   		
*************************************************************************************/
void InitSPI(void)
{
	
	SPI_Enable();									// Enable SPI
	SPI_SelectMASTERByMSTRbit();					// Set to MASTER
	SPI_SetClock(RD_SPI_CLOCK);					    // Set Clock SYSCLK/32 = 24M/32= 750 KHz
	SPI_SetCPOL_0();								// CPOL=0 
	SPI_SetDataMSB();								// Data MSB
	SPI_SetCPHA_1();								// CPHA=1
	SPI_SetUseP33P15P16P17();						// IO Port: nSS/P33,MOSI/P15,MISO/P16,SPICLK/P17

}

/***********************************************************************************
Function:   	u8 SPITransceiver(u8 SPI_DATA)
Description:	SPI Master transmit 
Input:   		u8 SPI_DATA: Data to be send
Output:   		u8:  Received data
*************************************************************************************/
u8 SPITransceiver(u8 SPI_DATA)
{
	SPI_SendData(SPI_DATA);							// Send data
	while(SPI_ChkCompleteFlag()==0);				// Wait complete
	SPI_ClearCompleteFlag();						// Clear flag
	return SPI_GetData();							// Return data
}

/***********************************************************************************
Function:   	void InitClock()
Description:	Initialize clock
Input:   
Output:   		
*************************************************************************************/
void InitClock(void)
{
#if (MCU_SYSCLK==11059200)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// SysClk=11.0592MHz CpuClk=11.0592MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1);
	
#else
	// SysClk=11.0592MHz CpuClk=5.5296MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1);
#endif
#endif

#if (MCU_SYSCLK==12000000)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// SysClk=12MHz CpuClk=12MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1);
	
#else
	// SysClk=12MHz CpuClk=6MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1);
#endif
#endif

#if (MCU_SYSCLK==22118400)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// SysClk=22.1184MHz CpuClk=22.1184MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx4, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4|OSCIn_IHRCO);
#else
	// SysClk=22.1184MHz CpuClk=11.0592MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx4, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4|OSCIn_IHRCO);
#endif
#endif

#if (MCU_SYSCLK==24000000)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// SysClk=24MHz CpuClk=24MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx4, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4|OSCIn_IHRCO);
#else
	// SysClk=24MHz CpuClk=12MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx4, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4|OSCIn_IHRCO);
#endif
#endif

#if (MCU_SYSCLK==29491200)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// Cpuclk high speed
	CLK_SetCpuCLK_HighSpeed();
	// SysClk=29.491200MHz CpuClk=29.491200MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx5.33, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X533|OSCIn_IHRCO);
#else
	// SysClk=29.491200MHz CpuClk=14.7456MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx5.33, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X533|OSCIn_IHRCO);
#endif
#endif

#if (MCU_SYSCLK==32000000)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// Cpuclk high speed
	CLK_SetCpuCLK_HighSpeed();
	// SysClk=32MHz CpuClk=32MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx5.33, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X533|OSCIn_IHRCO);
#else
	// SysClk=32MHz CpuClk=16MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx5.33, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X533|OSCIn_IHRCO);
#endif
#endif

#if (MCU_SYSCLK==36000000)
#if (MCU_CPUCLK==MCU_SYSCLK)
	// Cpuclk high speed
	CLK_SetCpuCLK_HighSpeed();
	// CKMIx6,x8,x12
	CLK_SetCKM_x6x8x12();	
	// SysClk=36MHz CpuClk=18MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx6, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4_X6|OSCIn_IHRCO);
#else
	// CKMIx6,x8,x12
	CLK_SetCKM_x6x8x12();	
	// SysClk=36MHz CpuClk=18MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx6, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X4_X6|OSCIn_IHRCO);
#endif
#endif


#if (MCU_SYSCLK==44236800)
	// SysClk=44.2368MHz CpuClk=22.1184MHz
	CLK_SetCKCON0(IHRCO_110592MHz|CPUCLK_SYSCLK_DIV_1|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx8, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X8|OSCIn_IHRCO);
#endif

#if (MCU_SYSCLK==48000000)
	// SysClk=48MHz CpuClk=24MHz
	CLK_SetCKCON0(IHRCO_12MHz|CPUCLK_SYSCLK_DIV_2|SYSCLK_MCKDO_DIV_1|ENABLE_CKM|CKM_OSCIN_DIV_2);
	DelayXus(100);
	// IHRCO, MCK=CKMIx8, OSCin=IHRCO
	CLK_SetCKCON2(ENABLE_IHRCO|MCK_CKMI_X8|OSCIn_IHRCO);
#endif

	// P60 Output MCK/4
	//CLK_P60OC_MCKDiv4();
}


/***********************************************************************************
Function:       void InitSystem(void)
Description:    Initialize MCU
Input:   
Output:     
*************************************************************************************/
void InitSystem(void)
{
	InitPort();
	InitClock();
	InitSPI();
	InitTimer0();
	InitUart0_S0BRG();
	InitInterrupt();

	WDT_SetClock_32K_DIV_64_1024ms();
	WDT_EnReset(); // enable WDT reset MCU
	WDT_Enable();  // enable WDT
}

void RD_init_uart(void){
	Uart0RxIn = 0;
	Uart0RxOut = 0;
	Uart0TxIn = 0;
	Uart0TxOut = 0;
	bUart0TxFlag = 0;
}

/*
int sprintf (char *__stream, const char *__format, ...)
{
  register int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
*/
void rd_print(const char *__format, ...){
	xdata uint8_t Buff_print[32] = {0};
	char *__stream = &Buff_print[0];
	va_list __local_argv;
	va_start( __local_argv, __format );
  	vsprintf( __stream, __format, __local_argv );
  	va_end( __local_argv );
	Uart0SendStr(Buff_print);
}

//void RD_Send_Byte_SPI(u8 data_b){
		//SPI_nSS=0;			
		//SPITransceiver(data_b); 
		//SPI_nSS=1;
//}

void RD_Send_String_SPI(u8 *data_str){
	u8 i = 0;
	SPI_nSS=0;
	for(i=0; i<6; i++){
		rec_data[i] = SPITransceiver(data_str[i]);
	}
	SPI_nSS=1;
}



void main()
{
    InitSystem();
	RD_init_uart();

	//DelayXms(1000);
	rd_print("init done, size flash %u\n\n", (unsigned int)SIZE_DATA);
	rd_start_init();
	
    while(1)
    {	
		WDT_Clear();	
		
		rd_loop();

    }
}


