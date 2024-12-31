#ifndef _BRG_MG82F6Dxx_H
#define _BRG_MG82F6Dxx_H

/*
*************************************************************************************
*  UART T1 波特率重载值
*
*************************************************************************************
*/
// T1 11.5592MHz
#define T1_BRGRL_2400_1X_11059200_12T               0xF4        // 0%
#define T1_BRGRL_4800_1X_11059200_12T               0xFA        // 0%
#define T1_BRGRL_9600_1X_11059200_12T               0xFD        // 0%

#define T1_BRGRL_2400_1X_11059200_1T                0x70        // 0%
#define T1_BRGRL_4800_1X_11059200_1T                0xB8        // 0%
#define T1_BRGRL_9600_1X_11059200_1T                0xDC        // 0%
#define T1_BRGRL_19200_1X_11059200_1T               0xEE        // 0%
#define T1_BRGRL_38400_1X_11059200_1T               0xF7        // 0%
#define T1_BRGRL_57600_1X_11059200_1T               0xFA        // 0%
#define T1_BRGRL_115200_1X_11059200_1T              0xFD        // 0%

#define T1_BRGRL_2400_2X_11059200_12T               0xE8        // 0%
#define T1_BRGRL_4800_2X_11059200_12T               0xF4        // 0%
#define T1_BRGRL_9600_2X_11059200_12T               0xFA        // 0%
#define T1_BRGRL_19200_2X_11059200_12T              0xFD        // 0%
#define T1_BRGRL_57600_2X_11059200_12T              0xFF        // 0%

#define T1_BRGRL_4800_2X_11059200_1T                0x70        // 0%
#define T1_BRGRL_9600_2X_11059200_1T                0xB8        // 0%
#define T1_BRGRL_19200_2X_11059200_1T               0xDC        // 0%
#define T1_BRGRL_38400_2X_11059200_1T               0xEE        // 0%
#define T1_BRGRL_57600_2X_11059200_1T               0xF4        // 0%
#define T1_BRGRL_115200_2X_11059200_1T              0xFA        // 0%
#define T1_BRGRL_230400_2X_11059200_1T              0xFD        // 0%
#define T1_BRGRL_691200_2X_11059200_1T              0xFF        // 0%

#define T1_BRGRL_2400_4X_11059200_12T               0xD0        // 0%
#define T1_BRGRL_4800_4X_11059200_12T               0xE8        // 0%
#define T1_BRGRL_9600_4X_11059200_12T               0xF4        // 0%
#define T1_BRGRL_19200_4X_11059200_12T              0xFA        // 0%
#define T1_BRGRL_38400_4X_11059200_12T              0xFD        // 0%
#define T1_BRGRL_57600_4X_11059200_12T              0xFE        // 0%
#define T1_BRGRL_115200_4X_11059200_12T             0xFF        // 0%

#define T1_BRGRL_9600_4X_11059200_1T                0x70        // 0%
#define T1_BRGRL_19200_4X_11059200_1T               0xB8        // 0%
#define T1_BRGRL_38400_4X_11059200_1T               0xDC        // 0%
#define T1_BRGRL_57600_4X_11059200_1T               0xE8        // 0%
#define T1_BRGRL_115200_4X_11059200_1T              0xF4        // 0%
#define T1_BRGRL_230400_4X_11059200_1T              0xFA        // 0%
#define T1_BRGRL_460800_4X_11059200_1T              0xFD        // 0%
#define T1_BRGRL_691200_4X_11059200_1T              0xFE        // 0%
#define T1_BRGRL_1382400_4X_11059200_1T             0xFF        // 0%

#define T1_BRGRL_2400_8X_11059200_12T               0xA0        // 0%
#define T1_BRGRL_4800_8X_11059200_12T               0xD0        // 0%
#define T1_BRGRL_9600_8X_11059200_12T               0xE8        // 0%
#define T1_BRGRL_19200_8X_11059200_12T              0xF4        // 0%
#define T1_BRGRL_38400_8X_11059200_12T              0xFA        // 0%
#define T1_BRGRL_57600_8X_11059200_12T              0xFC        // 0%
#define T1_BRGRL_115200_8X_11059200_12T             0xFE        // 0%
#define T1_BRGRL_230400_8X_11059200_12T             0xFF        // 0%

#define T1_BRGRL_19200_8X_11059200_1T               0x70        // 0%
#define T1_BRGRL_38400_8X_11059200_1T               0xB8        // 0%
#define T1_BRGRL_57600_8X_11059200_1T               0xD0        // 0%
#define T1_BRGRL_115200_8X_11059200_1T              0xE8        // 0%
#define T1_BRGRL_230400_8X_11059200_1T              0xF4        // 0%
#define T1_BRGRL_460800_8X_11059200_1T              0xFA        // 0%
#define T1_BRGRL_691200_8X_11059200_1T              0xFC        // 0%
#define T1_BRGRL_921600_8X_11059200_1T              0xFD        // 0%
#define T1_BRGRL_1382400_8X_11059200_1T             0xFE        // 0%
#define T1_BRGRL_2764800_8X_11059200_1T             0xFF        // 0%

// T1 22.1184MHz
#define T1_BRGRL_2400_1X_22118400_12T               0xE8        // 0%
#define T1_BRGRL_4800_1X_22118400_12T               0xF4        // 0%
#define T1_BRGRL_9600_1X_22118400_12T               0xFA        // 0%
#define T1_BRGRL_19200_1X_22118400_12T              0xFD        // 0%
#define T1_BRGRL_57600_1X_22118400_12T              0xFF        // 0%

#define T1_BRGRL_4800_1X_22118400_1T                0x70        // 0%
#define T1_BRGRL_9600_1X_22118400_1T                0xB8        // 0%
#define T1_BRGRL_19200_1X_22118400_1T               0xDC        // 0%
#define T1_BRGRL_38400_1X_22118400_1T               0xEE        // 0%
#define T1_BRGRL_57600_1X_22118400_1T               0xF4        // 0%
#define T1_BRGRL_115200_1X_22118400_1T              0xFA        // 0%
#define T1_BRGRL_230400_1X_22118400_1T              0xFD        // 0%
#define T1_BRGRL_691200_1X_22118400_1T              0xFF        // 0%

#define T1_BRGRL_2400_2X_22118400_12T               0xD0        // 0%
#define T1_BRGRL_4800_2X_22118400_12T               0xE8        // 0%
#define T1_BRGRL_9600_2X_22118400_12T               0xF4        // 0%
#define T1_BRGRL_19200_2X_22118400_12T              0xFA        // 0%
#define T1_BRGRL_38400_2X_22118400_12T              0xFD        // 0%
#define T1_BRGRL_57600_2X_22118400_12T              0xFE        // 0%
#define T1_BRGRL_115200_2X_22118400_12T             0xFF        // 0%

#define T1_BRGRL_9600_2X_22118400_1T                0x70        // 0%
#define T1_BRGRL_19200_2X_22118400_1T               0xB8        // 0%
#define T1_BRGRL_38400_2X_22118400_1T               0xDC        // 0%
#define T1_BRGRL_57600_2X_22118400_1T               0xE8        // 0%
#define T1_BRGRL_115200_2X_22118400_1T              0xF4        // 0%
#define T1_BRGRL_230400_2X_22118400_1T              0xFA        // 0%
#define T1_BRGRL_460800_2X_22118400_1T              0xFD        // 0%
#define T1_BRGRL_691200_2X_22118400_1T              0xFE        // 0%
#define T1_BRGRL_1382400_2X_22118400_1T             0xFF        // 0%

#define T1_BRGRL_2400_4X_22118400_12T               0xA0        // 0%
#define T1_BRGRL_4800_4X_22118400_12T               0xD0        // 0%
#define T1_BRGRL_9600_4X_22118400_12T               0xE8        // 0%
#define T1_BRGRL_19200_4X_22118400_12T              0xF4        // 0%
#define T1_BRGRL_38400_4X_22118400_12T              0xFA        // 0%
#define T1_BRGRL_57600_4X_22118400_12T              0xFC        // 0%
#define T1_BRGRL_115200_4X_22118400_12T             0xFE        // 0%
#define T1_BRGRL_230400_4X_22118400_12T             0xFF        // 0%

#define T1_BRGRL_19200_4X_22118400_1T               0x70        // 0%
#define T1_BRGRL_38400_4X_22118400_1T               0xB8        // 0%
#define T1_BRGRL_57600_4X_22118400_1T               0xD0        // 0%
#define T1_BRGRL_115200_4X_22118400_1T              0xE8        // 0%
#define T1_BRGRL_230400_4X_22118400_1T              0xF4        // 0%
#define T1_BRGRL_460800_4X_22118400_1T              0xFA        // 0%
#define T1_BRGRL_691200_4X_22118400_1T              0xFC        // 0%
#define T1_BRGRL_921600_4X_22118400_1T              0xFD        // 0%
#define T1_BRGRL_1382400_4X_22118400_1T             0xFE        // 0%
#define T1_BRGRL_2764800_4X_22118400_1T             0xFF        // 0%

#define T1_BRGRL_2400_8X_22118400_12T               0x40        // 0%
#define T1_BRGRL_4800_8X_22118400_12T               0xA0        // 0%
#define T1_BRGRL_9600_8X_22118400_12T               0xD0        // 0%
#define T1_BRGRL_19200_8X_22118400_12T              0xE8        // 0%
#define T1_BRGRL_38400_8X_22118400_12T              0xF4        // 0%
#define T1_BRGRL_57600_8X_22118400_12T              0xF8        // 0%
#define T1_BRGRL_115200_8X_22118400_12T             0xFC        // 0%
#define T1_BRGRL_230400_8X_22118400_12T             0xFE        // 0%
#define T1_BRGRL_460800_8X_22118400_12T             0xFF        // 0%

#define T1_BRGRL_38400_8X_22118400_1T               0x70        // 0%
#define T1_BRGRL_57600_8X_22118400_1T               0xA0        // 0%
#define T1_BRGRL_115200_8X_22118400_1T              0xD0        // 0%
#define T1_BRGRL_230400_8X_22118400_1T              0xE8        // 0%
#define T1_BRGRL_460800_8X_22118400_1T              0xF4        // 0%
#define T1_BRGRL_691200_8X_22118400_1T              0xF8        // 0%
#define T1_BRGRL_921600_8X_22118400_1T              0xFA        // 0%
#define T1_BRGRL_1382400_8X_22118400_1T             0xFC        // 0%
#define T1_BRGRL_2764800_8X_22118400_1T             0xFE        // 0%
#define T1_BRGRL_5529600_8X_22118400_1T             0xFF        // 0%

// T1 12MHz
#define T1_BRGRL_2400_1X_12000000_12T               0xF3        // 0.16%
#define T1_BRGRL_4800_1X_12000000_12T               0xF9        // -6.99%
#define T1_BRGRL_9600_1X_12000000_12T               0xFD        // 8.51%

#define T1_BRGRL_2400_1X_12000000_1T                0x64        // 0.16%
#define T1_BRGRL_4800_1X_12000000_1T                0xB2        // 0.16%
#define T1_BRGRL_9600_1X_12000000_1T                0xD9        // 0.16%
#define T1_BRGRL_19200_1X_12000000_1T               0xEC        // -2.34%
#define T1_BRGRL_38400_1X_12000000_1T               0xF6        // -2.34%
#define T1_BRGRL_57600_1X_12000000_1T               0xF9        // -6.99%
#define T1_BRGRL_115200_1X_12000000_1T              0xFD        // 8.51%

#define T1_BRGRL_2400_2X_12000000_12T               0xE6        // 0.16%
#define T1_BRGRL_4800_2X_12000000_12T               0xF3        // 0.16%
#define T1_BRGRL_9600_2X_12000000_12T               0xF9        // -6.99%
#define T1_BRGRL_19200_2X_12000000_12T              0xFD        // 8.51%
#define T1_BRGRL_57600_2X_12000000_12T              0xFF        // 8.51%

#define T1_BRGRL_4800_2X_12000000_1T                0x64        // 0.16%
#define T1_BRGRL_9600_2X_12000000_1T                0xB2        // 0.16%
#define T1_BRGRL_19200_2X_12000000_1T               0xD9        // 0.16%
#define T1_BRGRL_38400_2X_12000000_1T               0xEC        // -2.34%
#define T1_BRGRL_57600_2X_12000000_1T               0xF3        // 0.16%
#define T1_BRGRL_115200_2X_12000000_1T              0xF9        // -6.99%
#define T1_BRGRL_230400_2X_12000000_1T              0xFD        // 8.51%
#define T1_BRGRL_250000_2X_12000000_1T              0xFD        // 0%
#define T1_BRGRL_750000_2X_12000000_1T              0xFF        // 0%

#define T1_BRGRL_2400_4X_12000000_12T               0xCC        // 0.16%
#define T1_BRGRL_4800_4X_12000000_12T               0xE6        // 0.16%
#define T1_BRGRL_9600_4X_12000000_12T               0xF3        // 0.16%
#define T1_BRGRL_19200_4X_12000000_12T              0xF9        // -6.99%
#define T1_BRGRL_38400_4X_12000000_12T              0xFD        // 8.51%
#define T1_BRGRL_57600_4X_12000000_12T              0xFE        // 8.51%
#define T1_BRGRL_115200_4X_12000000_12T             0xFF        // 8.51%

#define T1_BRGRL_9600_4X_12000000_1T                0x64        // 0.16%
#define T1_BRGRL_19200_4X_12000000_1T               0xB2        // 0.16%
#define T1_BRGRL_38400_4X_12000000_1T               0xD9        // 0.16%
#define T1_BRGRL_57600_4X_12000000_1T               0xE6        // 0.16%
#define T1_BRGRL_115200_4X_12000000_1T              0xF3        // 0.16%
#define T1_BRGRL_230400_4X_12000000_1T              0xF9        // -6.99%
#define T1_BRGRL_250000_4X_12000000_1T              0xFA        // 0%
#define T1_BRGRL_500000_4X_12000000_1T              0xFD        // 0%
#define T1_BRGRL_750000_4X_12000000_1T              0xFE        // 0%
#define T1_BRGRL_1500000_4X_12000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_8X_12000000_12T               0x98        // 0.16%
#define T1_BRGRL_4800_8X_12000000_12T               0xCC        // 0.16%
#define T1_BRGRL_9600_8X_12000000_12T               0xE6        // 0.16%
#define T1_BRGRL_19200_8X_12000000_12T              0xF3        // 0.16%
#define T1_BRGRL_38400_8X_12000000_12T              0xF9        // -6.99%
#define T1_BRGRL_57600_8X_12000000_12T              0xFC        // 8.51%
#define T1_BRGRL_115200_8X_12000000_12T             0xFE        // 8.51%
#define T1_BRGRL_230400_8X_12000000_12T             0xFF        // 8.51%
#define T1_BRGRL_250000_8X_12000000_12T             0xFF        // 0%

#define T1_BRGRL_19200_8X_12000000_1T               0x64        // 0.16%
#define T1_BRGRL_38400_8X_12000000_1T               0xB2        // 0.16%
#define T1_BRGRL_57600_8X_12000000_1T               0xCC        // 0.16%
#define T1_BRGRL_115200_8X_12000000_1T              0xE6        // 0.16%
#define T1_BRGRL_230400_8X_12000000_1T              0xF3        // 0.16%
#define T1_BRGRL_250000_8X_12000000_1T              0xF4        // 0%
#define T1_BRGRL_500000_8X_12000000_1T              0xFA        // 0%
#define T1_BRGRL_750000_8X_12000000_1T              0xFC        // 0%
#define T1_BRGRL_1000000_8X_12000000_1T             0xFD        // 0%
#define T1_BRGRL_1500000_8X_12000000_1T             0xFE        // 0%
#define T1_BRGRL_3000000_8X_12000000_1T             0xFF        // 0%

// T1 24MHz
#define T1_BRGRL_2400_1X_24000000_12T               0xE6        // 0.16%
#define T1_BRGRL_4800_1X_24000000_12T               0xF3        // 0.16%
#define T1_BRGRL_9600_1X_24000000_12T               0xF9        // -6.99%
#define T1_BRGRL_19200_1X_24000000_12T              0xFD        // 8.51%
#define T1_BRGRL_57600_1X_24000000_12T              0xFF        // 8.51%

