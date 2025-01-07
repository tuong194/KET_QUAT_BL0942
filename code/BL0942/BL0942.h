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

#define USR_WRPROT            (0x1D)
#define SOFT_RESET            (0x1C)
#define GAIN_CR               (0x1A)
#define REG_OT_FUNX           (0x18)
#define REG_WATT              (0x06)
#define REG_IRMS              (0x03)
#define REG_VRMS              (0x04)

#define RD_LOG                1
#define RD_PIN_BTN            P34
#define RD_LED_R              P60
#define RD_LED_G              P61

//#define GET_DATA_SPI()		 SPDAT
#define RD_PRINT_HEX(x)      rd_print("0x%02X ", (unsigned int)(x))
#define ON_LED(x)            (x = 0)
#define OFF_LED(x)           (x = 1)
#define BLINK_LED(x)         ((x)=!(x))
#define RD_SIZE_FLASH        sizeof(data_bl0942)

typedef struct{
    float header;
    float U_hd;
    float I_hd;
    float I_old;
    float P_hd;
    float P_old;
    float Cos_Phi;
    u8 tail;
}data_bl0942;

extern data_bl0942 *Data_Read;

extern void DelayXms(u16 xMs);
extern void RD_Send_String_SPI(u8 *data_str);
extern void rd_print(const char *__format, ...);
extern void read_all_flash(void);
extern void write_data_fash(void);

// void RD_Init_flash(void);
//void RD_Write_Data(uint8_t reg_addr, uint8_t *data_w);
void RD_Send_Setup(uint8_t reg_addr, uint8_t *data_w);
void RD_setup_BL0942(void);
void RD_Scan_Btn(void);
void rd_loop(void);


#endif /* BL_0942_H_ */
