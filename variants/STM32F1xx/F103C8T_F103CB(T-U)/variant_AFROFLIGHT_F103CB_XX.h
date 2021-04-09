/*
 *******************************************************************************
 * Copyright (c) 2018-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PB9                     0
#define PB8                     1
#define PB7                     2
#define PB6                     3
#define PB5                     4
#define PB4                     5  // LED0
#define PB3                     6  // LED1
#define PA15                    7
#define PA12                    8
#define PA11                    9
#define PA10                    10
#define PA9                     11
#define PA8                     12
#define PB15                    13
#define PB14                    14
#define PB13                    15
#define PB12                    16
#define PC13                    17
#define PC14                    18
#define PC15                    19
#define PA0                     PIN_A0
#define PA1                     PIN_A1
#define PA2                     PIN_A2
#define PA3                     PIN_A3
#define PA4                     PIN_A4 // Board voltage ADC
#define PA5                     PIN_A5
#define PA6                     PIN_A6
#define PA7                     PIN_A7
#define PB0                     PIN_A8
#define PB1                     PIN_A9
#define PB10                    30
#define PB11                    31
// Other
#define PB2                     32 // BOOT1
#define PA13                    33 // SWDI0
#define PA14                    34 // SWCLK

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA1_ALT1                (PA1  | ALT1)
#define PA2_ALT1                (PA2  | ALT1)
#define PA3_ALT1                (PA3  | ALT1)
#define PA4_ALT1                (PA4  | ALT1)
#define PA5_ALT1                (PA5  | ALT1)
#define PA6_ALT1                (PA6  | ALT1)
#define PA7_ALT1                (PA7  | ALT1)
#define PA8_ALT1                (PA8  | ALT1)
#define PA9_ALT1                (PA9  | ALT1)
#define PA10_ALT1               (PA10 | ALT1)
#define PA11_ALT1               (PA11 | ALT1)
#define PA15_ALT1               (PA15 | ALT1)
#define PB0_ALT1                (PB0  | ALT1)
#define PB0_ALT2                (PB0  | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB10_ALT1               (PB10 | ALT1)
#define PB11_ALT1               (PB11 | ALT1)
#define PB13_ALT1               (PB13 | ALT1)
#define PB14_ALT1               (PB14 | ALT1)

#define NUM_DIGITAL_PINS        35
#define NUM_ANALOG_INPUTS       10

// On-board LED pin number
#define LED0                    PB4
#define LED1                    PB3
#ifndef LED_BUILTIN
  #define LED_BUILTIN           LED0
#endif

// On-board user button
#ifndef USER_BTN
  #define USER_BTN              ND
#endif

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PA4
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA5
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
  //On afroflight Rev 5 it's on i2c port 2 that MPU6050 is connected too
  #define PIN_WIRE_SDA          PB11
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB10
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM3
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM2
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

#define MPU_I2C_SDA             PB11
#define MPU_I2C_SCL             PB10
#define MPU_ADDR                0x68
#define MPU_INT                 PB13
/*
 * RC_CH1 T2C1                    PA0
 * RC_CH2 T2C2                    PA1
 * RC_CH3 T2C3/UA2_TX             PA2
 * RC_CH4 T2C4/UA2_RX             PA3
 * RC_CH5 T3C1                    PA6
 * RC_CH6 T3C2                    PA7
 * RC_CH7 T3C3                    PB0
 * RC_CH8 T3C4                    PB1
 *
 * PWM1 T1C1                      PA8
 * PMW2 T1C4                      PA11
 * PMW3 T4C1                      PB6
 * PMW4 T4C2                      PB7
 * PMW5 T4C3                      PB8
 * PMW6 T4C4                      PB9
 * SONAR_INT                      PA15
 * GPIO_BOTTOM                    PB5
 * TELEM_OUT                      PA13 // Warning, SWD access is lost when using this pin, bootloader via uart is required after
 *
 * BAT_ADC                        PA4 // Connected to 6 pin header Battery voltage in via resistor divider
 * ACC_INT                        PA5 // Connected to Intterupt pin of MMA84520 accelerometer I2C
 *
 * MAG_DRD                        PB12 //Connected to HMC5883L compass I2C
 * BEEP                           PA12 //Connected to Beep out transistor on 6 pin header
 *
 */

#ifdef ARDUINO_AFROFLIGHT_F103CB_12M
  #define HSE_VALUE    12000000U /*!< Value of the External oscillator in Hz */
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
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial1
  #endif
#endif