#define T1_BRGRL_4800_1X_24000000_1T                0x64        // 0.16%
#define T1_BRGRL_9600_1X_24000000_1T                0xB2        // 0.16%
#define T1_BRGRL_19200_1X_24000000_1T               0xD9        // 0.16%
#define T1_BRGRL_38400_1X_24000000_1T               0xEC        // -2.34%
#define T1_BRGRL_57600_1X_24000000_1T               0xF3        // 0.16%
#define T1_BRGRL_115200_1X_24000000_1T              0xF9        // -6.99%
#define T1_BRGRL_230400_1X_24000000_1T              0xFD        // 8.51%
#define T1_BRGRL_250000_1X_24000000_1T              0xFD        // 0%
#define T1_BRGRL_750000_1X_24000000_1T              0xFF        // 0%

#define T1_BRGRL_2400_2X_24000000_12T               0xCC        // 0.16%
#define T1_BRGRL_4800_2X_24000000_12T               0xE6        // 0.16%
#define T1_BRGRL_9600_2X_24000000_12T               0xF3        // 0.16%
#define T1_BRGRL_19200_2X_24000000_12T              0xF9        // -6.99%
#define T1_BRGRL_38400_2X_24000000_12T              0xFD        // 8.51%
#define T1_BRGRL_57600_2X_24000000_12T              0xFE        // 8.51%
#define T1_BRGRL_115200_2X_24000000_12T             0xFF        // 8.51%

#define T1_BRGRL_9600_2X_24000000_1T                0x64        // 0.16%
#define T1_BRGRL_19200_2X_24000000_1T               0xB2        // 0.16%
#define T1_BRGRL_38400_2X_24000000_1T               0xD9        // 0.16%
#define T1_BRGRL_57600_2X_24000000_1T               0xE6        // 0.16%
#define T1_BRGRL_115200_2X_24000000_1T              0xF3        // 0.16%
#define T1_BRGRL_230400_2X_24000000_1T              0xF9        // -6.99%
#define T1_BRGRL_250000_2X_24000000_1T              0xFA        // 0%
#define T1_BRGRL_500000_2X_24000000_1T              0xFD        // 0%
#define T1_BRGRL_750000_2X_24000000_1T              0xFE        // 0%
#define T1_BRGRL_1500000_2X_24000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_4X_24000000_12T               0x98        // 0.16%
#define T1_BRGRL_4800_4X_24000000_12T               0xCC        // 0.16%
#define T1_BRGRL_9600_4X_24000000_12T               0xE6        // 0.16%
#define T1_BRGRL_19200_4X_24000000_12T              0xF3        // 0.16%
#define T1_BRGRL_38400_4X_24000000_12T              0xF9        // -6.99%
#define T1_BRGRL_57600_4X_24000000_12T              0xFC        // 8.51%
#define T1_BRGRL_115200_4X_24000000_12T             0xFE        // 8.51%
#define T1_BRGRL_230400_4X_24000000_12T             0xFF        // 8.51%
#define T1_BRGRL_250000_4X_24000000_12T             0xFF        // 0%

#define T1_BRGRL_19200_4X_24000000_1T               0x64        // 0.16%
#define T1_BRGRL_38400_4X_24000000_1T               0xB2        // 0.16%
#define T1_BRGRL_57600_4X_24000000_1T               0xCC        // 0.16%
#define T1_BRGRL_115200_4X_24000000_1T              0xE6        // 0.16%
#define T1_BRGRL_230400_4X_24000000_1T              0xF3        // 0.16%
#define T1_BRGRL_250000_4X_24000000_1T              0xF4        // 0%
#define T1_BRGRL_500000_4X_24000000_1T              0xFA        // 0%
#define T1_BRGRL_750000_4X_24000000_1T              0xFC        // 0%
#define T1_BRGRL_1000000_4X_24000000_1T             0xFD        // 0%
#define T1_BRGRL_1500000_4X_24000000_1T             0xFE        // 0%
#define T1_BRGRL_3000000_4X_24000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_8X_24000000_12T               0x30        // 0.16%
#define T1_BRGRL_4800_8X_24000000_12T               0x98        // 0.16%
#define T1_BRGRL_9600_8X_24000000_12T               0xCC        // 0.16%
#define T1_BRGRL_19200_8X_24000000_12T              0xE6        // 0.16%
#define T1_BRGRL_38400_8X_24000000_12T              0xF3        // 0.16%
#define T1_BRGRL_57600_8X_24000000_12T              0xF7        // -3.55%
#define T1_BRGRL_115200_8X_24000000_12T             0xFC        // 8.51%
#define T1_BRGRL_230400_8X_24000000_12T             0xFE        // 8.51%
#define T1_BRGRL_250000_8X_24000000_12T             0xFE        // 0%
#define T1_BRGRL_500000_8X_24000000_12T             0xFF        // 0%

#define T1_BRGRL_38400_8X_24000000_1T               0x64        // 0.16%
#define T1_BRGRL_57600_8X_24000000_1T               0x98        // 0.16%
#define T1_BRGRL_115200_8X_24000000_1T              0xCC        // 0.16%
#define T1_BRGRL_230400_8X_24000000_1T              0xE6        // 0.16%
#define T1_BRGRL_250000_8X_24000000_1T              0xE8        // 0%
#define T1_BRGRL_500000_8X_24000000_1T              0xF4        // 0%
#define T1_BRGRL_750000_8X_24000000_1T              0xF8        // 0%
#define T1_BRGRL_1000000_8X_24000000_1T             0xFA        // 0%
#define T1_BRGRL_1500000_8X_24000000_1T             0xFC        // 0%
#define T1_BRGRL_3000000_8X_24000000_1T             0xFE        // 0%
#define T1_BRGRL_6000000_8X_24000000_1T             0xFF        // 0%

// T1 32MHz
#define T1_BRGRL_2400_1X_32000000_12T               0xDD        // -0.79%
#define T1_BRGRL_4800_1X_32000000_12T               0xEF        // 2.12%
#define T1_BRGRL_9600_1X_32000000_12T               0xF7        // -3.55%
#define T1_BRGRL_19200_1X_32000000_12T              0xFC        // 8.51%
#define T1_BRGRL_38400_1X_32000000_12T              0xFE        // 8.51%

#define T1_BRGRL_4800_1X_32000000_1T                0x30        // 0.16%
#define T1_BRGRL_9600_1X_32000000_1T                0x98        // 0.16%
#define T1_BRGRL_19200_1X_32000000_1T               0xCC        // 0.16%
#define T1_BRGRL_38400_1X_32000000_1T               0xE6        // 0.16%
#define T1_BRGRL_57600_1X_32000000_1T               0xEF        // 2.12%
#define T1_BRGRL_115200_1X_32000000_1T              0xF7        // -3.55%
#define T1_BRGRL_230400_1X_32000000_1T              0xFC        // 8.51%
#define T1_BRGRL_250000_1X_32000000_1T              0xFC        // 0%
#define T1_BRGRL_500000_1X_32000000_1T              0xFE        // 0%
#define T1_BRGRL_1000000_1X_32000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_2X_32000000_12T               0xBB        // 0.64%
#define T1_BRGRL_4800_2X_32000000_12T               0xDD        // -0.79%
#define T1_BRGRL_9600_2X_32000000_12T               0xEF        // 2.12%
#define T1_BRGRL_19200_2X_32000000_12T              0xF7        // -3.55%
#define T1_BRGRL_38400_2X_32000000_12T              0xFC        // 8.51%
#define T1_BRGRL_57600_2X_32000000_12T              0xFD        // -3.55%

#define T1_BRGRL_9600_2X_32000000_1T                0x30        // 0.16%
#define T1_BRGRL_19200_2X_32000000_1T               0x98        // 0.16%
#define T1_BRGRL_38400_2X_32000000_1T               0xCC        // 0.16%
#define T1_BRGRL_57600_2X_32000000_1T               0xDD        // -0.79%
#define T1_BRGRL_115200_2X_32000000_1T              0xEF        // 2.12%
#define T1_BRGRL_230400_2X_32000000_1T              0xF7        // -3.55%
#define T1_BRGRL_250000_2X_32000000_1T              0xF8        // 0%
#define T1_BRGRL_500000_2X_32000000_1T              0xFC        // 0%
#define T1_BRGRL_1000000_2X_32000000_1T             0xFE        // 0%

#define T1_BRGRL_2400_4X_32000000_12T               0x75        // -0.08%
#define T1_BRGRL_4800_4X_32000000_12T               0xBB        // 0.64%
#define T1_BRGRL_9600_4X_32000000_12T               0xDD        // -0.79%
#define T1_BRGRL_19200_4X_32000000_12T              0xEF        // 2.12%
#define T1_BRGRL_38400_4X_32000000_12T              0xF7        // -3.55%
#define T1_BRGRL_57600_4X_32000000_12T              0xFA        // -3.55%
#define T1_BRGRL_115200_4X_32000000_12T             0xFD        // -3.55%

#define T1_BRGRL_19200_4X_32000000_1T               0x30        // 0.16%
#define T1_BRGRL_38400_4X_32000000_1T               0x98        // 0.16%
#define T1_BRGRL_57600_4X_32000000_1T               0xBB        // 0.64%
#define T1_BRGRL_115200_4X_32000000_1T              0xDD        // -0.79%
#define T1_BRGRL_230400_4X_32000000_1T              0xEF        // 2.12%
#define T1_BRGRL_250000_4X_32000000_1T              0xF0        // 0%
#define T1_BRGRL_500000_4X_32000000_1T              0xF8        // 0%
#define T1_BRGRL_750000_4X_32000000_1T              0xFB        // 6.67%
#define T1_BRGRL_1000000_4X_32000000_1T             0xFC        // 0%

#define T1_BRGRL_4800_8X_32000000_12T               0x75        // -0.08%
#define T1_BRGRL_9600_8X_32000000_12T               0xBB        // 0.64%
#define T1_BRGRL_19200_8X_32000000_12T              0xDD        // -0.79%
#define T1_BRGRL_38400_8X_32000000_12T              0xEF        // 2.12%
#define T1_BRGRL_57600_8X_32000000_12T              0xF4        // -3.55%
#define T1_BRGRL_115200_8X_32000000_12T             0xFA        // -3.55%
#define T1_BRGRL_230400_8X_32000000_12T             0xFD        // -3.55%

#define T1_BRGRL_38400_8X_32000000_1T               0x30        // 0.16%
#define T1_BRGRL_57600_8X_32000000_1T               0x75        // -0.08%
#define T1_BRGRL_115200_8X_32000000_1T              0xBB        // 0.64%
#define T1_BRGRL_230400_8X_32000000_1T              0xDD        // -0.79%
#define T1_BRGRL_250000_8X_32000000_1T              0xE0        // 0%
#define T1_BRGRL_500000_8X_32000000_1T              0xF0        // 0%
#define T1_BRGRL_750000_8X_32000000_1T              0xF5        // -3.03%
#define T1_BRGRL_1000000_8X_32000000_1T             0xF8        // 0%
#define T1_BRGRL_1500000_8X_32000000_1T             0xFB        // 6.67%

// T1 36MHz
#define T1_BRGRL_2400_1X_36000000_12T               0xD9        // 0.16%
#define T1_BRGRL_4800_1X_36000000_12T               0xEC        // -2.34%
#define T1_BRGRL_9600_1X_36000000_12T               0xF6        // -2.34%
#define T1_BRGRL_19200_1X_36000000_12T              0xFB        // -2.34%

#define T1_BRGRL_4800_1X_36000000_1T                0x16        // 0.16%
#define T1_BRGRL_9600_1X_36000000_1T                0x8B        // 0.16%
#define T1_BRGRL_19200_1X_36000000_1T               0xC5        // -0.69%
#define T1_BRGRL_38400_1X_36000000_1T               0xE3        // 1.02%
#define T1_BRGRL_57600_1X_36000000_1T               0xEC        // -2.34%
#define T1_BRGRL_115200_1X_36000000_1T              0xF6        // -2.34%
#define T1_BRGRL_230400_1X_36000000_1T              0xFB        // -2.34%

#define T1_BRGRL_2400_2X_36000000_12T               0xB2        // 0.16%
#define T1_BRGRL_4800_2X_36000000_12T               0xD9        // 0.16%
#define T1_BRGRL_9600_2X_36000000_12T               0xEC        // -2.34%
#define T1_BRGRL_19200_2X_36000000_12T              0xF6        // -2.34%
#define T1_BRGRL_38400_2X_36000000_12T              0xFB        // -2.34%
#define T1_BRGRL_57600_2X_36000000_12T              0xFD        // 8.51%

#define T1_BRGRL_9600_2X_36000000_1T                0x16        // 0.16%
#define T1_BRGRL_19200_2X_36000000_1T               0x8B        // 0.16%
#define T1_BRGRL_38400_2X_36000000_1T               0xC5        // -0.69%
#define T1_BRGRL_57600_2X_36000000_1T               0xD9        // 0.16%
#define T1_BRGRL_115200_2X_36000000_1T              0xEC        // -2.34%
#define T1_BRGRL_230400_2X_36000000_1T              0xF6        // -2.34%
#define T1_BRGRL_250000_2X_36000000_1T              0xF7        // 0%

#define T1_BRGRL_750000_2X_36000000_1T              0xFD        // 0%

#define T1_BRGRL_2400_4X_36000000_12T               0x64        // 0.16%
#define T1_BRGRL_4800_4X_36000000_12T               0xB2        // 0.16%
#define T1_BRGRL_9600_4X_36000000_12T               0xD9        // 0.16%
#define T1_BRGRL_19200_4X_36000000_12T              0xEC        // -2.34%
#define T1_BRGRL_38400_4X_36000000_12T              0xF6        // -2.34%
#define T1_BRGRL_57600_4X_36000000_12T              0xF9        // -6.99%
#define T1_BRGRL_115200_4X_36000000_12T             0xFD        // 8.51%

#define T1_BRGRL_19200_4X_36000000_1T               0x16        // 0.16%
#define T1_BRGRL_38400_4X_36000000_1T               0x8B        // 0.16%
#define T1_BRGRL_57600_4X_36000000_1T               0xB2        // 0.16%
#define T1_BRGRL_115200_4X_36000000_1T              0xD9        // 0.16%
#define T1_BRGRL_230400_4X_36000000_1T              0xEC        // -2.34%
#define T1_BRGRL_250000_4X_36000000_1T              0xEE        // 0%
#define T1_BRGRL_500000_4X_36000000_1T              0xF7        // 0%
#define T1_BRGRL_750000_4X_36000000_1T              0xFA        // 0%

#define T1_BRGRL_1500000_4X_36000000_1T             0xFD        // 0%

#define T1_BRGRL_4500000_4X_36000000_1T             0xFF        // 0%


#define T1_BRGRL_4800_8X_36000000_12T               0x64        // 0.16%
#define T1_BRGRL_9600_8X_36000000_12T               0xB2        // 0.16%
#define T1_BRGRL_19200_8X_36000000_12T              0xD9        // 0.16%
#define T1_BRGRL_38400_8X_36000000_12T              0xEC        // -2.34%
#define T1_BRGRL_57600_8X_36000000_12T              0xF3        // 0.16%
#define T1_BRGRL_115200_8X_36000000_12T             0xF9        // -6.99%
#define T1_BRGRL_230400_8X_36000000_12T             0xFD        // 8.51%
#define T1_BRGRL_250000_8X_36000000_12T             0xFD        // 0%

#define T1_BRGRL_750000_8X_36000000_12T             0xFF        // 0%

#define T1_BRGRL_38400_8X_36000000_1T               0x16        // 0.16%
#define T1_BRGRL_57600_8X_36000000_1T               0x64        // 0.16%
#define T1_BRGRL_115200_8X_36000000_1T              0xB2        // 0.16%
#define T1_BRGRL_230400_8X_36000000_1T              0xD9        // 0.16%
#define T1_BRGRL_250000_8X_36000000_1T              0xDC        // 0%
#define T1_BRGRL_500000_8X_36000000_1T              0xEE        // 0%
#define T1_BRGRL_750000_8X_36000000_1T              0xF4        // 0%
#define T1_BRGRL_1000000_8X_36000000_1T             0xF7        // 0%
#define T1_BRGRL_1500000_8X_36000000_1T             0xFA        // 0%
#define T1_BRGRL_3000000_8X_36000000_1T             0xFD        // 0%
#define T1_BRGRL_4500000_8X_36000000_1T             0xFE        // 0%


