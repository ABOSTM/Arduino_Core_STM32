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
#if defined(ARDUINO_GENERIC_L011F3UX) || defined(ARDUINO_GENERIC_L011F4UX) ||\
    defined(ARDUINO_GENERIC_L021F4UX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,
  PA_1,
  PA_4,
  PA_5,
  PA_6,
  PA_7,
  PA_9,
  PA_10,
  PA_13,
  PA_14,
  PB_1,
  PB_6,
  PB_7,
  PB_9,
  PC_14,
  PC_15
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA4
  3,  // A3,  PA5
  4,  // A4,  PA6
  5,  // A5,  PA7
  10  // A6,  PB1
};

#endif /* ARDUINO_GENERIC_* */
