/* drivers/input/touchscreen/test_params.h
 * 
 * 2010 - 2014 Shenzhen Huiding Technology Co.,Ltd.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be a reference 
 * to you, when you are integrating the GOODiX's CTP IC into your system, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * General Public License for more details.
 * 
 * Version: 1.0
 * Release Date: 2014/11/14
 *
 */

#ifndef _TEST_PARAMS_HEADER_
#define _TEST_PARAMS_HEADER_

#ifdef __cplusplus
//extern "C" {
#endif

#define TEST_TYPES                         0x401307
#define MAX_LIMIT_VALUE                    4080
#define MIN_LIMIT_VALUE                    1280
#define ACCORD_LIMIT                       500
#define OFFEST_LIMIT                       30
#define PERMIT_JITTER_LIMIT                30
#define SPECIAL_LIMIT                      30
#define MAX_KEY_LIMIT_VALUE                3720
#define MIN_KEY_LIMIT_VALUE                1120
#define RAWDATA_UNIFORMITY                 0
#define MODULE_TYPE                        2
#define VERSION_EQU                        "1143_1.1.0_0.1"
#define VERSION_GREATER                    "1143_1.1.0_0.1"
#define VERSION_BETWEEN1                   "1143_1.1.0_0.1"
#define VERSION_BETWEEN2                   "1143_1.1.0_0.1"
#define GT900_SHORT_THRESHOLD              30
#define GT900_DRV_DRV_RESISTOR_THRESHOLD   800
#define GT900_DRV_SEN_RESISTOR_THRESHOLD   500
#define GT900_SEN_SEN_RESISTOR_THRESHOLD   300
#define GT900_RESISTOR_WARN_THRESHOLD      800
#define GT900_DRV_GND_RESISTOR_THRESHOLD   300
#define GT900_SEN_GND_RESISTOR_THRESHOLD   300
#define GT900_SHORT_TEST_TIMES             3
#define TRI_PATTERN_R_RATIO                150
#define AVDD                               280

#define NC               {\
	0\
	}
#define KEY_NC           {\
	}
#define MODULE_CFG {\
0x02,0x38,0x04,0x80,0x07,0x05,0x3D,0x00,0x00,0x08,0x00,0x7F,0x6E,0x50,0x5E,0x01,0x11,0x00,0x11,0x12,0x1E,0x80,0x82,0xFA,0xC8,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x27,0x18,0x58,0x5A,0xB9,0x08,0x08,0x6D,0x38,0x0D,0x03,0x24,0x00,0x02,0x1E,0x78,0x00,0x94,0x52,0x14,0x04,0x04,0xE5,0x2C,0xAE,0x3B,0x91,0x4A,0x7F,0x59,0x75,0x68,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0A,0x14,0x03,0x0F,0x14,0x20,0x95,0x0F,0x07,0x8F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x12,0x13,0x1F,0x1E,0x1D,0x1C,0x1B,0x1A,0x19,0x18,0x17,0x16,0x15,0x14,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x93,0x01\
}

#define SEPCIALTESTNODE  {\
	209,4080,1280,0.350,223,4080,1280,0.300,224,4080,1280,0.300,253,4080,1280,0.300\
	}

#ifdef __cplusplus
//}
#endif
#endif