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
#if defined(ARDUINO_GENERIC_G051K6TX) || defined(ARDUINO_GENERIC_G051K6UX) ||\
    defined(ARDUINO_GENERIC_G051K8TX) || defined(ARDUINO_GENERIC_G051K8UX) ||\
    defined(ARDUINO_GENERIC_G061K6TX) || defined(ARDUINO_GENERIC_G061K6UX) ||\
    defined(ARDUINO_GENERIC_G061K8TX) || defined(ARDUINO_GENERIC_G061K8UX)
#include "pins_arduino.h"

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
  PF_2,
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

#endif /* ARDUINO_GENERIC_* */
