#include "./BL0942.H"  // SPI hỗ trợ max 900kHz

extern u16 time_system;
xdata u16 time_scan_btn_old = 0;
xdata u16 time_scan_btn_new = 0;
xdata u16 time_press_start = 0;
xdata u16 time_count_press = 0;
xdata u16 time_start_check_num_btn = 0;
xdata u16 time_count_check_num_btn = 0;
xdata u8 count_btn = 0;  // so lan nhan 
xdata u8 BTN_STT_NEW = 0;
xdata u8 BTN_STT_OLD = 0;
xdata u8 btn_stt = 0;
xdata u8 check_press = 0; // nhan don hoac nhan giu
xdata u8 check_hold_btn = 0;
xdata u8 have_press = 0;

uint8_t get_btn(void){
    uint8_t temp_get_btn = 0;
    if(RD_PIN_BTN==0){
        temp_get_btn=0;
    }else{
        temp_get_btn = 1;
    }
    return temp_get_btn;
}

u16 get_time_ms(void){
    return time_system;
}
void RD_Scan_Btn(void){
    u16 temp_get_time = 0;
    temp_get_time = get_time_ms();
    WDT_Clear();
    time_scan_btn_new = temp_get_time;
    if(time_scan_btn_new < time_scan_btn_old) time_scan_btn_old = time_scan_btn_new; // tran
    if(time_scan_btn_new - time_scan_btn_old > 10){ // quet phim 10ms/1lan
        BTN_STT_NEW = get_btn();
        if(BTN_STT_NEW == 0 && BTN_STT_OLD == 1){ // nhan nut
            time_press_start = temp_get_time;
            btn_stt = 1;
        }else if(BTN_STT_NEW == 1 && BTN_STT_OLD == 0){ // nha nut
            if(time_count_press >= 35 && time_count_press < 600){
                if(check_hold_btn == 1){ 
                    rd_print("nha giu\n");
                    check_hold_btn = 0;
                }else{
                    have_press = 1;
                    check_press = 1;
                }
            }else{
                if(time_count_press >= 600){
                    rd_print("nha giu\n");
                    check_hold_btn = 0;
                }
            }
            btn_stt = 0;
        }
        /*check hold btn*/
        if(btn_stt){
            if(time_press_start > temp_get_time){
                time_count_press = (65535 - time_press_start) + temp_get_time;
            }else{
                time_count_press = temp_get_time - time_press_start;
            }
            if(time_count_press >= 1200){
                have_press = 1;
                check_press = 2;
                time_press_start = temp_get_time - 700; // 500ms scan 1 phat
            }
        }
        BTN_STT_OLD = BTN_STT_NEW;
        time_scan_btn_old = time_scan_btn_new;
    }
    /*xu ly nut nhan*/
    if(have_press){
        if(check_press == 1){
            rd_print("an 1 phat\n");
            time_start_check_num_btn = temp_get_time;
            count_btn++;
            check_press = 0;
        }else if(check_press == 2){
            rd_print("an giu ne\n");
            count_btn = 0;
            check_hold_btn = 1;
            check_press = 0;
        }
        
        have_press = 0;
    }

    /*kiem tra so lan nhan*/
    if(time_start_check_num_btn > temp_get_time){
        time_count_check_num_btn = (65535 - time_start_check_num_btn) + temp_get_time;
    }else{
        time_count_check_num_btn = temp_get_time - time_start_check_num_btn;
    }
    if(count_btn){
        if(time_count_check_num_btn > 600){
            if(count_btn == 1){
                rd_print("1 phat\n");
            }else if(count_btn == 2){
                rd_print("2 phat\n");
            }else if(count_btn == 3){
                rd_print("3 phat\n");
            }
            count_btn = 0;
            time_count_check_num_btn = 0;
            time_start_check_num_btn = temp_get_time;
        }
    }else{
        time_start_check_num_btn = temp_get_time;
    }
    
}

void RD_Unlock_Send(void){
    uint8_t data_send[6] = {0};
    uint16_t CRC_Temp = (0xA8 + USR_WRPROT + 0x55);
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    data_send[0] = 0xA8;
    data_send[1] = USR_WRPROT;
    data_send[2] = 0x00;
    data_send[3] = 0x00;
    data_send[4] = 0x55;
    data_send[5] = CRC_Check;
    RD_Send_String_SPI(data_send);
}

void RD_Write_Data(uint8_t reg_addr, uint8_t *data_w){
    uint8_t i =0;
    uint8_t data_send[6] = {0};
    uint16_t CRC_Temp = 0xA8 + reg_addr + data_w[0] + data_w[1] + data_w[2];
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    data_send[0] = 0xA8;
    data_send[1] = reg_addr;
    data_send[2] = data_w[0];
    data_send[3] = data_w[1];
    data_send[4] = data_w[2];
    data_send[5] = CRC_Check;
    RD_Send_String_SPI(data_send);

#if RD_LOG
    rd_print("data send: ");
    for(i=0;i<6;i++){
        RD_PRINT_HEX(data_send[i]);
    }
    rd_print("\n");
#endif

}

void RD_Read_Data_SPI(uint8_t reg_addr){
	uint8_t i = 0;
    //xdata uint8_t Buff_print[30];
    uint8_t *ptrRec;
    uint8_t rx_data[6] = {0};
    uint8_t tx_data[6] = {0};
    uint16_t CRC_Temp = 0x58 + reg_addr;
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    tx_data[0] = 0x58;
    tx_data[1] = reg_addr;
    tx_data[2] = 0x00;
    tx_data[3] = 0x00;
    tx_data[4] = 0x00;
    tx_data[5] = CRC_Check;
    ptrRec = &rx_data[0]; 
    RD_Send_String_SPI(tx_data);
    while (GET_DATA_SPI()!= NULL)
    {
       *ptrRec++ = GET_DATA_SPI();
    }
    
#if RD_LOG
    rd_print("Data rec reg 0x%02X: ", (unsigned int)reg_addr);
    for(i=0; i<6; i++){
       RD_PRINT_HEX(rx_data[i]);
    }
    rd_print("\n");  
#endif

}

void RD_setup_BL0942(void){
    uint8_t Set_CF_ZX[3] ={0x00,0x00,0x23}; // 0010 0011: ZX 10, CF2 00, CF1 11
    uint8_t Set_Gain[3] ={0x00,0x00,0x03};
    uint8_t Set_Soft_Reset[3] ={0x5a,0x5a,0x5a};
    RD_Write_Data(GAIN_CR, Set_Gain);
    RD_Write_Data(SOFT_RESET, Set_Soft_Reset);
    RD_Write_Data(REG_OT_FUNX, Set_CF_ZX);
}