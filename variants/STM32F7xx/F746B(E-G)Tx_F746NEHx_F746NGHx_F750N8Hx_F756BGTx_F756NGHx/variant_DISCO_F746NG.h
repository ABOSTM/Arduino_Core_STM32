/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define PC7  0
#define PC6  1
#define PG6  2
#define PB4  3
#define PG7  4
#define PI0  5
#define PH6  6
#define PI3  7
#define PI2  8
#define PA15 9
#define PA8  10
#define PB15 11
#define PB14 12
#define PI1  13
#define PB9  14
#define PB8  15
#define PA0  A0
#define PF10 A1
#define PF9  A2
#define PF8  A3
#define PF7  A4
#define PF6  A5
#define PI11 22 // User btn
#define PB7  23 // ST-Link Rx
#define PA9  24 // ST-Link Tx
#define PC13 25 // SD detect

// This must be a literal
#define NUM_DIGITAL_PINS        26
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       6

// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN           13
#endif
#define LED_GREEN               LED_BUILTIN

// On-board user button
#ifndef USER_BTN
  #define USER_BTN              PI11
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1 //Connected to ST-Link
#endif
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PB7
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

// SD detect signal
#ifndef SD_DETECT_PIN
  #define SD_DETECT_PIN         PC13
#endif

/* Extra HAL modules */
#define HAL_DAC_MODULE_ENABLED
#define HAL_ETH_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR     Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE    Serial
  #endif
#endif
