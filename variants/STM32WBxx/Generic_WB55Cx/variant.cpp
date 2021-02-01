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
#if defined(ARDUINO_GENERIC_WB55CC) || defined(ARDUINO_GENERIC_WB55CE) || defined(ARDUINO_GENERIC_WB55CG)
#include "pins_arduino.h"
#include "lock_resource.h"

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
  PC_14,
  PC_15,
  PE_4,
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
  8,  // A8,  PA8
  9   // A9,  PA9
};

/******************************************************************************/
/*            PLL (clocked by HSE) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_HSE(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {};
  bool ret = false;

  /* This prevents concurrent access to RCC registers by CPU2 (M0+) */
  hsem_lock(CFG_HW_RCC_SEMID, HSEM_LOCK_DEFAULT_RETRY);

  /* This prevents the CPU2 (M0+) to disable the HSI48 oscillator */
  hsem_lock(CFG_HW_CLK48_CONFIG_SEMID, HSEM_LOCK_DEFAULT_RETRY);

  /* Configure the main internal regulator output voltage */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI48 | RCC_OSCILLATORTYPE_HSI
                                     | RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSI48State = RCC_HSI48_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;

  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK4 | RCC_CLOCKTYPE_HCLK2
                                  | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSE;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.AHBCLK2Divider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.AHBCLK4Divider = RCC_SYSCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) == HAL_OK) {
      /* Initializes the peripherals clocks */
      PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_SMPS | RCC_PERIPHCLK_CLK48SEL
                                                 | RCC_PERIPHCLK_USB | RCC_PERIPHCLK_RNG;
      PeriphClkInitStruct.UsbClockSelection = RCC_USBCLKSOURCE_HSI48;
      PeriphClkInitStruct.RngClockSelection = RCC_RNGCLKSOURCE_HSI48;
      PeriphClkInitStruct.SmpsClockSelection = RCC_SMPSCLKSOURCE_HSE;
      PeriphClkInitStruct.SmpsDivSelection = RCC_SMPSCLKDIV_RANGE0;
      if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) == HAL_OK) {
        ret = true;
      }
    }
  }
  hsem_unlock(CFG_HW_RCC_SEMID);
  return ret;
}

/******************************************************************************/
/*            PLL (clocked by MSI) used as System clock source                */
/******************************************************************************/
static bool SetSysClock_PLL_MSI(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {};
  bool ret = false;

  /* This prevents concurrent access to RCC registers by CPU2 (M0+) */
  hsem_lock(CFG_HW_RCC_SEMID, HSEM_LOCK_DEFAULT_RETRY);

  /* This prevents the CPU2 (M0+) to disable the HSI48 oscillator */
  hsem_lock(CFG_HW_CLK48_CONFIG_SEMID, HSEM_LOCK_DEFAULT_RETRY);

  /* Configure the main internal regulator output voltage */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /*
   * Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI48 | RCC_OSCILLATORTYPE_HSI
                                     | RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSI48State = RCC_HSI48_ON;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.MSICalibrationValue = RCC_MSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_MSI;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 32;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) == HAL_OK) {
    /* Configure the SYSCLKSource, HCLK, PCLK1 and PCLK2 clocks dividers */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK4 | RCC_CLOCKTYPE_HCLK2
                                  | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.AHBCLK2Divider = RCC_SYSCLK_DIV2;
    RCC_ClkInitStruct.AHBCLK4Divider = RCC_SYSCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) == HAL_OK) {
      /* Initializes the peripherals clocks */
      PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_SMPS | RCC_PERIPHCLK_CLK48SEL
                                                 | RCC_PERIPHCLK_USB | RCC_PERIPHCLK_RNG;
      PeriphClkInitStruct.UsbClockSelection = RCC_USBCLKSOURCE_HSI48;
      PeriphClkInitStruct.RngClockSelection = RCC_RNGCLKSOURCE_HSI48;
      PeriphClkInitStruct.SmpsClockSelection = RCC_SMPSCLKSOURCE_HSI;
      PeriphClkInitStruct.SmpsDivSelection = RCC_SMPSCLKDIV_RANGE1;
      if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) == HAL_OK) {
        /* Enable MSI Auto calibration */
        HAL_RCCEx_EnableMSIPLLMode();
        ret = true;
      }
    }
  }
  hsem_unlock(CFG_HW_RCC_SEMID);
  return ret;
}

WEAK void SystemClock_Config(void)
{
  /*
   * HSE_VALUE defined in the stm32wbxx_hal_conf_default.h is used.
   * If HSE_VALUE is not the same and you want use it, then
   * redefine SystemClock_Config() with the correct settings
   */
  /* 1- Try to start with HSE and external 32MHz xtal */
  if (SetSysClock_PLL_HSE() == false) {
    /* 2- If fail start with MSI clock */
    if (SetSysClock_PLL_MSI() == false) {
      Error_Handler();
    }
  }
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif /* ARDUINO_GENERIC_* */
