/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if !defined(ARDUINO_GENERIC_G031J4) && !defined(ARDUINO_GENERIC_G031J6)
#include "variant_DISCO_G0316.h"
#else
#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0                     A0
#define PA1                     A1
#define PA2                     A2
#define PA8                     3
#define PA11                    A3
#define PA12                    A4
#define PA13                    A5
#define PA14                    A6
#define PA15                    8
#define PB0                     A7
#define PB1                     A8
#define PB5                     11
#define PB6                     12
#define PB7                     A9
#define PB8                     14
#define PB9                     15
#define PC14                    16 // HSE_BYPASS
#define PF2                     17
#define PA9_R                   18
#define PA10_R                  19

// Alternate pins number
#define PB0_ALT1                (PB0 | ALT1)
#define PB1_ALT1                (PB1 | ALT1)
#define PB1_ALT2                (PB1 | ALT2)
#define PB6_ALT1                (PB6 | ALT1)

#define NUM_DIGITAL_PINS        20
#define NUM_REMAP_PINS          2
#define NUM_ANALOG_INPUTS       10

// On-board LED pin number
#ifndef LED_BUILTIN
#define LED_BUILTIN             PA12
#endif

// On-board user button
#ifndef USER_BTN
#define USER_BTN                PF2
#endif

// SPI definitions
#ifndef PIN_SPI_SS
#define PIN_SPI_SS              PA15
#endif
#ifndef PIN_SPI_SS1
#define PIN_SPI_SS1             PB0
#endif
#ifndef PIN_SPI_SS2
#define PIN_SPI_SS2             PA0
#endif
#ifndef PIN_SPI_SS3
#define PIN_SPI_SS3             PA13
#endif
#ifndef PIN_SPI_MOSI
#define PIN_SPI_MOSI            PA2
#endif
#ifndef PIN_SPI_MISO
#define PIN_SPI_MISO            PA11
#endif
#ifndef PIN_SPI_SCK
#define PIN_SPI_SCK             PA1
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA            PB9
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL            PB8
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
#define TIMER_TONE              TIM14
#endif
#ifndef TIMER_SERVO
#define TIMER_SERVO             TIM16
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
#define SERIAL_UART_INSTANCE    1
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX           PB7
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX           PB6
#endif

#ifdef __cplusplus
} // extern "C"
#endif

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
  #define SERIAL_PORT_MONITOR   Serial
  #define SERIAL_PORT_HARDWARE  Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
#endif /* ARDUINO_GENERIC_* */
