/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
/*
 * Automatically generated from STM32F412R(E-G)Tx.xml, STM32F412R(E-G)Yx.xml
 * STM32F412R(E-G)YxP.xml
 * CubeMX DB release 6.0.20
 */
#if defined(ARDUINO_PYBSTICK26_PRO)
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT1, 128);).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC1_IN0
  // {PA_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1
  {PA_2, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2
  {PA_3, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3
  {PA_4, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4
  {PA_5, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
  // {PA_6, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
  {PA_7, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7
  // {PB_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8
  // {PB_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9
  // {PC_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10
  // {PC_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_IN11
  // {PC_2, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC1_IN12
  {PC_3, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC1_IN13
  // {PC_4, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14
  {PC_5, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC1_IN15
  {NC,   NP,   0}
};
#endif

//*** No DAC ***

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PB_3,      I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF9_I2C2)},
  // {PB_4,      I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF9_I2C3)},
  {PB_7,      I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  // {PB_8,      I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF9_I2C3)},
  {PB_9,      I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  // {PB_9_ALT1, I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF9_I2C2)},
  // {PC_9,      I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  // {PA_8,  I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
  // {PB_6,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_8,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_10, I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {NC,    NP,   0}
};
#endif

//*** TIM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_TIM[] = {
  // {PA_0_ALT1,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PA_0,       TIM5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 1, 0)}, // TIM5_CH1
  // {PA_1,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  // {PA_1_ALT1,  TIM5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 2, 0)}, // TIM5_CH2
  // {PA_2_ALT1,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PA_2,       TIM5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 3, 0)}, // TIM5_CH3
  // {PA_2_ALT2,  TIM9,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 1, 0)}, // TIM9_CH1
  // {PA_3_ALT1,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
  {PA_3,       TIM5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 4, 0)}, // TIM5_CH4
  // {PA_3_ALT2,  TIM9,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 2, 0)}, // TIM9_CH2
  {PA_5,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  // {PA_5_ALT1,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
  // {PA_6,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  // {PA_6_ALT1,  TIM13, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM13, 1, 0)}, // TIM13_CH1
  // {PA_7_ALT1,  TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_7,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  // {PA_7_ALT2,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
  // {PA_7_ALT3,  TIM14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM14, 1, 0)}, // TIM14_CH1
  // {PA_8,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 0)}, // TIM1_CH1
  // {PA_9,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 0)}, // TIM1_CH2
  {PA_10,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 0)}, // TIM1_CH3
  // {PA_11,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 4, 0)}, // TIM1_CH4
  {PA_15,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  // {PB_0_ALT1,  TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_0,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  // {PB_0_ALT2,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
  // {PB_1_ALT1,  TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
  // {PB_1_ALT2,  TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PB_1,       TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
  {PB_3,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  {PB_4,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  // {PB_5,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  // {PB_6,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
  {PB_7,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
  {PB_8,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
  // {PB_8_ALT1,  TIM10, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM10, 1, 0)}, // TIM10_CH1
  {PB_9,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  // {PB_9_ALT1,  TIM11, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM11, 1, 0)}, // TIM11_CH1
  {PB_10,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PB_13,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
  {PB_14,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
  // {PB_14_ALT1, TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
  // {PB_14_ALT2, TIM12, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 1, 0)}, // TIM12_CH1
  {PB_15,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
  // {PB_15_ALT1, TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
  // {PB_15_ALT2, TIM12, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 2, 0)}, // TIM12_CH2
  // {PC_6,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  // {PC_6_ALT1,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 0)}, // TIM8_CH1
  // {PC_7,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  // {PC_7_ALT1,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 0)}, // TIM8_CH2
  // {PC_8,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  // {PC_8_ALT1,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 0)}, // TIM8_CH3
  // {PC_9,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  // {PC_9_ALT1,  TIM8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 4, 0)}, // TIM8_CH4
  {NC,         NP,    0}
};
#endif

//*** UART ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_2,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  // {PA_9,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  // {PA_11, USART6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)},
  {PA_15, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  // {PB_6,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_10, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_6,  USART6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)},
  // {PC_10, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_3,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_10, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  // {PA_12, USART6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)},
  {PB_3,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_7,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PC_5,  USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_7,  USART6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)},
  // {PC_11, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  // {PA_1,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  // {PA_12, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_14, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  // {PA_0,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  // {PA_11, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_13, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART3)},
  {NC,    NP,     0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  // {PA_1,      SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PA_7,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PA_10,     SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI5)},
  // {PB_5,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PB_5_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  // {PB_8,      SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI5)},
  // {PB_15,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_3,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PC_12,     SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  // {PA_6,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PA_11,     SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI4)},
  // {PA_12,     SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI5)},
  {PB_4,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PB_4_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_14,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PC_2,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PC_11,     SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PB_0,       SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI5)},
  {PB_3,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PB_3_ALT1,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_10,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PB_12,      SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_SPI3)},
  {PB_13,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PB_13_ALT1, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI4)},
  {PC_7,       SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PC_10,      SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {NC,         NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PA_4_ALT1,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PA_15,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  // {PA_15_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  // {PB_1,       SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI5)},
  {PB_9,       SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PB_12,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  // {PB_12_ALT1, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI4)},
  {NC,         NP,   0}
};
#endif

//*** CAN ***

#ifdef HAL_CAN_MODULE_ENABLED
WEAK const PinMap PinMap_CAN_RD[] = {
  // {PA_11, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)},
  // {PB_5,  CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)},
  {PB_8,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF8_CAN1)},
  {PB_12, CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_CAN_MODULE_ENABLED
WEAK const PinMap PinMap_CAN_TD[] = {
  // {PA_12, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)},
  // {PB_6,  CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)},
  {PB_9,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF8_CAN1)},
  {PB_13, CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)},
  {NC,    NP,   0}
};
#endif

//*** No ETHERNET ***

//*** QUADSPI ***

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_DATA0[] = {
  // {PA_6, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // QUADSPI_BK2_IO0
  {PC_9, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_BK1_IO0
  {NC,   NP,      0}
};
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_DATA1[] = {
  // {PA_7,  QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // QUADSPI_BK2_IO1
  {PC_10, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_BK1_IO1
  {NC,    NP,      0}
};
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_DATA2[] = {
  // {PC_4, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // QUADSPI_BK2_IO2
  {PC_8, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_BK1_IO2
  {NC,   NP,      0}
};
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_DATA3[] = {
  {PA_1, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_BK1_IO3
  // {PC_5, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // QUADSPI_BK2_IO3
  {NC,   NP,      0}
};
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_SCLK[] = {
  // {PB_1, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_CLK
  {PB_2, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_CLK
  {NC,   NP,      0}
};
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
WEAK const PinMap PinMap_QUADSPI_SSEL[] = {
  {PB_6,  QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // QUADSPI_BK1_NCS
  // {PC_11, QUADSPI, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_QSPI)}, // QUADSPI_BK2_NCS
  {NC,    NP,      0}
};
#endif

//*** USB ***

#if defined(HAL_PCD_MODULE_ENABLED) || defined(HAL_HCD_MODULE_ENABLED)
WEAK const PinMap PinMap_USB_OTG_FS[] = {
  // {PA_8,  USB_OTG_FS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // USB_OTG_FS_SOF
  // {PA_9,  USB_OTG_FS, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF10_OTG_FS)}, // USB_OTG_FS_VBUS
  // {PA_10, USB_OTG_FS, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // USB_OTG_FS_ID
  {PA_11, USB_OTG_FS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // USB_OTG_FS_DM
  {PA_12, USB_OTG_FS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG_FS)}, // USB_OTG_FS_DP
  {NC,    NP,         0}
};
#endif

//*** SD ***

#ifdef HAL_SD_MODULE_ENABLED
WEAK const PinMap PinMap_SD[] = {
  {PA_6,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDIO)}, // SDIO_CMD
  {PA_8,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D1
  {PA_9,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D2
  // {PB_4,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D0
  {PB_5,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D3
  {PB_6,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D0
  // {PB_8,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D4
  // {PB_9,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D5
  // {PB_10, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D7
  // {PB_14, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D6
  {PB_15, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDIO)}, // SDIO_CK
  //  {PC_6,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D6
  //  {PC_7,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D7
  // {PC_8,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D0
  // {PC_9,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D1
  // {PC_10, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D2
  // {PC_11, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDIO)}, // SDIO_D3
  // {PC_12, SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDIO)}, // SDIO_CK
  // {PD_2,  SDIO, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDIO)}, // SDIO_CMD
  {NC,    NP,   0}
};
#endif

#endif /* ARDUINO_PYBSTICK26_PRO */
