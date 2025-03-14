#include "./BL0942.H" // SPI hỗ trợ max 900kHz

extern u16 time_system;
u16 rd_time_tick = 0;
u8 select_led_blink = RD_NONE;
xdata u16 time_scan_btn_old = 0;
xdata u16 time_scan_btn_new = 0;
xdata u16 time_press_start = 0;
xdata u16 time_count_press = 0;
xdata u16 time_start_check_num_btn = 0;
xdata u16 time_count_check_num_btn = 0;
xdata u8 count_btn = 0; // so lan nhan
xdata u8 BTN_STT_NEW = 0;
xdata u8 BTN_STT_OLD = 0;
xdata u8 btn_stt = 0;
xdata u8 check_press = 0; // nhan don hoac nhan giu
xdata u8 check_hold_btn = 0;
xdata u8 have_press = 0;

xdata u8 flag_start = 0;
u8 rec_data[6] = {0};
xdata u32 U_in;
xdata u32 I_in;
xdata int32_t P_in;
xdata u16 temp_time_check_stuck = 0;
xdata u16 start_time_check_stuck = 0;
xdata u8 flag_start_check_stuck = 0;
xdata u16 rd_time_loop = 0;

xdata data_bl0942_t data_bl0942 = {0};
// data_bl0942_t *Data_Read =&data_bl0942;
data_flash_t *Read_Flash;
fan_id_e fan_id = FAN_ID_1;

void Blink_Led(u8 LED_PIN, u8 count_blink)
{
    static u8 count = 0;
    if (rd_exceed_ms(rd_time_tick, 1000) && select_led_blink != RD_NONE)
    {
        if (LED_PIN == LED_G)
        {
            BLINK_LED(RD_LED_G);
        }
        else if (LED_PIN == LED_R)
        {
            BLINK_LED(RD_LED_R);
        }
        else if (LED_PIN == ALL_LED)
        {
            BLINK_LED(RD_LED_G);
            BLINK_LED(RD_LED_R);
        }
        count++;
        rd_time_tick = get_time_ms();
        if (rd_time_tick >= 65534)
            rd_time_tick = 0;
        if (count == count_blink * 2)
        {
            // OFF_LED(RD_LED_G);
            select_led_blink = RD_NONE;
            count = 0;
        }
    }
}

void Blink_Led_Err(void)
{
    select_led_blink = LED_R;
    Blink_Led(LED_R, 3);
}

void Blink_Led_Green(void)
{
    select_led_blink = LED_G;
    Blink_Led(LED_G, 3);
}

void Blink_All_Led(void)
{
    select_led_blink = ALL_LED;
    Blink_Led(ALL_LED, 3);
}

void Blink_Led_Config(void)
{
    u8 i = 0;
    if (!(Read_Flash->fan_stuck[fan_id].check_stuck_fan))
    {
        ON_LED(RD_LED_G);
        OFF_LED(RD_LED_R);
        for (i = 0; i < 6; i++)
        {
            BLINK_LED(RD_LED_G);
            DelayXms(150);
        }
        OFF_LED(RD_LED_G);
        OFF_LED(RD_LED_R);
    }
}

void Blink_Led_select_fan(void)
{
    u8 i = 0;
    ON_LED(RD_LED_G);
    OFF_LED(RD_LED_R);
    for (i = 0; i < 4; i++)
    {
        BLINK_LED(RD_LED_G);
        BLINK_LED(RD_LED_R);
        DelayXms(150);
    }
    OFF_LED(RD_LED_G);
    OFF_LED(RD_LED_R);
}

void Blink_Led_Start(void)
{
    u8 i = 0;
    OFF_LED(RD_LED_R);
    ON_LED(RD_LED_G);
    for (i = 0; i < 6; i++)
    {
        BLINK_LED(RD_LED_R);
        BLINK_LED(RD_LED_G);
        DelayXms(250);
    }
    OFF_LED(RD_LED_R);
    OFF_LED(RD_LED_G);
}