// T1 48MHz
#define T1_BRGRL_2400_1X_48000000_12T               0xCC        // 0.16%
#define T1_BRGRL_4800_1X_48000000_12T               0xE6        // 0.16%
#define T1_BRGRL_9600_1X_48000000_12T               0xF3        // 0.16%
#define T1_BRGRL_19200_1X_48000000_12T              0xF9        // -6.99%
#define T1_BRGRL_38400_1X_48000000_12T              0xFD        // 8.51%
#define T1_BRGRL_57600_1X_48000000_12T              0xFE        // 8.51%
#define T1_BRGRL_115200_1X_48000000_12T             0xFF        // 8.51%

#define T1_BRGRL_9600_1X_48000000_1T                0x64        // 0.16%
#define T1_BRGRL_19200_1X_48000000_1T               0xB2        // 0.16%
#define T1_BRGRL_38400_1X_48000000_1T               0xD9        // 0.16%
#define T1_BRGRL_57600_1X_48000000_1T               0xE6        // 0.16%
#define T1_BRGRL_115200_1X_48000000_1T              0xF3        // 0.16%
#define T1_BRGRL_230400_1X_48000000_1T              0xF9        // -6.99%
#define T1_BRGRL_250000_1X_48000000_1T              0xFA        // 0%
#define T1_BRGRL_500000_1X_48000000_1T              0xFD        // 0%
#define T1_BRGRL_750000_1X_48000000_1T              0xFE        // 0%
#define T1_BRGRL_1500000_1X_48000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_2X_48000000_12T               0x98        // 0.16%
#define T1_BRGRL_4800_2X_48000000_12T               0xCC        // 0.16%
#define T1_BRGRL_9600_2X_48000000_12T               0xE6        // 0.16%
#define T1_BRGRL_19200_2X_48000000_12T              0xF3        // 0.16%
#define T1_BRGRL_38400_2X_48000000_12T              0xF9        // -6.99%
#define T1_BRGRL_57600_2X_48000000_12T              0xFC        // 8.51%
#define T1_BRGRL_115200_2X_48000000_12T             0xFE        // 8.51%
#define T1_BRGRL_230400_2X_48000000_12T             0xFF        // 8.51%
#define T1_BRGRL_250000_2X_48000000_12T             0xFF        // 0%

#define T1_BRGRL_19200_2X_48000000_1T               0x64        // 0.16%
#define T1_BRGRL_38400_2X_48000000_1T               0xB2        // 0.16%
#define T1_BRGRL_57600_2X_48000000_1T               0xCC        // 0.16%
#define T1_BRGRL_115200_2X_48000000_1T              0xE6        // 0.16%
#define T1_BRGRL_230400_2X_48000000_1T              0xF3        // 0.16%
#define T1_BRGRL_250000_2X_48000000_1T              0xF4        // 0%
#define T1_BRGRL_500000_2X_48000000_1T              0xFA        // 0%
#define T1_BRGRL_750000_2X_48000000_1T              0xFC        // 0%
#define T1_BRGRL_1000000_2X_48000000_1T             0xFD        // 0%
#define T1_BRGRL_1500000_2X_48000000_1T             0xFE        // 0%
#define T1_BRGRL_3000000_2X_48000000_1T             0xFF        // 0%

#define T1_BRGRL_2400_4X_48000000_12T               0x30        // 0.16%
#define T1_BRGRL_4800_4X_48000000_12T               0x98        // 0.16%
#define T1_BRGRL_9600_4X_48000000_12T               0xCC        // 0.16%
#define T1_BRGRL_19200_4X_48000000_12T              0xE6        // 0.16%
#define T1_BRGRL_38400_4X_48000000_12T              0xF3        // 0.16%
#define T1_BRGRL_57600_4X_48000000_12T              0xF7        // -3.55%
#define T1_BRGRL_115200_4X_48000000_12T             0xFC        // 8.51%
#define T1_BRGRL_230400_4X_48000000_12T             0xFE        // 8.51%
#define T1_BRGRL_250000_4X_48000000_12T             0xFE        // 0%
#define T1_BRGRL_500000_4X_48000000_12T             0xFF        // 0%

#define T1_BRGRL_38400_4X_48000000_1T               0x64        // 0.16%
#define T1_BRGRL_57600_4X_48000000_1T               0x98        // 0.16%
#define T1_BRGRL_115200_4X_48000000_1T              0xCC        // 0.16%
#define T1_BRGRL_230400_4X_48000000_1T              0xE6        // 0.16%
#define T1_BRGRL_250000_4X_48000000_1T              0xE8        // 0%
#define T1_BRGRL_500000_4X_48000000_1T              0xF4        // 0%
#define T1_BRGRL_750000_4X_48000000_1T              0xF8        // 0%
#define T1_BRGRL_1000000_4X_48000000_1T             0xFA        // 0%
#define T1_BRGRL_1500000_4X_48000000_1T             0xFC        // 0%
#define T1_BRGRL_3000000_4X_48000000_1T             0xFE        // 0%
#define T1_BRGRL_6000000_4X_48000000_1T             0xFF        // 0%

#define T1_BRGRL_4800_8X_48000000_12T               0x30        // 0.16%
#define T1_BRGRL_9600_8X_48000000_12T               0x98        // 0.16%
#define T1_BRGRL_19200_8X_48000000_12T              0xCC        // 0.16%
#define T1_BRGRL_38400_8X_48000000_12T              0xE6        // 0.16%
#define T1_BRGRL_57600_8X_48000000_12T              0xEF        // 2.12%
#define T1_BRGRL_115200_8X_48000000_12T             0xF7        // -3.55%
#define T1_BRGRL_230400_8X_48000000_12T             0xFC        // 8.51%
#define T1_BRGRL_250000_8X_48000000_12T             0xFC        // 0%
#define T1_BRGRL_500000_8X_48000000_12T             0xFE        // 0%
#define T1_BRGRL_1000000_8X_48000000_12T            0xFF        // 0%

#define T1_BRGRL_57600_8X_48000000_1T               0x30        // 0.16%
#define T1_BRGRL_115200_8X_48000000_1T              0x98        // 0.16%
#define T1_BRGRL_230400_8X_48000000_1T              0xCC        // 0.16%
#define T1_BRGRL_250000_8X_48000000_1T              0xD0        // 0%
#define T1_BRGRL_500000_8X_48000000_1T              0xE8        // 0%
#define T1_BRGRL_750000_8X_48000000_1T              0xF0        // 0%
#define T1_BRGRL_1000000_8X_48000000_1T             0xF4        // 0%
#define T1_BRGRL_1500000_8X_48000000_1T             0xF8        // 0%
#define T1_BRGRL_3000000_8X_48000000_1T             0xFC        // 0%
#define T1_BRGRL_6000000_8X_48000000_1T             0xFE        // 0%

/*
*************************************************************************************
*/
/*
*************************************************************************************
*  UART T2 波特率重载值
*
*************************************************************************************
*/
// T2 11.0592MHz
#define T2_BRGRL_2400_1X_11059200_12T               0xFF70        // 0%
#define T2_BRGRL_4800_1X_11059200_12T               0xFFB8        // 0%
#define T2_BRGRL_9600_1X_11059200_12T               0xFFDC        // 0%
#define T2_BRGRL_19200_1X_11059200_12T              0xFFEE        // 0%
#define T2_BRGRL_38400_1X_11059200_12T              0xFFF7        // 0%
#define T2_BRGRL_57600_1X_11059200_12T              0xFFFA        // 0%
#define T2_BRGRL_115200_1X_11059200_12T             0xFFFD        // 0%

#define T2_BRGRL_2400_1X_11059200_1T                0xFEE0        // 0%
#define T2_BRGRL_4800_1X_11059200_1T                0xFF70        // 0%
#define T2_BRGRL_9600_1X_11059200_1T                0xFFB8        // 0%
#define T2_BRGRL_19200_1X_11059200_1T               0xFFDC        // 0%
#define T2_BRGRL_38400_1X_11059200_1T               0xFFEE        // 0%
#define T2_BRGRL_57600_1X_11059200_1T               0xFFF4        // 0%
#define T2_BRGRL_115200_1X_11059200_1T              0xFFFA        // 0%
#define T2_BRGRL_230400_1X_11059200_1T              0xFFFD        // 0%
#define T2_BRGRL_691200_1X_11059200_1T              0xFFFF        // 0%

#define T2_BRGRL_2400_2X_11059200_12T               0xFEE0        // 0%
#define T2_BRGRL_4800_2X_11059200_12T               0xFF70        // 0%
#define T2_BRGRL_9600_2X_11059200_12T               0xFFB8        // 0%
#define T2_BRGRL_19200_2X_11059200_12T              0xFFDC        // 0%
#define T2_BRGRL_38400_2X_11059200_12T              0xFFEE        // 0%
#define T2_BRGRL_57600_2X_11059200_12T              0xFFF4        // 0%
#define T2_BRGRL_115200_2X_11059200_12T             0xFFFA        // 0%
#define T2_BRGRL_230400_2X_11059200_12T             0xFFFD        // 0%
#define T2_BRGRL_691200_2X_11059200_12T             0xFFFF        // 0%

#define T2_BRGRL_2400_2X_11059200_1T                0xFDC0        // 0%
#define T2_BRGRL_4800_2X_11059200_1T                0xFEE0        // 0%
#define T2_BRGRL_9600_2X_11059200_1T                0xFF70        // 0%
#define T2_BRGRL_19200_2X_11059200_1T               0xFFB8        // 0%
#define T2_BRGRL_38400_2X_11059200_1T               0xFFDC        // 0%
#define T2_BRGRL_57600_2X_11059200_1T               0xFFE8        // 0%
#define T2_BRGRL_115200_2X_11059200_1T              0xFFF4        // 0%
#define T2_BRGRL_230400_2X_11059200_1T              0xFFFA        // 0%
#define T2_BRGRL_460800_2X_11059200_1T              0xFFFD        // 0%
#define T2_BRGRL_691200_2X_11059200_1T              0xFFFE        // 0%
#define T2_BRGRL_1382400_2X_11059200_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_4X_11059200_12T               0xFDC0        // 0%
#define T2_BRGRL_4800_4X_11059200_12T               0xFEE0        // 0%
#define T2_BRGRL_9600_4X_11059200_12T               0xFF70        // 0%
#define T2_BRGRL_19200_4X_11059200_12T              0xFFB8        // 0%
#define T2_BRGRL_38400_4X_11059200_12T              0xFFDC        // 0%
#define T2_BRGRL_57600_4X_11059200_12T              0xFFE8        // 0%
#define T2_BRGRL_115200_4X_11059200_12T             0xFFF4        // 0%
#define T2_BRGRL_230400_4X_11059200_12T             0xFFFA        // 0%
#define T2_BRGRL_460800_4X_11059200_12T             0xFFFD        // 0%
#define T2_BRGRL_691200_4X_11059200_12T             0xFFFE        // 0%
#define T2_BRGRL_1382400_4X_11059200_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_4X_11059200_1T                0xFB80        // 0%
#define T2_BRGRL_4800_4X_11059200_1T                0xFDC0        // 0%
#define T2_BRGRL_9600_4X_11059200_1T                0xFEE0        // 0%
#define T2_BRGRL_19200_4X_11059200_1T               0xFF70        // 0%
#define T2_BRGRL_38400_4X_11059200_1T               0xFFB8        // 0%
#define T2_BRGRL_57600_4X_11059200_1T               0xFFD0        // 0%
#define T2_BRGRL_115200_4X_11059200_1T              0xFFE8        // 0%
#define T2_BRGRL_230400_4X_11059200_1T              0xFFF4        // 0%
#define T2_BRGRL_460800_4X_11059200_1T              0xFFFA        // 0%
#define T2_BRGRL_691200_4X_11059200_1T              0xFFFC        // 0%
#define T2_BRGRL_921600_4X_11059200_1T              0xFFFD        // 0%
#define T2_BRGRL_1382400_4X_11059200_1T             0xFFFE        // 0%
#define T2_BRGRL_2764800_4X_11059200_1T             0xFFFF        // 0%

// T2 12MHz
#define T2_BRGRL_2400_1X_12000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_4800_1X_12000000_12T               0xFFB2        // 0.16%
#define T2_BRGRL_9600_1X_12000000_12T               0xFFD9        // 0.16%
#define T2_BRGRL_19200_1X_12000000_12T              0xFFEC        // -2.34%
#define T2_BRGRL_38400_1X_12000000_12T              0xFFF6        // -2.34%
#define T2_BRGRL_57600_1X_12000000_12T              0xFFF9        // -6.99%
#define T2_BRGRL_115200_1X_12000000_12T             0xFFFD        // 8.51%

#define T2_BRGRL_2400_1X_12000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_4800_1X_12000000_1T                0xFF64        // 0.16%
#define T2_BRGRL_9600_1X_12000000_1T                0xFFB2        // 0.16%
#define T2_BRGRL_19200_1X_12000000_1T               0xFFD9        // 0.16%
#define T2_BRGRL_38400_1X_12000000_1T               0xFFEC        // -2.34%
#define T2_BRGRL_57600_1X_12000000_1T               0xFFF3        // 0.16%
#define T2_BRGRL_115200_1X_12000000_1T              0xFFF9        // -6.99%
#define T2_BRGRL_230400_1X_12000000_1T              0xFFFD        // 8.51%
#define T2_BRGRL_250000_1X_12000000_1T              0xFFFD        // 0%
#define T2_BRGRL_750000_1X_12000000_1T              0xFFFF        // 0%

#define T2_BRGRL_2400_2X_12000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_4800_2X_12000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_9600_2X_12000000_12T               0xFFB2        // 0.16%
#define T2_BRGRL_19200_2X_12000000_12T              0xFFD9        // 0.16%
#define T2_BRGRL_38400_2X_12000000_12T              0xFFEC        // -2.34%
#define T2_BRGRL_57600_2X_12000000_12T              0xFFF3        // 0.16%
#define T2_BRGRL_115200_2X_12000000_12T             0xFFF9        // -6.99%
#define T2_BRGRL_230400_2X_12000000_12T             0xFFFD        // 8.51%
#define T2_BRGRL_250000_2X_12000000_12T             0xFFFD        // 0%
#define T2_BRGRL_750000_2X_12000000_12T             0xFFFF        // 0%

#define T2_BRGRL_2400_2X_12000000_1T                0xFD8F        // 0%
#define T2_BRGRL_4800_2X_12000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_9600_2X_12000000_1T                0xFF64        // 0.16%
#define T2_BRGRL_19200_2X_12000000_1T               0xFFB2        // 0.16%
#define T2_BRGRL_38400_2X_12000000_1T               0xFFD9        // 0.16%
#define T2_BRGRL_57600_2X_12000000_1T               0xFFE6        // 0.16%
#define T2_BRGRL_115200_2X_12000000_1T              0xFFF3        // 0.16%
#define T2_BRGRL_230400_2X_12000000_1T              0xFFF9        // -6.99%
#define T2_BRGRL_250000_2X_12000000_1T              0xFFFA        // 0%
#define T2_BRGRL_500000_2X_12000000_1T              0xFFFD        // 0%
#define T2_BRGRL_750000_2X_12000000_1T              0xFFFE        // 0%
#define T2_BRGRL_1500000_2X_12000000_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_4X_12000000_12T               0xFD8F        // 0%
#define T2_BRGRL_4800_4X_12000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_9600_4X_12000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_19200_4X_12000000_12T              0xFFB2        // 0.16%
#define T2_BRGRL_38400_4X_12000000_12T              0xFFD9        // 0.16%
#define T2_BRGRL_57600_4X_12000000_12T              0xFFE6        // 0.16%
#define T2_BRGRL_115200_4X_12000000_12T             0xFFF3        // 0.16%
#define T2_BRGRL_230400_4X_12000000_12T             0xFFF9        // -6.99%
#define T2_BRGRL_250000_4X_12000000_12T             0xFFFA        // 0%
#define T2_BRGRL_500000_4X_12000000_12T             0xFFFD        // 0%
#define T2_BRGRL_750000_4X_12000000_12T             0xFFFE        // 0%
#define T2_BRGRL_1500000_4X_12000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_4X_12000000_1T                0xFB1E        // 0%
#define T2_BRGRL_4800_4X_12000000_1T                0xFD8F        // 0%
#define T2_BRGRL_9600_4X_12000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_19200_4X_12000000_1T               0xFF64        // 0.16%
#define T2_BRGRL_38400_4X_12000000_1T               0xFFB2        // 0.16%
#define T2_BRGRL_57600_4X_12000000_1T               0xFFCC        // 0.16%
#define T2_BRGRL_115200_4X_12000000_1T              0xFFE6        // 0.16%
#define T2_BRGRL_230400_4X_12000000_1T              0xFFF3        // 0.16%
#define T2_BRGRL_250000_4X_12000000_1T              0xFFF4        // 0%
#define T2_BRGRL_500000_4X_12000000_1T              0xFFFA        // 0%
#define T2_BRGRL_750000_4X_12000000_1T              0xFFFC        // 0%
#define T2_BRGRL_1000000_4X_12000000_1T             0xFFFD        // 0%
#define T2_BRGRL_1500000_4X_12000000_1T             0xFFFE        // 0%
#define T2_BRGRL_3000000_4X_12000000_1T             0xFFFF        // 0%

