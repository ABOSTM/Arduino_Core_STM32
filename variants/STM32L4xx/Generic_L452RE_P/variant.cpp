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
#if defined(ARDUINO_GENERIC_L452RE_P)
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
  PB_10,
  PB_11,
  PB_12,
  PB_13,
  PB_14,
  PB_15,
  PC_0,
  PC_1,
  PC_2,
  PC_3,
  PC_4,
  PC_6,
  PC_7,
  PC_8,
  PC_9,
  PC_10,
  PC_11,
  PC_12,
  PC_13,
  PC_14,
  PC_15,
  PH_0,
  PH_1,
  PH_3
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
  16, // A8,  PB0
  17, // A9,  PB1
  32, // A10, PC0
  33, // A11, PC1
  34, // A12, PC2
  35, // A13, PC3
  36  // A14, PC4
};

/******************************************************************************/
/*            PLL (clocked by HSE) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_HSE(bool bypass)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {};
  bool ret = false;

  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  if (bypass == false) {
    RCC_OscInitStruct.HSEState       = RCC_HSE_ON;
  } else {
    RCC_OscInitStruct.HSEState       = RCC_HSE_BYPASS;
  }
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 20;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) == HAL_OK) {
      PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USB;
      PeriphClkInit.UsbClockSelection = RCC_USBCLKSOURCE_PLLSAI1;
      PeriphClkInit.PLLSAI1.PLLSAI1Source = RCC_PLLSOURCE_HSE;
      PeriphClkInit.PLLSAI1.PLLSAI1M = 1;
      PeriphClkInit.PLLSAI1.PLLSAI1N = 12;
      PeriphClkInit.PLLSAI1.PLLSAI1P = RCC_PLLP_DIV7;
      PeriphClkInit.PLLSAI1.PLLSAI1Q = RCC_PLLQ_DIV2;
      PeriphClkInit.PLLSAI1.PLLSAI1R = RCC_PLLR_DIV2;
      PeriphClkInit.PLLSAI1.PLLSAI1ClockOut = RCC_PLLSAI1_48M2CLK;
      if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) == HAL_OK) {
        /* Configure the main internal regulator output voltage */
        if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) == HAL_OK) {
          ret = true;
        }
      }
    }
  }
  return ret;
}

/******************************************************************************/
/*            PLL (clocked by MSI) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_MSI(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {};
  bool ret = false;

  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 40;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) == HAL_OK) {
      PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USB;
      PeriphClkInit.UsbClockSelection = RCC_USBCLKSOURCE_PLLSAI1;
      PeriphClkInit.PLLSAI1.PLLSAI1Source = RCC_PLLSOURCE_MSI;
      PeriphClkInit.PLLSAI1.PLLSAI1M = 1;
      PeriphClkInit.PLLSAI1.PLLSAI1N = 24;
      PeriphClkInit.PLLSAI1.PLLSAI1P = RCC_PLLP_DIV7;
      PeriphClkInit.PLLSAI1.PLLSAI1Q = RCC_PLLQ_DIV2;
      PeriphClkInit.PLLSAI1.PLLSAI1R = RCC_PLLR_DIV2;
      PeriphClkInit.PLLSAI1.PLLSAI1ClockOut = RCC_PLLSAI1_48M2CLK;
      if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) == HAL_OK) {
        /* Configure the main internal regulator output voltage */
        if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) == HAL_OK) {
          ret = true;
        }
      }
    }
  }
  return ret;
}

WEAK void SystemClock_Config(void)
{
  /*
   * HSE_VALUE defined in the stm32l4xx_hal_conf_default.h is used.
   * If HSE_VALUE is not the same and you want use it, then
   * redefine SystemClock_Config() with the correct settings
   */
  /* 1- Try to start with HSE and external 8MHz xtal */
  if (SetSysClock_PLL_HSE(false) == false) {
    /* 2- If fail try to start with HSE and external clock */
    if (SetSysClock_PLL_HSE(true) == false) {
      /* 3- If fail start with MSI clock */
      if (SetSysClock_PLL_MSI() == false) {
        Error_Handler();
      }
    }
  }
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif /* ARDUINO_GENERIC_L452RE_P */