void RD_Init_flash(void)
{
    uint8_t i = 0;
    read_all_flash();
    rd_print("header: ");
    RD_PRINT_HEX(Read_Flash->header);
    rd_print("tail: ");
    RD_PRINT_HEX(Read_Flash->tail);
    rd_print("\n");
    if (Read_Flash->header != 0x55 && Read_Flash->tail != 0xaa)
    {
        rd_print("init flash fail\n");
        Read_Flash->header = 0x55;
        Read_Flash->tail = 0xaa;
        for (i = 0; i < NUM_DEVICE; i++)
        {
            Read_Flash->fan_stuck[i].check_stuck_fan = 0;
            Read_Flash->fan_stuck[i].P_old = 0;
            Read_Flash->fan_stuck[i].P_stuck = Read_Flash->fan_stuck[i].P_old;
            Read_Flash->fan_stuck[i].I_old = 0;
            Read_Flash->fan_stuck[i].I_stuck = Read_Flash->fan_stuck[i].I_old;
            Read_Flash->fan_stuck[i].U_old = 0;
            Read_Flash->fan_stuck[i].relay_stt = 1;
        }
    }
    else
    {
        rd_print("init flash OK\n");
    }
    write_data_fash();
}

uint8_t get_btn(void)
{
    uint8_t temp_get_btn = 0;
    if (RD_PIN_BTN == 0)
    {
        temp_get_btn = 0;
    }
    else
    {
        temp_get_btn = 1;
    }
    return temp_get_btn;
}

u16 get_time_ms(void)
{
    return time_system;
}
void RD_Scan_Btn(void)
{
    u16 temp_get_time = 0;
    temp_get_time = get_time_ms();
    WDT_Clear();
    time_scan_btn_new = temp_get_time;
    if (time_scan_btn_new < time_scan_btn_old)
        time_scan_btn_old = time_scan_btn_new; // overflow
    if (time_scan_btn_new - time_scan_btn_old > 10)
    { // quet phim 10ms/1lan
        BTN_STT_NEW = get_btn();
        if (BTN_STT_NEW == 0 && BTN_STT_OLD == 1)
        { // nhan nut
            time_press_start = temp_get_time;
            btn_stt = 1;
        }
        else if (BTN_STT_NEW == 1 && BTN_STT_OLD == 0)
        { // nha nut
            if (time_count_press >= 35 && time_count_press < 600)
            {
                if (check_hold_btn == 1)
                {
                    rd_print("nha giu\n");
                    check_hold_btn = 0;
                }
                else
                {
                    have_press = 1;
                    check_press = 1;
                }
            }
            else
            {
                if (time_count_press >= 600)
                {
                    rd_print("nha giu\n");
                    check_hold_btn = 0;
                }
            }
            btn_stt = 0;
        }
        /*check hold btn*/
        if (btn_stt)
        {
            if (time_press_start > temp_get_time)
            {
                time_count_press = (65535 - time_press_start) + temp_get_time;
            }
            else
            {
                time_count_press = temp_get_time - time_press_start;
            }
            if (time_count_press >= 3000)
            {
                have_press = 1;
                check_press = 2;
                time_press_start = temp_get_time - 500; // (3000 - 500)ms scan 1 phat
            }
        }
        BTN_STT_OLD = BTN_STT_NEW;
        time_scan_btn_old = time_scan_btn_new;
    }
    /*xu ly nut nhan*/
    if (have_press)
    {
        if (check_press == 1)
        {
            rd_print("an ne\n");
            time_start_check_num_btn = temp_get_time;
            count_btn++;
            check_press = 0;
        }
        else if (check_press == 2) // nhan giu config
        {
            if (!(Read_Flash->fan_stuck[fan_id].check_stuck_fan) && RD_RELAY == 1 )
            {
                if(data_bl0942.flag_stuck == RD_MANUAL){
                    read_UIP();
                }
                config_P_I_Stuck();
                Blink_Led_Config();
            }
            count_btn = 0;
            check_hold_btn = 1;
            check_press = 0;
        }
        have_press = 0;
    }

    /*kiem tra so lan nhan*/
    if (time_start_check_num_btn > temp_get_time)
    {
        time_count_check_num_btn = (65535 - time_start_check_num_btn) + temp_get_time;
    }
    else
    {
        time_count_check_num_btn = temp_get_time - time_start_check_num_btn;
    }
    if (count_btn)
    {
        if (time_count_check_num_btn > 600)
        {
            if (count_btn == 1)
            {
                rd_print("ON OFF\n");
                BLINK_LED(RD_RELAY);
                OFF_LED(RD_LED_R);
                OFF_LED(RD_LED_G);
                flag_start_check_stuck = 0;
                Read_Flash->fan_stuck[fan_id].check_stuck_fan = 0;
                start_time_check_stuck = temp_time_check_stuck;
            }
            else if (count_btn == 2)
            {
                fan_id++;
                fan_id = fan_id % NUM_DEVICE;
                rd_print("select FAN_ID: %d\n\n\n", (unsigned int)fan_id);
                Blink_Led_select_fan();
            }
            else if (count_btn == 3)
            {
                rd_print("3 phat\n");
                data_bl0942.flag_stuck = !data_bl0942.flag_stuck;
                rd_print("flag stuck: %d\n\n\n", (unsigned int)data_bl0942.flag_stuck);
                OFF_LED(RD_LED_R);
                OFF_LED(RD_LED_G);
                rd_time_tick = get_time_ms();
            }
            count_btn = 0;
            time_count_check_num_btn = 0;
            time_start_check_num_btn = temp_get_time;
        }
    }
    else
    {
        time_start_check_num_btn = temp_get_time;
    }
}