// T2 22.1184MHz
#define T2_BRGRL_2400_1X_22118400_12T               0xFEE0        // 0%
#define T2_BRGRL_4800_1X_22118400_12T               0xFF70        // 0%
#define T2_BRGRL_9600_1X_22118400_12T               0xFFB8        // 0%
#define T2_BRGRL_19200_1X_22118400_12T              0xFFDC        // 0%
#define T2_BRGRL_38400_1X_22118400_12T              0xFFEE        // 0%
#define T2_BRGRL_57600_1X_22118400_12T              0xFFF4        // 0%
#define T2_BRGRL_115200_1X_22118400_12T             0xFFFA        // 0%
#define T2_BRGRL_230400_1X_22118400_12T             0xFFFD        // 0%
#define T2_BRGRL_691200_1X_22118400_12T             0xFFFF        // 0%

#define T2_BRGRL_2400_1X_22118400_1T                0xFDC0        // 0%
#define T2_BRGRL_4800_1X_22118400_1T                0xFEE0        // 0%
#define T2_BRGRL_9600_1X_22118400_1T                0xFF70        // 0%
#define T2_BRGRL_19200_1X_22118400_1T               0xFFB8        // 0%
#define T2_BRGRL_38400_1X_22118400_1T               0xFFDC        // 0%
#define T2_BRGRL_57600_1X_22118400_1T               0xFFE8        // 0%
#define T2_BRGRL_115200_1X_22118400_1T              0xFFF4        // 0%
#define T2_BRGRL_230400_1X_22118400_1T              0xFFFA        // 0%
#define T2_BRGRL_460800_1X_22118400_1T              0xFFFD        // 0%
#define T2_BRGRL_691200_1X_22118400_1T              0xFFFE        // 0%
#define T2_BRGRL_1382400_1X_22118400_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_2X_22118400_12T               0xFDC0        // 0%
#define T2_BRGRL_4800_2X_22118400_12T               0xFEE0        // 0%
#define T2_BRGRL_9600_2X_22118400_12T               0xFF70        // 0%
#define T2_BRGRL_19200_2X_22118400_12T              0xFFB8        // 0%
#define T2_BRGRL_38400_2X_22118400_12T              0xFFDC        // 0%
#define T2_BRGRL_57600_2X_22118400_12T              0xFFE8        // 0%
#define T2_BRGRL_115200_2X_22118400_12T             0xFFF4        // 0%
#define T2_BRGRL_230400_2X_22118400_12T             0xFFFA        // 0%
#define T2_BRGRL_460800_2X_22118400_12T             0xFFFD        // 0%
#define T2_BRGRL_691200_2X_22118400_12T             0xFFFE        // 0%
#define T2_BRGRL_1382400_2X_22118400_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_2X_22118400_1T                0xFB80        // 0%
#define T2_BRGRL_4800_2X_22118400_1T                0xFDC0        // 0%
#define T2_BRGRL_9600_2X_22118400_1T                0xFEE0        // 0%
#define T2_BRGRL_19200_2X_22118400_1T               0xFF70        // 0%
#define T2_BRGRL_38400_2X_22118400_1T               0xFFB8        // 0%
#define T2_BRGRL_57600_2X_22118400_1T               0xFFD0        // 0%
#define T2_BRGRL_115200_2X_22118400_1T              0xFFE8        // 0%
#define T2_BRGRL_230400_2X_22118400_1T              0xFFF4        // 0%
#define T2_BRGRL_460800_2X_22118400_1T              0xFFFA        // 0%
#define T2_BRGRL_691200_2X_22118400_1T              0xFFFC        // 0%
#define T2_BRGRL_921600_2X_22118400_1T              0xFFFD        // 0%
#define T2_BRGRL_1382400_2X_22118400_1T             0xFFFE        // 0%
#define T2_BRGRL_2764800_2X_22118400_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_4X_22118400_12T               0xFB80        // 0%
#define T2_BRGRL_4800_4X_22118400_12T               0xFDC0        // 0%
#define T2_BRGRL_9600_4X_22118400_12T               0xFEE0        // 0%
#define T2_BRGRL_19200_4X_22118400_12T              0xFF70        // 0%
#define T2_BRGRL_38400_4X_22118400_12T              0xFFB8        // 0%
#define T2_BRGRL_57600_4X_22118400_12T              0xFFD0        // 0%
#define T2_BRGRL_115200_4X_22118400_12T             0xFFE8        // 0%
#define T2_BRGRL_230400_4X_22118400_12T             0xFFF4        // 0%
#define T2_BRGRL_460800_4X_22118400_12T             0xFFFA        // 0%
#define T2_BRGRL_691200_4X_22118400_12T             0xFFFC        // 0%
#define T2_BRGRL_921600_4X_22118400_12T             0xFFFD        // 0%
#define T2_BRGRL_1382400_4X_22118400_12T            0xFFFE        // 0%
#define T2_BRGRL_2764800_4X_22118400_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_4X_22118400_1T                0xF700        // 0%
#define T2_BRGRL_4800_4X_22118400_1T                0xFB80        // 0%
#define T2_BRGRL_9600_4X_22118400_1T                0xFDC0        // 0%
#define T2_BRGRL_19200_4X_22118400_1T               0xFEE0        // 0%
#define T2_BRGRL_38400_4X_22118400_1T               0xFF70        // 0%
#define T2_BRGRL_57600_4X_22118400_1T               0xFFA0        // 0%
#define T2_BRGRL_115200_4X_22118400_1T              0xFFD0        // 0%
#define T2_BRGRL_230400_4X_22118400_1T              0xFFE8        // 0%
#define T2_BRGRL_460800_4X_22118400_1T              0xFFF4        // 0%
#define T2_BRGRL_691200_4X_22118400_1T              0xFFF8        // 0%
#define T2_BRGRL_921600_4X_22118400_1T              0xFFFA        // 0%
#define T2_BRGRL_1382400_4X_22118400_1T             0xFFFC        // 0%
#define T2_BRGRL_2764800_4X_22118400_1T             0xFFFE        // 0%
#define T2_BRGRL_5529600_4X_22118400_1T             0xFFFF        // 0%

// T2 24MHz
#define T2_BRGRL_2400_1X_24000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_4800_1X_24000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_9600_1X_24000000_12T               0xFFB2        // 0.16%
#define T2_BRGRL_19200_1X_24000000_12T              0xFFD9        // 0.16%
#define T2_BRGRL_38400_1X_24000000_12T              0xFFEC        // -2.34%
#define T2_BRGRL_57600_1X_24000000_12T              0xFFF3        // 0.16%
#define T2_BRGRL_115200_1X_24000000_12T             0xFFF9        // -6.99%
#define T2_BRGRL_230400_1X_24000000_12T             0xFFFD        // 8.51%
#define T2_BRGRL_250000_1X_24000000_12T             0xFFFD        // 0%
#define T2_BRGRL_750000_1X_24000000_12T             0xFFFF        // 0%

#define T2_BRGRL_2400_1X_24000000_1T                0xFD8F        // 0%
#define T2_BRGRL_4800_1X_24000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_9600_1X_24000000_1T                0xFF64        // 0.16%
#define T2_BRGRL_19200_1X_24000000_1T               0xFFB2        // 0.16%
#define T2_BRGRL_38400_1X_24000000_1T               0xFFD9        // 0.16%
#define T2_BRGRL_57600_1X_24000000_1T               0xFFE6        // 0.16%
#define T2_BRGRL_115200_1X_24000000_1T              0xFFF3        // 0.16%
#define T2_BRGRL_230400_1X_24000000_1T              0xFFF9        // -6.99%
#define T2_BRGRL_250000_1X_24000000_1T              0xFFFA        // 0%
#define T2_BRGRL_500000_1X_24000000_1T              0xFFFD        // 0%
#define T2_BRGRL_750000_1X_24000000_1T              0xFFFE        // 0%
#define T2_BRGRL_1500000_1X_24000000_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_2X_24000000_12T               0xFD8F        // 0%
#define T2_BRGRL_4800_2X_24000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_9600_2X_24000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_19200_2X_24000000_12T              0xFFB2        // 0.16%
#define T2_BRGRL_38400_2X_24000000_12T              0xFFD9        // 0.16%
#define T2_BRGRL_57600_2X_24000000_12T              0xFFE6        // 0.16%
#define T2_BRGRL_115200_2X_24000000_12T             0xFFF3        // 0.16%
#define T2_BRGRL_230400_2X_24000000_12T             0xFFF9        // -6.99%
#define T2_BRGRL_250000_2X_24000000_12T             0xFFFA        // 0%
#define T2_BRGRL_500000_2X_24000000_12T             0xFFFD        // 0%
#define T2_BRGRL_750000_2X_24000000_12T             0xFFFE        // 0%
#define T2_BRGRL_1500000_2X_24000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_2X_24000000_1T                0xFB1E        // 0%
#define T2_BRGRL_4800_2X_24000000_1T                0xFD8F        // 0%
#define T2_BRGRL_9600_2X_24000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_19200_2X_24000000_1T               0xFF64        // 0.16%
#define T2_BRGRL_38400_2X_24000000_1T               0xFFB2        // 0.16%
#define T2_BRGRL_57600_2X_24000000_1T               0xFFCC        // 0.16%
#define T2_BRGRL_115200_2X_24000000_1T              0xFFE6        // 0.16%
#define T2_BRGRL_230400_2X_24000000_1T              0xFFF3        // 0.16%
#define T2_BRGRL_250000_2X_24000000_1T              0xFFF4        // 0%
#define T2_BRGRL_500000_2X_24000000_1T              0xFFFA        // 0%
#define T2_BRGRL_750000_2X_24000000_1T              0xFFFC        // 0%
#define T2_BRGRL_1000000_2X_24000000_1T             0xFFFD        // 0%
#define T2_BRGRL_1500000_2X_24000000_1T             0xFFFE        // 0%
#define T2_BRGRL_3000000_2X_24000000_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_4X_24000000_12T               0xFB1E        // 0%
#define T2_BRGRL_4800_4X_24000000_12T               0xFD8F        // 0%
#define T2_BRGRL_9600_4X_24000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_19200_4X_24000000_12T              0xFF64        // 0.16%
#define T2_BRGRL_38400_4X_24000000_12T              0xFFB2        // 0.16%
#define T2_BRGRL_57600_4X_24000000_12T              0xFFCC        // 0.16%
#define T2_BRGRL_115200_4X_24000000_12T             0xFFE6        // 0.16%
#define T2_BRGRL_230400_4X_24000000_12T             0xFFF3        // 0.16%
#define T2_BRGRL_250000_4X_24000000_12T             0xFFF4        // 0%
#define T2_BRGRL_500000_4X_24000000_12T             0xFFFA        // 0%
#define T2_BRGRL_750000_4X_24000000_12T             0xFFFC        // 0%
#define T2_BRGRL_1000000_4X_24000000_12T            0xFFFD        // 0%
#define T2_BRGRL_1500000_4X_24000000_12T            0xFFFE        // 0%
#define T2_BRGRL_3000000_4X_24000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_4X_24000000_1T                0xF63C        // 0%
#define T2_BRGRL_4800_4X_24000000_1T                0xFB1E        // 0%
#define T2_BRGRL_9600_4X_24000000_1T                0xFD8F        // 0%
#define T2_BRGRL_19200_4X_24000000_1T               0xFEC7        // -0.16%
#define T2_BRGRL_38400_4X_24000000_1T               0xFF64        // 0.16%
#define T2_BRGRL_57600_4X_24000000_1T               0xFF98        // 0.16%
#define T2_BRGRL_115200_4X_24000000_1T              0xFFCC        // 0.16%
#define T2_BRGRL_230400_4X_24000000_1T              0xFFE6        // 0.16%
#define T2_BRGRL_250000_4X_24000000_1T              0xFFE8        // 0%
#define T2_BRGRL_500000_4X_24000000_1T              0xFFF4        // 0%
#define T2_BRGRL_750000_4X_24000000_1T              0xFFF8        // 0%
#define T2_BRGRL_1000000_4X_24000000_1T             0xFFFA        // 0%
#define T2_BRGRL_1500000_4X_24000000_1T             0xFFFC        // 0%
#define T2_BRGRL_3000000_4X_24000000_1T             0xFFFE        // 0%
#define T2_BRGRL_6000000_4X_24000000_1T             0xFFFF        // 0%
// T2 32MHz
#define T2_BRGRL_2400_1X_32000000_12T               0xFE5F        // -0.08%
#define T2_BRGRL_4800_1X_32000000_12T               0xFF30        // 0.16%
#define T2_BRGRL_9600_1X_32000000_12T               0xFF98        // 0.16%
#define T2_BRGRL_19200_1X_32000000_12T              0xFFCC        // 0.16%
#define T2_BRGRL_38400_1X_32000000_12T              0xFFE6        // 0.16%
#define T2_BRGRL_57600_1X_32000000_12T              0xFFEF        // 2.12%
#define T2_BRGRL_115200_1X_32000000_12T             0xFFF7        // -3.55%
#define T2_BRGRL_230400_1X_32000000_12T             0xFFFC        // 8.51%
#define T2_BRGRL_250000_1X_32000000_12T             0xFFFC        // 0%
#define T2_BRGRL_500000_1X_32000000_12T             0xFFFE        // 0%
#define T2_BRGRL_1000000_1X_32000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_1X_32000000_1T                0xFCBF        // 0.04%
#define T2_BRGRL_4800_1X_32000000_1T                0xFE5F        // -0.08%
#define T2_BRGRL_9600_1X_32000000_1T                0xFF30        // 0.16%
#define T2_BRGRL_19200_1X_32000000_1T               0xFF98        // 0.16%
#define T2_BRGRL_38400_1X_32000000_1T               0xFFCC        // 0.16%
#define T2_BRGRL_57600_1X_32000000_1T               0xFFDD        // -0.79%
#define T2_BRGRL_115200_1X_32000000_1T              0xFFEF        // 2.12%
#define T2_BRGRL_230400_1X_32000000_1T              0xFFF7        // -3.55%
#define T2_BRGRL_250000_1X_32000000_1T              0xFFF8        // 0%
#define T2_BRGRL_500000_1X_32000000_1T              0xFFFC        // 0%
#define T2_BRGRL_1000000_1X_32000000_1T             0xFFFE        // 0%

#define T2_BRGRL_2400_2X_32000000_12T               0xFCBF        // 0.04%
#define T2_BRGRL_4800_2X_32000000_12T               0xFE5F        // -0.08%
#define T2_BRGRL_9600_2X_32000000_12T               0xFF30        // 0.16%
#define T2_BRGRL_19200_2X_32000000_12T              0xFF98        // 0.16%
#define T2_BRGRL_38400_2X_32000000_12T              0xFFCC        // 0.16%
#define T2_BRGRL_57600_2X_32000000_12T              0xFFDD        // -0.79%
#define T2_BRGRL_115200_2X_32000000_12T             0xFFEF        // 2.12%
#define T2_BRGRL_230400_2X_32000000_12T             0xFFF7        // -3.55%
#define T2_BRGRL_250000_2X_32000000_12T             0xFFF8        // 0%
#define T2_BRGRL_500000_2X_32000000_12T             0xFFFC        // 0%
#define T2_BRGRL_1000000_2X_32000000_12T            0xFFFE        // 0%

