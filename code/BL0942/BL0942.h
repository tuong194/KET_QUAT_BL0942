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

#define RD_LOG                0  
#define RD_PIN_BTN            P34
#define RD_LED_R              P60
#define RD_LED_G              P61
#define RD_RELAY              P22

//#define GET_DATA_SPI()		 SPDAT
#define CALC_EXCEED(x,y)     (((x-y)/y)*100)
#define CALC_LESS(x,y)       (((y-x)/y)*100)
#define RD_PRINT_HEX(x)      rd_print("0x%02X ", (unsigned int)(x))
#define ON_RELAY()           (RD_RELAY = 1)
#define OFF_RELAY()          (RD_RELAY = 0)
#define ON_LED(x)            (x = 0)
#define OFF_LED(x)           (x = 1)
#define BLINK_LED(x)         ((x)=!(x))
#define RD_SIZE_FLASH        sizeof(data_flash_t)
#define SIZE_DATA            RD_SIZE_FLASH
#define TIMEOUT_START_CHECK  1500   //ms
#define TIME_LOOP            1000   //ms

typedef struct{
    u8 header;
    //float Cos_Phi;
    float U_old;
    float P_old;
    float I_old;
    float P_stuck;
    float I_stuck;
    float Z;
    uint8_t check_stuck_fan;
    uint8_t relay_stt;
    u8 tail;
}data_flash_t;
 
typedef struct{
//    u8 header;
    float U_hd;
    float I_hd;
    float P_hd;
    float Cos_Phi;
    // float P_old;
    // float I_old;
    // uint8_t check_stuck_fan;
    // u8 tail;
}data_bl0942_t;

enum{
    RD_NONE = 0,
    LED_R   = 1,
    LED_G   = 2,
};

extern data_flash_t *Read_Flash;

extern void DelayXms(u16 xMs);
extern void RD_Send_String_SPI(u8 *data_str);
extern void rd_print(const char *__format, ...);
extern void read_all_flash(void);
extern void write_data_fash(void);

//void RD_Init_flash(void);
//void RD_Write_Data(uint8_t reg_addr, uint8_t *data_w);
u16 get_time_ms(void);
u8 rd_exceed_ms(u16 ref, u16 span_ms);
void RD_Send_Setup(uint8_t reg_addr, uint8_t *data_w);
void RD_setup_BL0942(void);
void RD_Scan_Btn(void);
void config_P_I_Stuck(void);
void rd_start_init(void);
void rd_loop(void);


#endif /* BL_0942_H_ */
