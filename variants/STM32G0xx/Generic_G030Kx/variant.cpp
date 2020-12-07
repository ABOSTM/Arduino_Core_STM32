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

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,
  PA_1,
  PA_2,
  PA_3,
  PA_4,
  PA_5,
  PA_6,
  PA_7,
  PA_8,
  PA_9,
  PA_10,
  PA_11,
  PA_12,
  PA_13,
  PA_14,
  PA_15,
  PB_0,
  PB_1,
  PB_2,
  PB_3,
  PB_4,
  PB_5,
  PB_6,
  PB_7,
  PB_8,
  PB_9,
  PC_6,
  PC_14,
  PC_15,
  PA_9_R,
  PA_10_R
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  11, // A8,  PA11
  12, // A9,  PA12
  13, // A10, PA13
  14, // A11, PA14
  16, // A12, PB0
  17, // A13, PB1
  18, // A14, PB2
  23  // A15, PB7
};

/******************************************************************************/
/*            PLL (clocked by HSE bypass) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_HSE(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  bool ret = false;

  /* Configure the main internal regulator output voltage */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 16;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) == HAL_OK) {
      ret = true;
    }
  }
  return ret;
}

/******************************************************************************/
/*            PLL (clocked by HSI) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_HSI(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  bool ret = false;

  /* Configure the main internal regulator output voltage */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 16;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) == HAL_OK) {
      ret = true;
    }
  }
  return ret;
}

WEAK void SystemClock_Config(void)
{
  /*
   * HSE_VALUE defined in the stm32g0xx_hal_conf_default.h is used.
   * If HSE_VALUE is not the same and you want use it, then:
   * - Redefine HSE_VALUE to the correct HSE_VALUE
   * and
   * - Redefine SystemClock_Config() with the correct settings
   */
  /* 1- Try to to start with HSE bypass and external clock */
  if (SetSysClock_PLL_HSE() == false) {
    /* 2- If fail start with HSI clock */
    if (SetSysClock_PLL_HSI() == false) {
      Error_Handler();
    }
  }
}

#ifdef __cplusplus
} // extern "C"
#endif
