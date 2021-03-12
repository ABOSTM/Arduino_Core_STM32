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
#if defined(ARDUINO_GENERIC_WL54JCIX) || defined(ARDUINO_GENERIC_WL55JCIX) ||\
    defined(ARDUINO_GENERIC_WLE4J8IX) || defined(ARDUINO_GENERIC_WLE4JBIX) ||\
    defined(ARDUINO_GENERIC_WLE4JCIX) || defined(ARDUINO_GENERIC_WLE5J8IX) ||\
    defined(ARDUINO_GENERIC_WLE5JBIX) || defined(ARDUINO_GENERIC_WLE5JCIX)
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
  PC_5,
  PC_6,
  PC_13,
  PC_14,
  PC_15,
  PH_3
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  10, // A0,  PA10
  11, // A1,  PA11
  12, // A2,  PA12
  13, // A3,  PA13
  14, // A4,  PA14
  15, // A5,  PA15
  17, // A6,  PB1
  18, // A7,  PB2
  19, // A8,  PB3
  20, // A9,  PB4
  29, // A10, PB13
  30  // A11, PB14
};

#endif /* ARDUINO_GENERIC_* */
