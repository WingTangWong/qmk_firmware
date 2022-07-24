/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define HAL_USE_SERIAL TRUE
#define MASTER_RIGHT
// #define EE_HANDS


#define SOFT_SERIAL_PIN B10        // USART TX pin
// #define USART1_REMAP            // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: about 460800 baud
                                   //  1: about 230400 baud (default)
                                   //  2: about 115200 baud
                                   //  3: about 57600 baud
                                   //  4: about 38400 baud
                                   //  5: about 19200 baud
#define SERIAL_USART_DRIVER SD3    // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20
#undef SERIAL_USART_RX_PIN

#ifdef MATRIX_ROWS
#undef MATRIX_ROWS
#define MATRIX_ROWS 10
#endif

#define MATRIX_COL_PINS { A1, A2, A3, A4, A5 }
// Double up the Row pins...
#define MATRIX_ROW_PINS { A6, A7, B0, B1, B12 , A6, A7, B0, B1, B12 }

// I2C pins:
// B8 SCL
// B9 SDA
// I2C pins
// B6 SCL
// B7 SDA

// #define I2C1_SCL B6
// #define I2C1_SDA B7

// #define OLED_DISPLAY_ADDRESS 0x3C
// #define OLED_DISPLAY_ADDRESS 0x3D
#define OLED_DISPLAY_128X64

#define RGB_DI_PIN A9
#define RGBLED_NUM 3
// #define WS2812_TRST_US 290
// #define WS2812_SPI_USE_CIRCULAR_BUFFER

#define RGBLIGHT_ANIMATIONS

// #define RGBLED_SPLIT
// (Optional) For split keyboards, the number of LEDs connected on each half directly wired to RGB_DI_PIN

#define ENCODERS_PAD_A { A11 }
#define ENCODERS_PAD_B { A12 }

#define UNUSED_PINS \
    { C15 }
