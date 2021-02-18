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
#if defined(ARDUINO_NUCLEO_G431KB)

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
// CN4
#define PA10 0
#define PA9  1
#define PA12 2
#define PB0  3
#define PB7  4
#define PA15 5
#define PB6  6
#define PF0  7
#define PF1  8
#define PA8  9
#define PA11 10
#define PB5  11
#define PB4  12
// CN3
#define PB8  13 // LED - SB7 ON SB6 OFF
#define PA0  A0
#define PA1  A1
#define PA3  A2 // SB12 ON VCP RX
#define PA4  A3
#define PA5  A4 // SB3 ON also connected to PB7
#define PA6  A5 // SB2 ON also connected to PA15
#define PA7  A6
#define PA2  A7 // SB1 ON VCP TX


#define NUM_DIGITAL_PINS        22
#define NUM_ANALOG_INPUTS       8

// On-board LED pin number
#ifndef LED_BUILTIN
#define LED_BUILTIN             PB8
#endif
#define LED_GREEN               LED_BUILTIN

// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PA15

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
#define TIMER_TONE              TIM6
#endif
#ifndef TIMER_SERVO
#define TIMER_SERVO             TIM7
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link
#endif

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX           PA3
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX           PA2
#endif

// Extra HAL modules
#define HAL_DAC_MODULE_ENABLED

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
  #define SERIAL_PORT_HARDWARE  Serial2
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
#endif /* ARDUINO_NUCLEO_G431KB */
