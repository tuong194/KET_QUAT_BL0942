#ifndef BL_0942_H_
#define BL_0942_H_

#include <Intrins.h>
#include <Absacc.h>

#include <Stdio.h>  // for printf
#include <string.h>

#include "..\include\REG_MG82F6D17.H"
#include "..\include\Type.h"
#include "..\include\API_Macro_MG82F6D17.H"
#include "..\include\API_Uart_BRGRL_MG82F6D17.H"

#define USR_WRPROT    (0x1D)
#define SOFT_RESET    (0x1C)
#define GAIN_CR       (0x1A)
#define REG_OT_FUNX   (0x18)
#define REG_WATT      (0x06)
#define REG_IRMS      (0x03)
#define REG_VRMS      (0x04)

//#define GET_DATA_SPI()		SPDAT


//extern void RD_Send_String_SPI(u8 *data_str);
//extern void rd_print(u8 *PStr);
//void RD_Write_Data(uint8_t reg_addr, uint8_t *data_w);


#endif /* BL_0942_H_ */