#define T2_BRGRL_2400_2X_32000000_1T                0xF97D        // -0.02%
#define T2_BRGRL_4800_2X_32000000_1T                0xFCBF        // 0.04%
#define T2_BRGRL_9600_2X_32000000_1T                0xFE5F        // -0.08%
#define T2_BRGRL_19200_2X_32000000_1T               0xFF30        // 0.16%
#define T2_BRGRL_38400_2X_32000000_1T               0xFF98        // 0.16%
#define T2_BRGRL_57600_2X_32000000_1T               0xFFBB        // 0.64%
#define T2_BRGRL_115200_2X_32000000_1T              0xFFDD        // -0.79%
#define T2_BRGRL_230400_2X_32000000_1T              0xFFEF        // 2.12%
#define T2_BRGRL_250000_2X_32000000_1T              0xFFF0        // 0%
#define T2_BRGRL_500000_2X_32000000_1T              0xFFF8        // 0%
#define T2_BRGRL_750000_2X_32000000_1T              0xFFFB        // 6.67%
#define T2_BRGRL_1000000_2X_32000000_1T             0xFFFC        // 0%

#define T2_BRGRL_2400_4X_32000000_12T               0xF97D        // -0.02%
#define T2_BRGRL_4800_4X_32000000_12T               0xFCBF        // 0.04%
#define T2_BRGRL_9600_4X_32000000_12T               0xFE5F        // -0.08%
#define T2_BRGRL_19200_4X_32000000_12T              0xFF30        // 0.16%
#define T2_BRGRL_38400_4X_32000000_12T              0xFF98        // 0.16%
#define T2_BRGRL_57600_4X_32000000_12T              0xFFBB        // 0.64%
#define T2_BRGRL_115200_4X_32000000_12T             0xFFDD        // -0.79%
#define T2_BRGRL_230400_4X_32000000_12T             0xFFEF        // 2.12%
#define T2_BRGRL_250000_4X_32000000_12T             0xFFF0        // 0%
#define T2_BRGRL_500000_4X_32000000_12T             0xFFF8        // 0%
#define T2_BRGRL_750000_4X_32000000_12T             0xFFFB        // 6.67%
#define T2_BRGRL_1000000_4X_32000000_12T            0xFFFC        // 0%

#define T2_BRGRL_2400_4X_32000000_1T                0xF2FB        // 0.01%
#define T2_BRGRL_4800_4X_32000000_1T                0xF97D        // -0.02%
#define T2_BRGRL_9600_4X_32000000_1T                0xFCBF        // 0.04%
#define T2_BRGRL_19200_4X_32000000_1T               0xFE5F        // -0.08%
#define T2_BRGRL_38400_4X_32000000_1T               0xFF30        // 0.16%
#define T2_BRGRL_57600_4X_32000000_1T               0xFF75        // -0.08%
#define T2_BRGRL_115200_4X_32000000_1T              0xFFBB        // 0.64%
#define T2_BRGRL_230400_4X_32000000_1T              0xFFDD        // -0.79%
#define T2_BRGRL_250000_4X_32000000_1T              0xFFE0        // 0%
#define T2_BRGRL_500000_4X_32000000_1T              0xFFF0        // 0%
#define T2_BRGRL_750000_4X_32000000_1T              0xFFF5        // -3.03%
#define T2_BRGRL_1000000_4X_32000000_1T             0xFFF8        // 0%
#define T2_BRGRL_1500000_4X_32000000_1T             0xFFFB        // 6.67%

// T2 48MHz
#define T2_BRGRL_2400_1X_48000000_12T               0xFD8F        // 0%
#define T2_BRGRL_4800_1X_48000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_9600_1X_48000000_12T               0xFF64        // 0.16%
#define T2_BRGRL_19200_1X_48000000_12T              0xFFB2        // 0.16%
#define T2_BRGRL_38400_1X_48000000_12T              0xFFD9        // 0.16%
#define T2_BRGRL_57600_1X_48000000_12T              0xFFE6        // 0.16%
#define T2_BRGRL_115200_1X_48000000_12T             0xFFF3        // 0.16%
#define T2_BRGRL_230400_1X_48000000_12T             0xFFF9        // -6.99%
#define T2_BRGRL_250000_1X_48000000_12T             0xFFFA        // 0%
#define T2_BRGRL_500000_1X_48000000_12T             0xFFFD        // 0%
#define T2_BRGRL_750000_1X_48000000_12T             0xFFFE        // 0%
#define T2_BRGRL_1500000_1X_48000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_1X_48000000_1T                0xFB1E        // 0%
#define T2_BRGRL_4800_1X_48000000_1T                0xFD8F        // 0%
#define T2_BRGRL_9600_1X_48000000_1T                0xFEC7        // -0.16%
#define T2_BRGRL_19200_1X_48000000_1T               0xFF64        // 0.16%
#define T2_BRGRL_38400_1X_48000000_1T               0xFFB2        // 0.16%
#define T2_BRGRL_57600_1X_48000000_1T               0xFFCC        // 0.16%
#define T2_BRGRL_115200_1X_48000000_1T              0xFFE6        // 0.16%
#define T2_BRGRL_230400_1X_48000000_1T              0xFFF3        // 0.16%
#define T2_BRGRL_250000_1X_48000000_1T              0xFFF4        // 0%
#define T2_BRGRL_500000_1X_48000000_1T              0xFFFA        // 0%
#define T2_BRGRL_750000_1X_48000000_1T              0xFFFC        // 0%
#define T2_BRGRL_1000000_1X_48000000_1T             0xFFFD        // 0%
#define T2_BRGRL_1500000_1X_48000000_1T             0xFFFE        // 0%
#define T2_BRGRL_3000000_1X_48000000_1T             0xFFFF        // 0%

#define T2_BRGRL_2400_2X_48000000_12T               0xFB1E        // 0%
#define T2_BRGRL_4800_2X_48000000_12T               0xFD8F        // 0%
#define T2_BRGRL_9600_2X_48000000_12T               0xFEC7        // -0.16%
#define T2_BRGRL_19200_2X_48000000_12T              0xFF64        // 0.16%
#define T2_BRGRL_38400_2X_48000000_12T              0xFFB2        // 0.16%
#define T2_BRGRL_57600_2X_48000000_12T              0xFFCC        // 0.16%
#define T2_BRGRL_115200_2X_48000000_12T             0xFFE6        // 0.16%
#define T2_BRGRL_230400_2X_48000000_12T             0xFFF3        // 0.16%
#define T2_BRGRL_250000_2X_48000000_12T             0xFFF4        // 0%
#define T2_BRGRL_500000_2X_48000000_12T             0xFFFA        // 0%
#define T2_BRGRL_750000_2X_48000000_12T             0xFFFC        // 0%
#define T2_BRGRL_1000000_2X_48000000_12T            0xFFFD        // 0%
#define T2_BRGRL_1500000_2X_48000000_12T            0xFFFE        // 0%
#define T2_BRGRL_3000000_2X_48000000_12T            0xFFFF        // 0%

#define T2_BRGRL_2400_2X_48000000_1T                0xF63C        // 0%
#define T2_BRGRL_4800_2X_48000000_1T                0xFB1E        // 0%
#define T2_BRGRL_9600_2X_48000000_1T                0xFD8F        // 0%
#define T2_BRGRL_19200_2X_48000000_1T               0xFEC7        // -0.16%
#define T2_BRGRL_38400_2X_48000000_1T               0xFF64        // 0.16%
#define T2_BRGRL_57600_2X_48000000_1T               0xFF98        // 0.16%
#define T2_BRGRL_115200_2X_48000000_1T              0xFFCC        // 0.16%
#define T2_BRGRL_230400_2X_48000000_1T              0xFFE6        // 0.16%
#define T2_BRGRL_250000_2X_48000000_1T              0xFFE8        // 0%
#define T2_BRGRL_500000_2X_48000000_1T              0xFFF4        // 0%
#define T2_BRGRL_750000_2X_48000000_1T              0xFFF8        // 0%
#define T2_BRGRL_1000000_2X_48000000_1T             0xFFFA        // 0%
#define T2_BRGRL_1500000_2X_48000000_1T             0xFFFC        // 0%
#define T2_BRGRL_3000000_2X_48000000_1T             0xFFFE        // 0%

#define T2_BRGRL_6000000_2X_48000000_1T             0xFFFF        // 0%
#define T2_BRGRL_2400_4X_48000000_12T               0xF63C        // 0%
#define T2_BRGRL_4800_4X_48000000_12T               0xFB1E        // 0%
#define T2_BRGRL_9600_4X_48000000_12T               0xFD8F        // 0%
#define T2_BRGRL_19200_4X_48000000_12T              0xFEC7        // -0.16%
#define T2_BRGRL_38400_4X_48000000_12T              0xFF64        // 0.16%
#define T2_BRGRL_57600_4X_48000000_12T              0xFF98        // 0.16%
#define T2_BRGRL_115200_4X_48000000_12T             0xFFCC        // 0.16%
#define T2_BRGRL_230400_4X_48000000_12T             0xFFE6        // 0.16%
#define T2_BRGRL_250000_4X_48000000_12T             0xFFE8        // 0%
#define T2_BRGRL_500000_4X_48000000_12T             0xFFF4        // 0%
#define T2_BRGRL_750000_4X_48000000_12T             0xFFF8        // 0%
#define T2_BRGRL_1000000_4X_48000000_12T            0xFFFA        // 0%
#define T2_BRGRL_1500000_4X_48000000_12T            0xFFFC        // 0%
#define T2_BRGRL_3000000_4X_48000000_12T            0xFFFE        // 0%

#define T2_BRGRL_6000000_4X_48000000_12T            0xFFFF        // 0%
#define T2_BRGRL_2400_4X_48000000_1T                0xEC78        // 0%
#define T2_BRGRL_4800_4X_48000000_1T                0xF63C        // 0%
#define T2_BRGRL_9600_4X_48000000_1T                0xFB1E        // 0%
#define T2_BRGRL_19200_4X_48000000_1T               0xFD8F        // 0%
#define T2_BRGRL_38400_4X_48000000_1T               0xFEC7        // -0.16%
#define T2_BRGRL_57600_4X_48000000_1T               0xFF30        // 0.16%
#define T2_BRGRL_115200_4X_48000000_1T              0xFF98        // 0.16%
#define T2_BRGRL_230400_4X_48000000_1T              0xFFCC        // 0.16%
#define T2_BRGRL_250000_4X_48000000_1T              0xFFD0        // 0%
#define T2_BRGRL_500000_4X_48000000_1T              0xFFE8        // 0%
#define T2_BRGRL_750000_4X_48000000_1T              0xFFF0        // 0%
#define T2_BRGRL_1000000_4X_48000000_1T             0xFFF4        // 0%
#define T2_BRGRL_1500000_4X_48000000_1T             0xFFF8        // 0%
#define T2_BRGRL_3000000_4X_48000000_1T             0xFFFC        // 0%
#define T2_BRGRL_6000000_4X_48000000_1T             0xFFFE        // 0%
/*
*************************************************************************************
*/
/*
*************************************************************************************
*  UART S0BRG 波特率重载值
*
*************************************************************************************
*/
// S0BRG 11.5592MHz
#define S0BRG_BRGRL_2400_1X_11059200_12T            0xF4        // 0%
#define S0BRG_BRGRL_4800_1X_11059200_12T            0xFA        // 0%
#define S0BRG_BRGRL_9600_1X_11059200_12T            0xFD        // 0%

#define S0BRG_BRGRL_2400_1X_11059200_1T             0x70        // 0%
#define S0BRG_BRGRL_4800_1X_11059200_1T             0xB8        // 0%
#define S0BRG_BRGRL_9600_1X_11059200_1T             0xDC        // 0%
#define S0BRG_BRGRL_19200_1X_11059200_1T            0xEE        // 0%
#define S0BRG_BRGRL_38400_1X_11059200_1T            0xF7        // 0%
#define S0BRG_BRGRL_57600_1X_11059200_1T            0xFA        // 0%
#define S0BRG_BRGRL_115200_1X_11059200_1T           0xFD        // 0%

#define S0BRG_BRGRL_2400_2X_11059200_12T            0xE8        // 0%
#define S0BRG_BRGRL_4800_2X_11059200_12T            0xF4        // 0%
#define S0BRG_BRGRL_9600_2X_11059200_12T            0xFA        // 0%
#define S0BRG_BRGRL_19200_2X_11059200_12T           0xFD        // 0%
#define S0BRG_BRGRL_57600_2X_11059200_12T           0xFF        // 0%


#define S0BRG_BRGRL_4800_2X_11059200_1T             0x70        // 0%
#define S0BRG_BRGRL_9600_2X_11059200_1T             0xB8        // 0%
#define S0BRG_BRGRL_19200_2X_11059200_1T            0xDC        // 0%
#define S0BRG_BRGRL_38400_2X_11059200_1T            0xEE        // 0%
#define S0BRG_BRGRL_57600_2X_11059200_1T            0xF4        // 0%
#define S0BRG_BRGRL_115200_2X_11059200_1T           0xFA        // 0%
#define S0BRG_BRGRL_230400_2X_11059200_1T           0xFD        // 0%
#define S0BRG_BRGRL_691200_2X_11059200_1T           0xFF        // 0%


// S0BRG 22.1184MHz
#define S0BRG_BRGRL_2400_1X_22118400_12T            0xE8        // 0%
#define S0BRG_BRGRL_4800_1X_22118400_12T            0xF4        // 0%
#define S0BRG_BRGRL_9600_1X_22118400_12T            0xFA        // 0%
#define S0BRG_BRGRL_19200_1X_22118400_12T           0xFD        // 0%
#define S0BRG_BRGRL_57600_1X_22118400_12T           0xFF        // 0%

#define S0BRG_BRGRL_4800_1X_22118400_1T             0x70        // 0%
#define S0BRG_BRGRL_9600_1X_22118400_1T             0xB8        // 0%
#define S0BRG_BRGRL_19200_1X_22118400_1T            0xDC        // 0%
#define S0BRG_BRGRL_38400_1X_22118400_1T            0xEE        // 0%
#define S0BRG_BRGRL_57600_1X_22118400_1T            0xF4        // 0%
#define S0BRG_BRGRL_115200_1X_22118400_1T           0xFA        // 0%
#define S0BRG_BRGRL_230400_1X_22118400_1T           0xFD        // 0%
#define S0BRG_BRGRL_691200_1X_22118400_1T           0xFF        // 0%

#define S0BRG_BRGRL_2400_2X_22118400_12T            0xD0        // 0%
#define S0BRG_BRGRL_4800_2X_22118400_12T            0xE8        // 0%
#define S0BRG_BRGRL_9600_2X_22118400_12T            0xF4        // 0%
#define S0BRG_BRGRL_19200_2X_22118400_12T           0xFA        // 0%
#define S0BRG_BRGRL_38400_2X_22118400_12T           0xFD        // 0%
#define S0BRG_BRGRL_57600_2X_22118400_12T           0xFE        // 0%
#define S0BRG_BRGRL_115200_2X_22118400_12T          0xFF        // 0%

#define S0BRG_BRGRL_9600_2X_22118400_1T             0x70        // 0%
#define S0BRG_BRGRL_19200_2X_22118400_1T            0xB8        // 0%
#define S0BRG_BRGRL_38400_2X_22118400_1T            0xDC        // 0%
#define S0BRG_BRGRL_57600_2X_22118400_1T            0xE8        // 0%
#define S0BRG_BRGRL_115200_2X_22118400_1T           0xF4        // 0%
#define S0BRG_BRGRL_230400_2X_22118400_1T           0xFA        // 0%
#define S0BRG_BRGRL_460800_2X_22118400_1T           0xFD        // 0%
#define S0BRG_BRGRL_691200_2X_22118400_1T           0xFE        // 0%
#define S0BRG_BRGRL_1382400_2X_22118400_1T          0xFF        // 0%

