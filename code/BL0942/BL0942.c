#include "./BL0942.H"  // SPI hỗ trợ max 900kHz

/*
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
}

void RD_Read_Data_SPI(uint8_t reg_addr){
	//uint8_t i = 0;
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
    
    rd_print("Data rec reg 0x%02X: ", reg_addr);
    for(i=0; i<6; i++){
       rd_print("%d ", rx_data[0]);
    }
    rd_print("\n");  
}
*/