void RD_Unlock_Send(void)
{
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

void RD_Send_Setup(uint8_t reg_addr, uint8_t *data_w)
{
    uint8_t i = 0;
    uint8_t data_send[6] = {0};
    uint16_t CRC_Temp = 0xA8 + reg_addr + data_w[0] + data_w[1] + data_w[2];
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    RD_Unlock_Send();
    data_send[0] = 0xA8;
    data_send[1] = reg_addr;
    data_send[2] = data_w[0];
    data_send[3] = data_w[1];
    data_send[4] = data_w[2];
    data_send[5] = CRC_Check;
    RD_Send_String_SPI(data_send);

#if RD_LOG
    rd_print("data send: ");
    for (i = 0; i < 6; i++)
    {
        RD_PRINT_HEX(data_send[i]);
    }
    rd_print("\n");
#endif
}

int32_t RD_Read_Data_Signed_SPI(uint8_t reg_addr)
{
    u32 read_value = 0;
    uint8_t i = 0;
    uint8_t tx_data[6] = {0};
    uint16_t CRC_Temp = 0x58 + reg_addr;
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    tx_data[0] = 0x58;
    tx_data[1] = reg_addr;
    tx_data[2] = 0x00;
    tx_data[3] = 0x00;
    tx_data[4] = 0x00;
    tx_data[5] = 0x00; // CRC_Check;
    RD_Send_String_SPI(tx_data);

#if RD_LOG
    rd_print("Data rec reg 0x%02X: ", (unsigned int)reg_addr);
    for (i = 0; i < 6; i++)
    {
        RD_PRINT_HEX(rec_data[i]);
    }
    rd_print("\n");
#endif
    CRC_Temp = 0x58 + reg_addr + rec_data[2] + rec_data[3] + rec_data[4];
    CRC_Check = ~(CRC_Temp & 0xff);
    if (CRC_Check == rec_data[5])
    {
        read_value = ((u32)rec_data[2] << 16) | ((u32)rec_data[3] << 8) | ((u32)rec_data[4]);
        memset(rec_data, 0, 6);
        if (read_value & 0x800000)
        {
            read_value |= 0xff000000; // mo rong bit dau
        }
        // rd_print("value = %ld \n", read_value);
        // rd_print("-----------------------------\n");
        return read_value;
    }
    memset(rec_data, 0, 6);
    return 0;
}

u32 RD_Read_Data_SPI(uint8_t reg_addr)
{ // get data ko dau
    u32 read_value = 0;
    uint8_t i = 0;
    uint8_t tx_data[6] = {0};
    uint16_t CRC_Temp = 0x58 + reg_addr;
    uint8_t CRC_Check = ~(CRC_Temp & 0xff);
    tx_data[0] = 0x58;
    tx_data[1] = reg_addr;
    tx_data[2] = 0x00;
    tx_data[3] = 0x00;
    tx_data[4] = 0x00;
    tx_data[5] = 0x00; // CRC_Check;
    RD_Send_String_SPI(tx_data);

#if RD_LOG
    rd_print("Data rec reg 0x%02X: ", (unsigned int)reg_addr);
    for (i = 0; i < 6; i++)
    {
        RD_PRINT_HEX(rec_data[i]);
    }
    rd_print("\n");
#endif
    CRC_Temp = 0x58 + reg_addr + rec_data[2] + rec_data[3] + rec_data[4];
    CRC_Check = ~(CRC_Temp & 0xff);
    if (CRC_Check == rec_data[5])
    {
        read_value = ((u32)rec_data[2] << 16) | ((u32)rec_data[3] << 8) | ((u32)rec_data[4]);
        memset(rec_data, 0, 6);
#if RD_LOG
        rd_print("value = %lu\n", read_value);
        rd_print("-----------------------------\n");
#endif
        return read_value;
    }
    // rd_print("-----------------------------\n");
    memset(rec_data, 0, 6);
    return 0;
}

u8 rd_exceed_ms(u16 ref, u16 span_ms)
{
    return ((get_time_ms() - ref) >= span_ms);
}

void RD_setup_BL0942(void)
{
    uint8_t Set_CF_ZX[3] = {0x00, 0x00, 0x23}; // 0010 0011: ZX 10, CF2 00, CF1 11
    uint8_t Set_Gain[3] = {0x00, 0x00, 0x03};
    uint8_t Set_Soft_Reset[3] = {0x5a, 0x5a, 0x5a};
    RD_Send_Setup(GAIN_CR, Set_Gain);          // 0x1A
    RD_Send_Setup(SOFT_RESET, Set_Soft_Reset); // 0x1C
    RD_Send_Setup(REG_OT_FUNX, Set_CF_ZX);     // 0x18
    rd_print("SET UP OK!\n\n\n");
}

void read_UIP(void)
{
    float temp_cal;
    U_in = RD_Read_Data_SPI(REG_VRMS);
    temp_cal = 2375.72118f / (73989.0f * 510.0f); // temp_U //= (1.218*(390000*5 + 510)*0.001)
    data_bl0942.U_hd = U_in * temp_cal;
    rd_print("U hd: %.2f V, \n", data_bl0942.U_hd);

    I_in = RD_Read_Data_SPI(REG_IRMS);
    temp_cal = 1.218 / 305978; // temp_I
    data_bl0942.I_hd = (I_in * temp_cal);
    rd_print("I hd: %.4f A, \n", data_bl0942.I_hd);

    if (data_bl0942.I_hd < 0.0001)
    {
        data_bl0942.P_hd = 0;
        data_bl0942.Cos_Phi = 0;
    }
    else
    {
        P_in = RD_Read_Data_Signed_SPI(REG_WATT);
        temp_cal = 0.001604122; //=((1.218*1.218)*(390000*5 + 510))/(3537*0.001*510*1000*1000)  temp_P
        data_bl0942.P_hd = P_in * temp_cal;
        // rd_print("P read: %.3f W\n", data_bl0942.P_hd);
        if (data_bl0942.P_hd < 0 || data_bl0942.P_hd > 10000)
            data_bl0942.P_hd = 0;
        rd_print("P hieu dung: %.3f W\n", data_bl0942.P_hd);
        data_bl0942.Cos_Phi = (data_bl0942.P_hd) / ((data_bl0942.U_hd) * (data_bl0942.I_hd));
        rd_print("Cos phi : %.3f \n\n", data_bl0942.Cos_Phi);
    }
}
void config_P_I_Stuck(void)
{
    Read_Flash->fan_stuck[fan_id].P_old = data_bl0942.P_hd;
    Read_Flash->fan_stuck[fan_id].P_stuck = Read_Flash->fan_stuck[fan_id].P_old;
    Read_Flash->fan_stuck[fan_id].I_old = data_bl0942.I_hd;
    Read_Flash->fan_stuck[fan_id].I_stuck = Read_Flash->fan_stuck[fan_id].I_old;
    Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;

    write_data_fash();
    rd_print("config P ket: %.3f W, id: %u \n\n\n", Read_Flash->fan_stuck[fan_id].P_stuck, fan_id);
}

void update_Pstuck_by_U(void)
{
    data_bl0942.Cos_Phi = data_bl0942.P_hd / (data_bl0942.U_hd * data_bl0942.I_hd);
    if (CALC_EXCEED(data_bl0942.U_hd, Read_Flash->fan_stuck[fan_id].U_old) > 3)
    { // U tang 3%
        //start_time_check_stuck = get_time_ms();
        if(fan_id == FAN_ID_1){
            Read_Flash->fan_stuck[fan_id].I_old = (float)(0.000807 * data_bl0942.U_hd * data_bl0942.U_hd + 0.20198 * data_bl0942.U_hd + 46.0405) / 1000;
            Read_Flash->fan_stuck[fan_id].I_stuck = Read_Flash->fan_stuck[fan_id].I_old;
            Read_Flash->fan_stuck[fan_id].P_old = 0.000668 * data_bl0942.U_hd * data_bl0942.U_hd - 0.05991 * data_bl0942.U_hd + 6.8169;
            Read_Flash->fan_stuck[fan_id].P_stuck = Read_Flash->fan_stuck[fan_id].P_old;
            Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;
        }else if(fan_id == FAN_ID_2){
            Read_Flash->fan_stuck[fan_id].I_old = (float)(0.001609 * data_bl0942.U_hd * data_bl0942.U_hd - 0.2166 * data_bl0942.U_hd + 69.3708) / 1000;
            Read_Flash->fan_stuck[fan_id].I_stuck = Read_Flash->fan_stuck[fan_id].I_old;
            Read_Flash->fan_stuck[fan_id].P_old = 0.0006853 * data_bl0942.U_hd * data_bl0942.U_hd - 0.10797 * data_bl0942.U_hd + 10.8147;
            Read_Flash->fan_stuck[fan_id].P_stuck = Read_Flash->fan_stuck[fan_id].P_old;
            Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;
        }
        write_data_fash();
        rd_print("I ket up: %.3f A\n", Read_Flash->fan_stuck[fan_id].I_stuck);
        rd_print("P ket up: %.3f W\n\n", Read_Flash->fan_stuck[fan_id].P_stuck);
    }
    else if (CALC_LESS(data_bl0942.U_hd, Read_Flash->fan_stuck[fan_id].U_old) > 3)
    { // U giam 3%
        //start_time_check_stuck = get_time_ms();
        if(fan_id == FAN_ID_1){
            Read_Flash->fan_stuck[fan_id].I_old = (float)(0.000807 * data_bl0942.U_hd * data_bl0942.U_hd + 0.20198 * data_bl0942.U_hd + 46.0405) / 1000;
            Read_Flash->fan_stuck[fan_id].I_stuck = Read_Flash->fan_stuck[fan_id].I_old;
            Read_Flash->fan_stuck[fan_id].P_old = 0.000668 * data_bl0942.U_hd * data_bl0942.U_hd - 0.05991 * data_bl0942.U_hd + 6.8169;
            Read_Flash->fan_stuck[fan_id].P_stuck = Read_Flash->fan_stuck[fan_id].P_old;
            Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;
        }else if(fan_id == FAN_ID_2){
            Read_Flash->fan_stuck[fan_id].I_old = (float)(0.001609 * data_bl0942.U_hd * data_bl0942.U_hd - 0.2166 * data_bl0942.U_hd + 69.3708) / 1000;
            Read_Flash->fan_stuck[fan_id].I_stuck = Read_Flash->fan_stuck[fan_id].I_old;
            Read_Flash->fan_stuck[fan_id].P_old = 0.0006853 * data_bl0942.U_hd * data_bl0942.U_hd - 0.10797 * data_bl0942.U_hd + 10.8147;
            Read_Flash->fan_stuck[fan_id].P_stuck = Read_Flash->fan_stuck[fan_id].P_old;
            Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;
        }
        write_data_fash();
        rd_print("I ket down: %.3f A\n", Read_Flash->fan_stuck[fan_id].I_stuck);
        rd_print("P ket down: %.3f W\n\n", Read_Flash->fan_stuck[fan_id].P_stuck);
    }
    else if ((CALC_EXCEED(data_bl0942.U_hd, Read_Flash->fan_stuck[fan_id].U_old) < 1) || (CALC_LESS(data_bl0942.U_hd, Read_Flash->fan_stuck[fan_id].U_old) < 1))
    {
        // Read_Flash->fan_stuck[fan_id].U_old = data_bl0942.U_hd;
    }
}

void loop_check_stuck_fan(void)
{
    if (data_bl0942.U_hd > 100 && data_bl0942.P_hd > 5 && Read_Flash->fan_stuck[fan_id].P_old > 0)
    {
        if (start_time_check_stuck >= 65530)
            start_time_check_stuck = 0;
        if (Read_Flash->fan_stuck[fan_id].check_stuck_fan == 0 && Read_Flash->fan_stuck[fan_id].P_old > 0)
        {
            if (!flag_start_check_stuck)
            {
                if (rd_exceed_ms(start_time_check_stuck, TIMEOUT_START_CHECK))
                {
                    start_time_check_stuck = temp_time_check_stuck;
                    flag_start_check_stuck = 1;
                    rd_print("start check stuck\n\n\n");
                }
            }
            else
            {
                float temp_check_P = 0;
                update_Pstuck_by_U();
                if (data_bl0942.P_hd > Read_Flash->fan_stuck[fan_id].P_old)
                {
                    if (data_bl0942.I_hd > Read_Flash->fan_stuck[fan_id].I_old)
                    {
                        temp_check_P = ((data_bl0942.P_hd - Read_Flash->fan_stuck[fan_id].P_old) / Read_Flash->fan_stuck[fan_id].P_stuck) * 100;
                        // if (((data_bl0942.I_hd - Read_Flash->fan_stuck[fan_id].I_old) / Read_Flash->fan_stuck[fan_id].I_stuck) * 1000 >= 5)
                        // { // I > 0.5%
                        //     temp_check_P = ((data_bl0942.P_hd - Read_Flash->fan_stuck[fan_id].P_old) / Read_Flash->fan_stuck[fan_id].P_stuck) * 100;
                        // }
                    }
                    if (data_bl0942.P_hd > Read_Flash->fan_stuck[fan_id].P_stuck && data_bl0942.I_hd > Read_Flash->fan_stuck[fan_id].I_stuck)
                    {
                        Read_Flash->fan_stuck[fan_id].P_old = Read_Flash->fan_stuck[fan_id].P_stuck;
                        Read_Flash->fan_stuck[fan_id].I_old = Read_Flash->fan_stuck[fan_id].I_stuck;
                    }
                }
                else
                {
                    // neu cong suat giam 2%
                    if (((Read_Flash->fan_stuck[fan_id].P_old - data_bl0942.P_hd) / Read_Flash->fan_stuck[fan_id].P_old) * 100 < 2)
                    {
                        Read_Flash->fan_stuck[fan_id].P_old = data_bl0942.P_hd;
                        Read_Flash->fan_stuck[fan_id].I_old = data_bl0942.I_hd;
                    }
                }

                if (temp_check_P >= P_THRESHOLD)
                {
                    Read_Flash->fan_stuck[fan_id].check_stuck_fan = 1;
                    rd_print("delta P: %.2f \n", temp_check_P);
                    rd_print("VUOT MUC PICKLEBALL\n\n\n");
                    OFF_RELAY();
                    OFF_LED(RD_LED_G);
                    rd_time_tick = get_time_ms();
                }
            }
        }
        else
        {
            start_time_check_stuck = temp_time_check_stuck;
        }
    }
    else
    {
        start_time_check_stuck = temp_time_check_stuck;
        flag_start_check_stuck = 0;
    }
}

void rd_start_init(void)
{
    ON_RELAY();
    Blink_Led_Start();
    DelayXms(1000);
    data_bl0942.flag_stuck = RD_AUTO;
}

void rd_loop(void)
{
    temp_time_check_stuck = get_time_ms();
    if (flag_start == 0)
    {
        RD_Init_flash();
        RD_setup_BL0942();
        rd_time_loop = get_time_ms();
        flag_start = 1;
        rd_print("fan_id: %d, P ket init: %.3f W\n", (unsigned int)fan_id, Read_Flash->fan_stuck[fan_id].P_stuck);
    }
    RD_Scan_Btn();

    if (data_bl0942.flag_stuck == RD_AUTO)
    {
        if (rd_exceed_ms(rd_time_loop, TIME_LOOP))
        {
            if (rd_time_loop >= 65530){
                rd_time_loop = 0;
            }
            rd_time_loop = get_time_ms();
            read_UIP();
            loop_check_stuck_fan();
            
        }
        if (Read_Flash->fan_stuck[fan_id].check_stuck_fan == 1)
        {
            Blink_Led_Err();
        }
        else
        {
            Blink_Led_Green();
        }
    }
    else
    {
        Blink_All_Led();
    }
}