// S0BRG 12MHz
#define S0BRG_BRGRL_2400_1X_12000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_4800_1X_12000000_12T            0xF9        // -6.99%
#define S0BRG_BRGRL_9600_1X_12000000_12T            0xFD        // 8.51%

#define S0BRG_BRGRL_2400_1X_12000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_4800_1X_12000000_1T             0xB2        // 0.16%
#define S0BRG_BRGRL_9600_1X_12000000_1T             0xD9        // 0.16%
#define S0BRG_BRGRL_19200_1X_12000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_38400_1X_12000000_1T            0xF6        // -2.34%
#define S0BRG_BRGRL_57600_1X_12000000_1T            0xF9        // -6.99%
#define S0BRG_BRGRL_115200_1X_12000000_1T           0xFD        // 8.51%

#define S0BRG_BRGRL_2400_2X_12000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_4800_2X_12000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_9600_2X_12000000_12T            0xF9        // -6.99%
#define S0BRG_BRGRL_19200_2X_12000000_12T           0xFD        // 8.51%
#define S0BRG_BRGRL_57600_2X_12000000_12T           0xFF        // 8.51%

#define S0BRG_BRGRL_4800_2X_12000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_9600_2X_12000000_1T             0xB2        // 0.16%
#define S0BRG_BRGRL_19200_2X_12000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_38400_2X_12000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_57600_2X_12000000_1T            0xF3        // 0.16%
#define S0BRG_BRGRL_115200_2X_12000000_1T           0xF9        // -6.99%
#define S0BRG_BRGRL_230400_2X_12000000_1T           0xFD        // 8.51%
#define S0BRG_BRGRL_250000_2X_12000000_1T           0xFD        // 0%
#define S0BRG_BRGRL_750000_2X_12000000_1T           0xFF        // 0%

// S0BRG 24MHz
#define S0BRG_BRGRL_2400_1X_24000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_4800_1X_24000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_9600_1X_24000000_12T            0xF9        // -6.99%
#define S0BRG_BRGRL_19200_1X_24000000_12T           0xFD        // 8.51%
#define S0BRG_BRGRL_57600_1X_24000000_12T           0xFF        // 8.51%

#define S0BRG_BRGRL_4800_1X_24000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_9600_1X_24000000_1T             0xB2        // 0.16%
#define S0BRG_BRGRL_19200_1X_24000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_38400_1X_24000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_57600_1X_24000000_1T            0xF3        // 0.16%
#define S0BRG_BRGRL_115200_1X_24000000_1T           0xF9        // -6.99%
#define S0BRG_BRGRL_230400_1X_24000000_1T           0xFD        // 8.51%
#define S0BRG_BRGRL_250000_1X_24000000_1T           0xFD        // 0%
#define S0BRG_BRGRL_750000_1X_24000000_1T           0xFF        // 0%

#define S0BRG_BRGRL_2400_2X_24000000_12T            0xCC        // 0.16%
#define S0BRG_BRGRL_4800_2X_24000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_9600_2X_24000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_19200_2X_24000000_12T           0xF9        // -6.99%
#define S0BRG_BRGRL_38400_2X_24000000_12T           0xFD        // 8.51%
#define S0BRG_BRGRL_57600_2X_24000000_12T           0xFE        // 8.51%
#define S0BRG_BRGRL_115200_2X_24000000_12T          0xFF        // 8.51%

#define S0BRG_BRGRL_9600_2X_24000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_19200_2X_24000000_1T            0xB2        // 0.16%
#define S0BRG_BRGRL_38400_2X_24000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_57600_2X_24000000_1T            0xE6        // 0.16%
#define S0BRG_BRGRL_115200_2X_24000000_1T           0xF3        // 0.16%
#define S0BRG_BRGRL_230400_2X_24000000_1T           0xF9        // -6.99%
#define S0BRG_BRGRL_250000_2X_24000000_1T           0xFA        // 0%
#define S0BRG_BRGRL_500000_2X_24000000_1T           0xFD        // 0%
#define S0BRG_BRGRL_750000_2X_24000000_1T           0xFE        // 0%
#define S0BRG_BRGRL_1500000_2X_24000000_1T          0xFF        // 0%

// S0BRG 32MHz
#define S0BRG_BRGRL_2400_1X_32000000_12T            0xDD        // -0.79%
#define S0BRG_BRGRL_4800_1X_32000000_12T            0xEF        // 2.12%
#define S0BRG_BRGRL_9600_1X_32000000_12T            0xF7        // -3.55%
#define S0BRG_BRGRL_19200_1X_32000000_12T           0xFC        // 8.51%
#define S0BRG_BRGRL_38400_1X_32000000_12T           0xFE        // 8.51%

#define S0BRG_BRGRL_4800_1X_32000000_1T             0x30        // 0.16%
#define S0BRG_BRGRL_9600_1X_32000000_1T             0x98        // 0.16%
#define S0BRG_BRGRL_19200_1X_32000000_1T            0xCC        // 0.16%
#define S0BRG_BRGRL_38400_1X_32000000_1T            0xE6        // 0.16%
#define S0BRG_BRGRL_57600_1X_32000000_1T            0xEF        // 2.12%
#define S0BRG_BRGRL_115200_1X_32000000_1T           0xF7        // -3.55%
#define S0BRG_BRGRL_230400_1X_32000000_1T           0xFC        // 8.51%
#define S0BRG_BRGRL_250000_1X_32000000_1T           0xFC        // 0%
#define S0BRG_BRGRL_500000_1X_32000000_1T           0xFE        // 0%
#define S0BRG_BRGRL_1000000_1X_32000000_1T          0xFF        // 0%

#define S0BRG_BRGRL_2400_2X_32000000_12T            0xBB        // 0.64%
#define S0BRG_BRGRL_4800_2X_32000000_12T            0xDD        // -0.79%
#define S0BRG_BRGRL_9600_2X_32000000_12T            0xEF        // 2.12%
#define S0BRG_BRGRL_19200_2X_32000000_12T           0xF7        // -3.55%
#define S0BRG_BRGRL_38400_2X_32000000_12T           0xFC        // 8.51%
#define S0BRG_BRGRL_57600_2X_32000000_12T           0xFD        // -3.55%

#define S0BRG_BRGRL_9600_2X_32000000_1T             0x30        // 0.16%
#define S0BRG_BRGRL_19200_2X_32000000_1T            0x98        // 0.16%
#define S0BRG_BRGRL_38400_2X_32000000_1T            0xCC        // 0.16%
#define S0BRG_BRGRL_57600_2X_32000000_1T            0xDD        // -0.79%
#define S0BRG_BRGRL_115200_2X_32000000_1T           0xEF        // 2.12%
#define S0BRG_BRGRL_230400_2X_32000000_1T           0xF7        // -3.55%
#define S0BRG_BRGRL_250000_2X_32000000_1T           0xF8        // 0%
#define S0BRG_BRGRL_500000_2X_32000000_1T           0xFC        // 0%
#define S0BRG_BRGRL_1000000_2X_32000000_1T          0xFE        // 0%

// 36MHz
#define S0BRG_BRGRL_2400_1X_36000000_12T            0xD9        // 0.16%
#define S0BRG_BRGRL_4800_1X_36000000_12T            0xEC        // -2.34%
#define S0BRG_BRGRL_9600_1X_36000000_12T            0xF6        // -2.34%
#define S0BRG_BRGRL_19200_1X_36000000_12T           0xFB        // -2.34%

#define S0BRG_BRGRL_4800_1X_36000000_1T             0x16        // 0.16%
#define S0BRG_BRGRL_9600_1X_36000000_1T             0x8B        // 0.16%
#define S0BRG_BRGRL_19200_1X_36000000_1T            0xC5        // -0.69%
#define S0BRG_BRGRL_38400_1X_36000000_1T            0xE3        // 1.02%
#define S0BRG_BRGRL_57600_1X_36000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_115200_1X_36000000_1T           0xF6        // -2.34%
#define S0BRG_BRGRL_230400_1X_36000000_1T           0xFB        // -2.34%

#define S0BRG_BRGRL_2400_2X_36000000_12T            0xB2        // 0.16%
#define S0BRG_BRGRL_4800_2X_36000000_12T            0xD9        // 0.16%
#define S0BRG_BRGRL_9600_2X_36000000_12T            0xEC        // -2.34%
#define S0BRG_BRGRL_19200_2X_36000000_12T           0xF6        // -2.34%
#define S0BRG_BRGRL_38400_2X_36000000_12T           0xFB        // -2.34%
#define S0BRG_BRGRL_57600_2X_36000000_12T           0xFD        // 8.51%

#define S0BRG_BRGRL_9600_2X_36000000_1T             0x16        // 0.16%
#define S0BRG_BRGRL_19200_2X_36000000_1T            0x8B        // 0.16%
#define S0BRG_BRGRL_38400_2X_36000000_1T            0xC5        // -0.69%
#define S0BRG_BRGRL_57600_2X_36000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_115200_2X_36000000_1T           0xEC        // -2.34%
#define S0BRG_BRGRL_230400_2X_36000000_1T           0xF6        // -2.34%
#define S0BRG_BRGRL_250000_2X_36000000_1T           0xF7        // 0%

#define S0BRG_BRGRL_750000_2X_36000000_1T           0xFD        // 0%


// S0BRG 48MHz
#define S0BRG_BRGRL_2400_1X_48000000_12T            0xCC        // 0.16%
#define S0BRG_BRGRL_4800_1X_48000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_9600_1X_48000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_19200_1X_48000000_12T           0xF9        // -6.99%
#define S0BRG_BRGRL_38400_1X_48000000_12T           0xFD        // 8.51%
#define S0BRG_BRGRL_57600_1X_48000000_12T           0xFE        // 8.51%
#define S0BRG_BRGRL_115200_1X_48000000_12T          0xFF        // 8.51%

#define S0BRG_BRGRL_9600_1X_48000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_19200_1X_48000000_1T            0xB2        // 0.16%
#define S0BRG_BRGRL_38400_1X_48000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_57600_1X_48000000_1T            0xE6        // 0.16%
#define S0BRG_BRGRL_115200_1X_48000000_1T           0xF3        // 0.16%
#define S0BRG_BRGRL_230400_1X_48000000_1T           0xF9        // -6.99%
#define S0BRG_BRGRL_250000_1X_48000000_1T           0xFA        // 0%
#define S0BRG_BRGRL_500000_1X_48000000_1T           0xFD        // 0%
#define S0BRG_BRGRL_750000_1X_48000000_1T           0xFE        // 0%
#define S0BRG_BRGRL_1500000_1X_48000000_1T          0xFF        // 0%

#define S0BRG_BRGRL_2400_2X_48000000_12T            0x98        // 0.16%
#define S0BRG_BRGRL_4800_2X_48000000_12T            0xCC        // 0.16%
#define S0BRG_BRGRL_9600_2X_48000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_19200_2X_48000000_12T           0xF3        // 0.16%
#define S0BRG_BRGRL_38400_2X_48000000_12T           0xF9        // -6.99%
#define S0BRG_BRGRL_57600_2X_48000000_12T           0xFC        // 8.51%
#define S0BRG_BRGRL_115200_2X_48000000_12T          0xFE        // 8.51%
#define S0BRG_BRGRL_230400_2X_48000000_12T          0xFF        // 8.51%
#define S0BRG_BRGRL_250000_2X_48000000_12T          0xFF        // 0%

#define S0BRG_BRGRL_19200_2X_48000000_1T            0x64        // 0.16%
#define S0BRG_BRGRL_38400_2X_48000000_1T            0xB2        // 0.16%
#define S0BRG_BRGRL_57600_2X_48000000_1T            0xCC        // 0.16%
#define S0BRG_BRGRL_115200_2X_48000000_1T           0xE6        // 0.16%
#define S0BRG_BRGRL_230400_2X_48000000_1T           0xF3        // 0.16%
#define S0BRG_BRGRL_250000_2X_48000000_1T           0xF4        // 0%
#define S0BRG_BRGRL_500000_2X_48000000_1T           0xFA        // 0%
#define S0BRG_BRGRL_750000_2X_48000000_1T           0xFC        // 0%
#define S0BRG_BRGRL_1000000_2X_48000000_1T          0xFD        // 0%
#define S0BRG_BRGRL_1500000_2X_48000000_1T          0xFE        // 0%
#define S0BRG_BRGRL_3000000_2X_48000000_1T          0xFF        // 0%

/*
*************************************************************************************
*/
/*
*************************************************************************************
*  UART S1BRG 波特率重载值
*
*************************************************************************************
*/
// S1BRG 11.5592MHz
#define S1BRG_BRGRL_2400_1X_11059200_12T            0xF4        // 0%
#define S1BRG_BRGRL_4800_1X_11059200_12T            0xFA        // 0%
#define S1BRG_BRGRL_9600_1X_11059200_12T            0xFD        // 0%

#define S1BRG_BRGRL_2400_1X_11059200_1T             0x70        // 0%
#define S1BRG_BRGRL_4800_1X_11059200_1T             0xB8        // 0%
#define S1BRG_BRGRL_9600_1X_11059200_1T             0xDC        // 0%
#define S1BRG_BRGRL_19200_1X_11059200_1T            0xEE        // 0%
#define S1BRG_BRGRL_38400_1X_11059200_1T            0xF7        // 0%
#define S1BRG_BRGRL_57600_1X_11059200_1T            0xFA        // 0%
#define S1BRG_BRGRL_115200_1X_11059200_1T           0xFD        // 0%

#define S1BRG_BRGRL_2400_2X_11059200_12T            0xE8        // 0%
#define S1BRG_BRGRL_4800_2X_11059200_12T            0xF4        // 0%
#define S1BRG_BRGRL_9600_2X_11059200_12T            0xFA        // 0%
#define S1BRG_BRGRL_19200_2X_11059200_12T           0xFD        // 0%
#define S1BRG_BRGRL_57600_2X_11059200_12T           0xFF        // 0%

#define S1BRG_BRGRL_4800_2X_11059200_1T             0x70        // 0%
#define S1BRG_BRGRL_9600_2X_11059200_1T             0xB8        // 0%
#define S1BRG_BRGRL_19200_2X_11059200_1T            0xDC        // 0%
#define S1BRG_BRGRL_38400_2X_11059200_1T            0xEE        // 0%
#define S1BRG_BRGRL_57600_2X_11059200_1T            0xF4        // 0%
#define S1BRG_BRGRL_115200_2X_11059200_1T           0xFA        // 0%
#define S1BRG_BRGRL_230400_2X_11059200_1T           0xFD        // 0%
#define S1BRG_BRGRL_691200_2X_11059200_1T           0xFF        // 0%

#define S1BRG_BRGRL_2400_4X_11059200_12T            0xD0        // 0%
#define S1BRG_BRGRL_4800_4X_11059200_12T            0xE8        // 0%
#define S1BRG_BRGRL_9600_4X_11059200_12T            0xF4        // 0%
#define S1BRG_BRGRL_19200_4X_11059200_12T           0xFA        // 0%
#define S1BRG_BRGRL_38400_4X_11059200_12T           0xFD        // 0%
#define S1BRG_BRGRL_57600_4X_11059200_12T           0xFE        // 0%
#define S1BRG_BRGRL_115200_4X_11059200_12T          0xFF        // 0%

#define S1BRG_BRGRL_9600_4X_11059200_1T             0x70        // 0%
#define S1BRG_BRGRL_19200_4X_11059200_1T            0xB8        // 0%
#define S1BRG_BRGRL_38400_4X_11059200_1T            0xDC        // 0%
#define S1BRG_BRGRL_57600_4X_11059200_1T            0xE8        // 0%
#define S1BRG_BRGRL_115200_4X_11059200_1T           0xF4        // 0%
#define S1BRG_BRGRL_230400_4X_11059200_1T           0xFA        // 0%
#define S1BRG_BRGRL_460800_4X_11059200_1T           0xFD        // 0%
#define S1BRG_BRGRL_691200_4X_11059200_1T           0xFE        // 0%
#define S1BRG_BRGRL_1382400_4X_11059200_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_8X_11059200_12T            0xA0        // 0%
#define S1BRG_BRGRL_4800_8X_11059200_12T            0xD0        // 0%
#define S1BRG_BRGRL_9600_8X_11059200_12T            0xE8        // 0%
#define S1BRG_BRGRL_19200_8X_11059200_12T           0xF4        // 0%
#define S1BRG_BRGRL_38400_8X_11059200_12T           0xFA        // 0%
#define S1BRG_BRGRL_57600_8X_11059200_12T           0xFC        // 0%
#define S1BRG_BRGRL_115200_8X_11059200_12T          0xFE        // 0%
#define S1BRG_BRGRL_230400_8X_11059200_12T          0xFF        // 0%

#define S1BRG_BRGRL_19200_8X_11059200_1T            0x70        // 0%
#define S1BRG_BRGRL_38400_8X_11059200_1T            0xB8        // 0%
#define S1BRG_BRGRL_57600_8X_11059200_1T            0xD0        // 0%
#define S1BRG_BRGRL_115200_8X_11059200_1T           0xE8        // 0%
#define S1BRG_BRGRL_230400_8X_11059200_1T           0xF4        // 0%
#define S1BRG_BRGRL_460800_8X_11059200_1T           0xFA        // 0%
#define S1BRG_BRGRL_691200_8X_11059200_1T           0xFC        // 0%
#define S1BRG_BRGRL_921600_8X_11059200_1T           0xFD        // 0%
#define S1BRG_BRGRL_1382400_8X_11059200_1T          0xFE        // 0%
#define S1BRG_BRGRL_2764800_8X_11059200_1T          0xFF        // 0%

// S1BRG 22.1184MHz
#define S1BRG_BRGRL_2400_1X_22118400_12T            0xE8        // 0%
#define S1BRG_BRGRL_4800_1X_22118400_12T            0xF4        // 0%
#define S1BRG_BRGRL_9600_1X_22118400_12T            0xFA        // 0%
#define S1BRG_BRGRL_19200_1X_22118400_12T           0xFD        // 0%
#define S1BRG_BRGRL_57600_1X_22118400_12T           0xFF        // 0%

#define S1BRG_BRGRL_4800_1X_22118400_1T             0x70        // 0%
#define S1BRG_BRGRL_9600_1X_22118400_1T             0xB8        // 0%
#define S1BRG_BRGRL_19200_1X_22118400_1T            0xDC        // 0%
#define S1BRG_BRGRL_38400_1X_22118400_1T            0xEE        // 0%
#define S1BRG_BRGRL_57600_1X_22118400_1T            0xF4        // 0%
#define S1BRG_BRGRL_115200_1X_22118400_1T           0xFA        // 0%
#define S1BRG_BRGRL_230400_1X_22118400_1T           0xFD        // 0%
#define S1BRG_BRGRL_691200_1X_22118400_1T           0xFF        // 0%

#define S1BRG_BRGRL_2400_2X_22118400_12T            0xD0        // 0%
#define S1BRG_BRGRL_4800_2X_22118400_12T            0xE8        // 0%
#define S1BRG_BRGRL_9600_2X_22118400_12T            0xF4        // 0%
#define S1BRG_BRGRL_19200_2X_22118400_12T           0xFA        // 0%
#define S1BRG_BRGRL_38400_2X_22118400_12T           0xFD        // 0%
#define S1BRG_BRGRL_57600_2X_22118400_12T           0xFE        // 0%
#define S1BRG_BRGRL_115200_2X_22118400_12T          0xFF        // 0%

#define S1BRG_BRGRL_9600_2X_22118400_1T             0x70        // 0%
#define S1BRG_BRGRL_19200_2X_22118400_1T            0xB8        // 0%
#define S1BRG_BRGRL_38400_2X_22118400_1T            0xDC        // 0%
#define S1BRG_BRGRL_57600_2X_22118400_1T            0xE8        // 0%
#define S1BRG_BRGRL_115200_2X_22118400_1T           0xF4        // 0%
#define S1BRG_BRGRL_230400_2X_22118400_1T           0xFA        // 0%
#define S1BRG_BRGRL_460800_2X_22118400_1T           0xFD        // 0%
#define S1BRG_BRGRL_691200_2X_22118400_1T           0xFE        // 0%
#define S1BRG_BRGRL_1382400_2X_22118400_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_4X_22118400_12T            0xA0        // 0%
#define S1BRG_BRGRL_4800_4X_22118400_12T            0xD0        // 0%
#define S1BRG_BRGRL_9600_4X_22118400_12T            0xE8        // 0%
#define S1BRG_BRGRL_19200_4X_22118400_12T           0xF4        // 0%
#define S1BRG_BRGRL_38400_4X_22118400_12T           0xFA        // 0%
#define S1BRG_BRGRL_57600_4X_22118400_12T           0xFC        // 0%
#define S1BRG_BRGRL_115200_4X_22118400_12T          0xFE        // 0%
#define S1BRG_BRGRL_230400_4X_22118400_12T          0xFF        // 0%

#define S1BRG_BRGRL_19200_4X_22118400_1T            0x70        // 0%
#define S1BRG_BRGRL_38400_4X_22118400_1T            0xB8        // 0%
#define S1BRG_BRGRL_57600_4X_22118400_1T            0xD0        // 0%
#define S1BRG_BRGRL_115200_4X_22118400_1T           0xE8        // 0%
#define S1BRG_BRGRL_230400_4X_22118400_1T           0xF4        // 0%
#define S1BRG_BRGRL_460800_4X_22118400_1T           0xFA        // 0%
#define S1BRG_BRGRL_691200_4X_22118400_1T           0xFC        // 0%
#define S1BRG_BRGRL_921600_4X_22118400_1T           0xFD        // 0%
#define S1BRG_BRGRL_1382400_4X_22118400_1T          0xFE        // 0%
#define S1BRG_BRGRL_2764800_4X_22118400_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_8X_22118400_12T            0x40        // 0%
#define S1BRG_BRGRL_4800_8X_22118400_12T            0xA0        // 0%
#define S1BRG_BRGRL_9600_8X_22118400_12T            0xD0        // 0%
#define S1BRG_BRGRL_19200_8X_22118400_12T           0xE8        // 0%
#define S1BRG_BRGRL_38400_8X_22118400_12T           0xF4        // 0%
#define S1BRG_BRGRL_57600_8X_22118400_12T           0xF8        // 0%
#define S1BRG_BRGRL_115200_8X_22118400_12T          0xFC        // 0%
#define S1BRG_BRGRL_230400_8X_22118400_12T          0xFE        // 0%
#define S1BRG_BRGRL_460800_8X_22118400_12T          0xFF        // 0%

#define S1BRG_BRGRL_38400_8X_22118400_1T            0x70        // 0%
#define S1BRG_BRGRL_57600_8X_22118400_1T            0xA0        // 0%
#define S1BRG_BRGRL_115200_8X_22118400_1T           0xD0        // 0%
#define S1BRG_BRGRL_230400_8X_22118400_1T           0xE8        // 0%
#define S1BRG_BRGRL_460800_8X_22118400_1T           0xF4        // 0%
#define S1BRG_BRGRL_691200_8X_22118400_1T           0xF8        // 0%
#define S1BRG_BRGRL_921600_8X_22118400_1T           0xFA        // 0%
#define S1BRG_BRGRL_1382400_8X_22118400_1T          0xFC        // 0%
#define S1BRG_BRGRL_2764800_8X_22118400_1T          0xFE        // 0%
#define S1BRG_BRGRL_5529600_8X_22118400_1T          0xFF        // 0%

//S1BRG 12MHz
#define S1BRG_BRGRL_2400_1X_12000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_4800_1X_12000000_12T            0xF9        // -6.99%
#define S1BRG_BRGRL_9600_1X_12000000_12T            0xFD        // 8.51%

#define S1BRG_BRGRL_2400_1X_12000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_4800_1X_12000000_1T             0xB2        // 0.16%
#define S1BRG_BRGRL_9600_1X_12000000_1T             0xD9        // 0.16%
#define S1BRG_BRGRL_19200_1X_12000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_38400_1X_12000000_1T            0xF6        // -2.34%
#define S1BRG_BRGRL_57600_1X_12000000_1T            0xF9        // -6.99%
#define S1BRG_BRGRL_115200_1X_12000000_1T           0xFD        // 8.51%

#define S1BRG_BRGRL_2400_2X_12000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_4800_2X_12000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_9600_2X_12000000_12T            0xF9        // -6.99%
#define S1BRG_BRGRL_19200_2X_12000000_12T           0xFD        // 8.51%
#define S1BRG_BRGRL_57600_2X_12000000_12T           0xFF        // 8.51%

#define S1BRG_BRGRL_4800_2X_12000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_9600_2X_12000000_1T             0xB2        // 0.16%
#define S1BRG_BRGRL_19200_2X_12000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_38400_2X_12000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_57600_2X_12000000_1T            0xF3        // 0.16%
#define S1BRG_BRGRL_115200_2X_12000000_1T           0xF9        // -6.99%
#define S1BRG_BRGRL_230400_2X_12000000_1T           0xFD        // 8.51%
#define S1BRG_BRGRL_250000_2X_12000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_2X_12000000_1T           0xFF        // 0%

#define S1BRG_BRGRL_2400_4X_12000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_4800_4X_12000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_9600_4X_12000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_19200_4X_12000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_38400_4X_12000000_12T           0xFD        // 8.51%
#define S1BRG_BRGRL_57600_4X_12000000_12T           0xFE        // 8.51%
#define S1BRG_BRGRL_115200_4X_12000000_12T          0xFF        // 8.51%

#define S1BRG_BRGRL_9600_4X_12000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_19200_4X_12000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_38400_4X_12000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_57600_4X_12000000_1T            0xE6        // 0.16%
#define S1BRG_BRGRL_115200_4X_12000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_230400_4X_12000000_1T           0xF9        // -6.99%
#define S1BRG_BRGRL_250000_4X_12000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_500000_4X_12000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_4X_12000000_1T           0xFE        // 0%
#define S1BRG_BRGRL_1500000_4X_12000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_8X_12000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_4800_8X_12000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_9600_8X_12000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_19200_8X_12000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_38400_8X_12000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_57600_8X_12000000_12T           0xFC        // 8.51%
#define S1BRG_BRGRL_115200_8X_12000000_12T          0xFE        // 8.51%
#define S1BRG_BRGRL_230400_8X_12000000_12T          0xFF        // 8.51%
#define S1BRG_BRGRL_250000_8X_12000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_19200_8X_12000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_38400_8X_12000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_57600_8X_12000000_1T            0xCC        // 0.16%
#define S1BRG_BRGRL_115200_8X_12000000_1T           0xE6        // 0.16%
#define S1BRG_BRGRL_230400_8X_12000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_250000_8X_12000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_500000_8X_12000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_750000_8X_12000000_1T           0xFC        // 0%
#define S1BRG_BRGRL_1000000_8X_12000000_1T          0xFD        // 0%
#define S1BRG_BRGRL_1500000_8X_12000000_1T          0xFE        // 0%
#define S1BRG_BRGRL_3000000_8X_12000000_1T          0xFF        // 0%

// S1BRG 24MHz
#define S1BRG_BRGRL_2400_1X_24000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_4800_1X_24000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_9600_1X_24000000_12T            0xF9        // -6.99%
#define S1BRG_BRGRL_19200_1X_24000000_12T           0xFD        // 8.51%
#define S1BRG_BRGRL_57600_1X_24000000_12T           0xFF        // 8.51%

#define S1BRG_BRGRL_4800_1X_24000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_9600_1X_24000000_1T             0xB2        // 0.16%
#define S1BRG_BRGRL_19200_1X_24000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_38400_1X_24000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_57600_1X_24000000_1T            0xF3        // 0.16%
#define S1BRG_BRGRL_115200_1X_24000000_1T           0xF9        // -6.99%
#define S1BRG_BRGRL_230400_1X_24000000_1T           0xFD        // 8.51%
#define S1BRG_BRGRL_250000_1X_24000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_1X_24000000_1T           0xFF        // 0%

#define S1BRG_BRGRL_2400_2X_24000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_4800_2X_24000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_9600_2X_24000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_19200_2X_24000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_38400_2X_24000000_12T           0xFD        // 8.51%
#define S1BRG_BRGRL_57600_2X_24000000_12T           0xFE        // 8.51%
#define S1BRG_BRGRL_115200_2X_24000000_12T          0xFF        // 8.51%

#define S1BRG_BRGRL_9600_2X_24000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_19200_2X_24000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_38400_2X_24000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_57600_2X_24000000_1T            0xE6        // 0.16%
#define S1BRG_BRGRL_115200_2X_24000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_230400_2X_24000000_1T           0xF9        // -6.99%
#define S1BRG_BRGRL_250000_2X_24000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_500000_2X_24000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_2X_24000000_1T           0xFE        // 0%
#define S1BRG_BRGRL_1500000_2X_24000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_4X_24000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_4800_4X_24000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_9600_4X_24000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_19200_4X_24000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_38400_4X_24000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_57600_4X_24000000_12T           0xFC        // 8.51%
#define S1BRG_BRGRL_115200_4X_24000000_12T          0xFE        // 8.51%
#define S1BRG_BRGRL_230400_4X_24000000_12T          0xFF        // 8.51%
#define S1BRG_BRGRL_250000_4X_24000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_19200_4X_24000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_38400_4X_24000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_57600_4X_24000000_1T            0xCC        // 0.16%
#define S1BRG_BRGRL_115200_4X_24000000_1T           0xE6        // 0.16%
#define S1BRG_BRGRL_230400_4X_24000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_250000_4X_24000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_500000_4X_24000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_750000_4X_24000000_1T           0xFC        // 0%
#define S1BRG_BRGRL_1000000_4X_24000000_1T          0xFD        // 0%
#define S1BRG_BRGRL_1500000_4X_24000000_1T          0xFE        // 0%
#define S1BRG_BRGRL_3000000_4X_24000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_8X_24000000_12T            0x30        // 0.16%
#define S1BRG_BRGRL_4800_8X_24000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_9600_8X_24000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_19200_8X_24000000_12T           0xE6        // 0.16%
#define S1BRG_BRGRL_38400_8X_24000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_57600_8X_24000000_12T           0xF7        // -3.55%
#define S1BRG_BRGRL_115200_8X_24000000_12T          0xFC        // 8.51%
#define S1BRG_BRGRL_230400_8X_24000000_12T          0xFE        // 8.51%
#define S1BRG_BRGRL_250000_8X_24000000_12T          0xFE        // 0%
#define S1BRG_BRGRL_500000_8X_24000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_38400_8X_24000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_57600_8X_24000000_1T            0x98        // 0.16%
#define S1BRG_BRGRL_115200_8X_24000000_1T           0xCC        // 0.16%
#define S1BRG_BRGRL_230400_8X_24000000_1T           0xE6        // 0.16%
#define S1BRG_BRGRL_250000_8X_24000000_1T           0xE8        // 0%
#define S1BRG_BRGRL_500000_8X_24000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_750000_8X_24000000_1T           0xF8        // 0%
#define S1BRG_BRGRL_1000000_8X_24000000_1T          0xFA        // 0%
#define S1BRG_BRGRL_1500000_8X_24000000_1T          0xFC        // 0%
#define S1BRG_BRGRL_3000000_8X_24000000_1T          0xFE        // 0%
#define S1BRG_BRGRL_6000000_8X_24000000_1T          0xFF        // 0%

// S1BRG 32MHz
#define S1BRG_BRGRL_2400_1X_32000000_12T            0xDD        // -0.79%
#define S1BRG_BRGRL_4800_1X_32000000_12T            0xEF        // 2.12%
#define S1BRG_BRGRL_9600_1X_32000000_12T            0xF7        // -3.55%
#define S1BRG_BRGRL_19200_1X_32000000_12T           0xFC        // 8.51%
#define S1BRG_BRGRL_38400_1X_32000000_12T           0xFE        // 8.51%

#define S1BRG_BRGRL_4800_1X_32000000_1T             0x30        // 0.16%
#define S1BRG_BRGRL_9600_1X_32000000_1T             0x98        // 0.16%
#define S1BRG_BRGRL_19200_1X_32000000_1T            0xCC        // 0.16%
#define S1BRG_BRGRL_38400_1X_32000000_1T            0xE6        // 0.16%
#define S1BRG_BRGRL_57600_1X_32000000_1T            0xEF        // 2.12%
#define S1BRG_BRGRL_115200_1X_32000000_1T           0xF7        // -3.55%
#define S1BRG_BRGRL_230400_1X_32000000_1T           0xFC        // 8.51%
#define S1BRG_BRGRL_250000_1X_32000000_1T           0xFC        // 0%
#define S1BRG_BRGRL_500000_1X_32000000_1T           0xFE        // 0%
#define S1BRG_BRGRL_1000000_1X_32000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_2X_32000000_12T            0xBB        // 0.64%
#define S1BRG_BRGRL_4800_2X_32000000_12T            0xDD        // -0.79%
#define S1BRG_BRGRL_9600_2X_32000000_12T            0xEF        // 2.12%
#define S1BRG_BRGRL_19200_2X_32000000_12T           0xF7        // -3.55%
#define S1BRG_BRGRL_38400_2X_32000000_12T           0xFC        // 8.51%
#define S1BRG_BRGRL_57600_2X_32000000_12T           0xFD        // -3.55%

#define S1BRG_BRGRL_9600_2X_32000000_1T             0x30        // 0.16%
#define S1BRG_BRGRL_19200_2X_32000000_1T            0x98        // 0.16%
#define S1BRG_BRGRL_38400_2X_32000000_1T            0xCC        // 0.16%
#define S1BRG_BRGRL_57600_2X_32000000_1T            0xDD        // -0.79%
#define S1BRG_BRGRL_115200_2X_32000000_1T           0xEF        // 2.12%
#define S1BRG_BRGRL_230400_2X_32000000_1T           0xF7        // -3.55%
#define S1BRG_BRGRL_250000_2X_32000000_1T           0xF8        // 0%
#define S1BRG_BRGRL_500000_2X_32000000_1T           0xFC        // 0%
#define S1BRG_BRGRL_1000000_2X_32000000_1T          0xFE        // 0%

#define S1BRG_BRGRL_2400_4X_32000000_12T            0x75        // -0.08%
#define S1BRG_BRGRL_4800_4X_32000000_12T            0xBB        // 0.64%
#define S1BRG_BRGRL_9600_4X_32000000_12T            0xDD        // -0.79%
#define S1BRG_BRGRL_19200_4X_32000000_12T           0xEF        // 2.12%
#define S1BRG_BRGRL_38400_4X_32000000_12T           0xF7        // -3.55%
#define S1BRG_BRGRL_57600_4X_32000000_12T           0xFA        // -3.55%
#define S1BRG_BRGRL_115200_4X_32000000_12T          0xFD        // -3.55%

#define S1BRG_BRGRL_19200_4X_32000000_1T            0x30        // 0.16%
#define S1BRG_BRGRL_38400_4X_32000000_1T            0x98        // 0.16%
#define S1BRG_BRGRL_57600_4X_32000000_1T            0xBB        // 0.64%
#define S1BRG_BRGRL_115200_4X_32000000_1T           0xDD        // -0.79%
#define S1BRG_BRGRL_230400_4X_32000000_1T           0xEF        // 2.12%
#define S1BRG_BRGRL_250000_4X_32000000_1T           0xF0        // 0%
#define S1BRG_BRGRL_500000_4X_32000000_1T           0xF8        // 0%
#define S1BRG_BRGRL_750000_4X_32000000_1T           0xFB        // 6.67%
#define S1BRG_BRGRL_1000000_4X_32000000_1T          0xFC        // 0%

#define S1BRG_BRGRL_4800_8X_32000000_12T            0x75        // -0.08%
#define S1BRG_BRGRL_9600_8X_32000000_12T            0xBB        // 0.64%
#define S1BRG_BRGRL_19200_8X_32000000_12T           0xDD        // -0.79%
#define S1BRG_BRGRL_38400_8X_32000000_12T           0xEF        // 2.12%
#define S1BRG_BRGRL_57600_8X_32000000_12T           0xF4        // -3.55%
#define S1BRG_BRGRL_115200_8X_32000000_12T          0xFA        // -3.55%
#define S1BRG_BRGRL_230400_8X_32000000_12T          0xFD        // -3.55%

#define S1BRG_BRGRL_38400_8X_32000000_1T            0x30        // 0.16%
#define S1BRG_BRGRL_57600_8X_32000000_1T            0x75        // -0.08%
#define S1BRG_BRGRL_115200_8X_32000000_1T           0xBB        // 0.64%
#define S1BRG_BRGRL_230400_8X_32000000_1T           0xDD        // -0.79%
#define S1BRG_BRGRL_250000_8X_32000000_1T           0xE0        // 0%
#define S1BRG_BRGRL_500000_8X_32000000_1T           0xF0        // 0%
#define S1BRG_BRGRL_750000_8X_32000000_1T           0xF5        // -3.03%
#define S1BRG_BRGRL_1000000_8X_32000000_1T          0xF8        // 0%
#define S1BRG_BRGRL_1500000_8X_32000000_1T          0xFB        // 6.67%

// S1BRG 36MHz
#define S1BRG_BRGRL_2400_1X_36000000_12T            0xD9        // 0.16%
#define S1BRG_BRGRL_4800_1X_36000000_12T            0xEC        // -2.34%
#define S1BRG_BRGRL_9600_1X_36000000_12T            0xF6        // -2.34%
#define S1BRG_BRGRL_19200_1X_36000000_12T           0xFB        // -2.34%

#define S1BRG_BRGRL_4800_1X_36000000_1T             0x16        // 0.16%
#define S1BRG_BRGRL_9600_1X_36000000_1T             0x8B        // 0.16%
#define S1BRG_BRGRL_19200_1X_36000000_1T            0xC5        // -0.69%
#define S1BRG_BRGRL_38400_1X_36000000_1T            0xE3        // 1.02%
#define S1BRG_BRGRL_57600_1X_36000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_115200_1X_36000000_1T           0xF6        // -2.34%
#define S1BRG_BRGRL_230400_1X_36000000_1T           0xFB        // -2.34%

#define S1BRG_BRGRL_2400_2X_36000000_12T            0xB2        // 0.16%
#define S1BRG_BRGRL_4800_2X_36000000_12T            0xD9        // 0.16%
#define S1BRG_BRGRL_9600_2X_36000000_12T            0xEC        // -2.34%
#define S1BRG_BRGRL_19200_2X_36000000_12T           0xF6        // -2.34%
#define S1BRG_BRGRL_38400_2X_36000000_12T           0xFB        // -2.34%
#define S1BRG_BRGRL_57600_2X_36000000_12T           0xFD        // 8.51%

#define S1BRG_BRGRL_9600_2X_36000000_1T             0x16        // 0.16%
#define S1BRG_BRGRL_19200_2X_36000000_1T            0x8B        // 0.16%
#define S1BRG_BRGRL_38400_2X_36000000_1T            0xC5        // -0.69%
#define S1BRG_BRGRL_57600_2X_36000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_115200_2X_36000000_1T           0xEC        // -2.34%
#define S1BRG_BRGRL_230400_2X_36000000_1T           0xF6        // -2.34%
#define S1BRG_BRGRL_250000_2X_36000000_1T           0xF7        // 0%

#define S1BRG_BRGRL_750000_2X_36000000_1T           0xFD        // 0%

#define S1BRG_BRGRL_2400_4X_36000000_12T            0x64        // 0.16%
#define S1BRG_BRGRL_4800_4X_36000000_12T            0xB2        // 0.16%
#define S1BRG_BRGRL_9600_4X_36000000_12T            0xD9        // 0.16%
#define S1BRG_BRGRL_19200_4X_36000000_12T           0xEC        // -2.34%
#define S1BRG_BRGRL_38400_4X_36000000_12T           0xF6        // -2.34%
#define S1BRG_BRGRL_57600_4X_36000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_115200_4X_36000000_12T          0xFD        // 8.51%

#define S1BRG_BRGRL_19200_4X_36000000_1T            0x16        // 0.16%
#define S1BRG_BRGRL_38400_4X_36000000_1T            0x8B        // 0.16%
#define S1BRG_BRGRL_57600_4X_36000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_115200_4X_36000000_1T           0xD9        // 0.16%
#define S1BRG_BRGRL_230400_4X_36000000_1T           0xEC        // -2.34%
#define S1BRG_BRGRL_250000_4X_36000000_1T           0xEE        // 0%
#define S1BRG_BRGRL_500000_4X_36000000_1T           0xF7        // 0%
#define S1BRG_BRGRL_750000_4X_36000000_1T           0xFA        // 0%

#define S1BRG_BRGRL_1500000_4X_36000000_1T          0xFD        // 0%

#define S1BRG_BRGRL_4500000_4X_36000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_4800_8X_36000000_12T            0x64        // 0.16%
#define S1BRG_BRGRL_9600_8X_36000000_12T            0xB2        // 0.16%
#define S1BRG_BRGRL_19200_8X_36000000_12T           0xD9        // 0.16%
#define S1BRG_BRGRL_38400_8X_36000000_12T           0xEC        // -2.34%
#define S1BRG_BRGRL_57600_8X_36000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_115200_8X_36000000_12T          0xF9        // -6.99%
#define S1BRG_BRGRL_230400_8X_36000000_12T          0xFD        // 8.51%
#define S1BRG_BRGRL_250000_8X_36000000_12T          0xFD        // 0%

#define S1BRG_BRGRL_750000_8X_36000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_38400_8X_36000000_1T            0x16        // 0.16%
#define S1BRG_BRGRL_57600_8X_36000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_115200_8X_36000000_1T           0xB2        // 0.16%
#define S1BRG_BRGRL_230400_8X_36000000_1T           0xD9        // 0.16%
#define S1BRG_BRGRL_250000_8X_36000000_1T           0xDC        // 0%
#define S1BRG_BRGRL_500000_8X_36000000_1T           0xEE        // 0%
#define S1BRG_BRGRL_750000_8X_36000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_1000000_8X_36000000_1T          0xF7        // 0%
#define S1BRG_BRGRL_1500000_8X_36000000_1T          0xFA        // 0%
#define S1BRG_BRGRL_3000000_8X_36000000_1T          0xFD        // 0%
#define S1BRG_BRGRL_4500000_8X_36000000_1T          0xFE        // 0%

// S1BRG 48MHz
#define S1BRG_BRGRL_2400_1X_48000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_4800_1X_48000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_9600_1X_48000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_19200_1X_48000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_38400_1X_48000000_12T           0xFD        // 8.51%
#define S1BRG_BRGRL_57600_1X_48000000_12T           0xFE        // 8.51%
#define S1BRG_BRGRL_115200_1X_48000000_12T          0xFF        // 8.51%

#define S1BRG_BRGRL_9600_1X_48000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_19200_1X_48000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_38400_1X_48000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_57600_1X_48000000_1T            0xE6        // 0.16%
#define S1BRG_BRGRL_115200_1X_48000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_230400_1X_48000000_1T           0xF9        // -6.99%
#define S1BRG_BRGRL_250000_1X_48000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_500000_1X_48000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_1X_48000000_1T           0xFE        // 0%
#define S1BRG_BRGRL_1500000_1X_48000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_2X_48000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_4800_2X_48000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_9600_2X_48000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_19200_2X_48000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_38400_2X_48000000_12T           0xF9        // -6.99%
#define S1BRG_BRGRL_57600_2X_48000000_12T           0xFC        // 8.51%
#define S1BRG_BRGRL_115200_2X_48000000_12T          0xFE        // 8.51%
#define S1BRG_BRGRL_230400_2X_48000000_12T          0xFF        // 8.51%
#define S1BRG_BRGRL_250000_2X_48000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_19200_2X_48000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_38400_2X_48000000_1T            0xB2        // 0.16%
#define S1BRG_BRGRL_57600_2X_48000000_1T            0xCC        // 0.16%
#define S1BRG_BRGRL_115200_2X_48000000_1T           0xE6        // 0.16%
#define S1BRG_BRGRL_230400_2X_48000000_1T           0xF3        // 0.16%
#define S1BRG_BRGRL_250000_2X_48000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_500000_2X_48000000_1T           0xFA        // 0%
#define S1BRG_BRGRL_750000_2X_48000000_1T           0xFC        // 0%
#define S1BRG_BRGRL_1000000_2X_48000000_1T          0xFD        // 0%
#define S1BRG_BRGRL_1500000_2X_48000000_1T          0xFE        // 0%
#define S1BRG_BRGRL_3000000_2X_48000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_2400_4X_48000000_12T            0x30        // 0.16%
#define S1BRG_BRGRL_4800_4X_48000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_9600_4X_48000000_12T            0xCC        // 0.16%
#define S1BRG_BRGRL_19200_4X_48000000_12T           0xE6        // 0.16%
#define S1BRG_BRGRL_38400_4X_48000000_12T           0xF3        // 0.16%
#define S1BRG_BRGRL_57600_4X_48000000_12T           0xF7        // -3.55%
#define S1BRG_BRGRL_115200_4X_48000000_12T          0xFC        // 8.51%
#define S1BRG_BRGRL_230400_4X_48000000_12T          0xFE        // 8.51%
#define S1BRG_BRGRL_250000_4X_48000000_12T          0xFE        // 0%
#define S1BRG_BRGRL_500000_4X_48000000_12T          0xFF        // 0%

#define S1BRG_BRGRL_38400_4X_48000000_1T            0x64        // 0.16%
#define S1BRG_BRGRL_57600_4X_48000000_1T            0x98        // 0.16%
#define S1BRG_BRGRL_115200_4X_48000000_1T           0xCC        // 0.16%
#define S1BRG_BRGRL_230400_4X_48000000_1T           0xE6        // 0.16%
#define S1BRG_BRGRL_250000_4X_48000000_1T           0xE8        // 0%
#define S1BRG_BRGRL_500000_4X_48000000_1T           0xF4        // 0%
#define S1BRG_BRGRL_750000_4X_48000000_1T           0xF8        // 0%
#define S1BRG_BRGRL_1000000_4X_48000000_1T          0xFA        // 0%
#define S1BRG_BRGRL_1500000_4X_48000000_1T          0xFC        // 0%
#define S1BRG_BRGRL_3000000_4X_48000000_1T          0xFE        // 0%
#define S1BRG_BRGRL_6000000_4X_48000000_1T          0xFF        // 0%

#define S1BRG_BRGRL_4800_8X_48000000_12T            0x30        // 0.16%
#define S1BRG_BRGRL_9600_8X_48000000_12T            0x98        // 0.16%
#define S1BRG_BRGRL_19200_8X_48000000_12T           0xCC        // 0.16%
#define S1BRG_BRGRL_38400_8X_48000000_12T           0xE6        // 0.16%
#define S1BRG_BRGRL_57600_8X_48000000_12T           0xEF        // 2.12%
#define S1BRG_BRGRL_115200_8X_48000000_12T          0xF7        // -3.55%
#define S1BRG_BRGRL_230400_8X_48000000_12T          0xFC        // 8.51%
#define S1BRG_BRGRL_250000_8X_48000000_12T          0xFC        // 0%
#define S1BRG_BRGRL_500000_8X_48000000_12T          0xFE        // 0%
#define S1BRG_BRGRL_1000000_8X_48000000_12T         0xFF        // 0%

#define S1BRG_BRGRL_57600_8X_48000000_1T            0x30        // 0.16%
#define S1BRG_BRGRL_115200_8X_48000000_1T           0x98        // 0.16%
#define S1BRG_BRGRL_230400_8X_48000000_1T           0xCC        // 0.16%
#define S1BRG_BRGRL_250000_8X_48000000_1T           0xD0        // 0%
#define S1BRG_BRGRL_500000_8X_48000000_1T           0xE8        // 0%
#define S1BRG_BRGRL_750000_8X_48000000_1T           0xF0        // 0%
#define S1BRG_BRGRL_1000000_8X_48000000_1T          0xF4        // 0%
#define S1BRG_BRGRL_1500000_8X_48000000_1T          0xF8        // 0%
#define S1BRG_BRGRL_3000000_8X_48000000_1T          0xFC        // 0%
#define S1BRG_BRGRL_6000000_8X_48000000_1T          0xFE        // 0%

/*
*************************************************************************************
*/
#endif



