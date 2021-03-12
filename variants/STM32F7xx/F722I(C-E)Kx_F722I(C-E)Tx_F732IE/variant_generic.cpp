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
#if defined(ARDUINO_GENERIC_F722ICKX) || defined(ARDUINO_GENERIC_F722ICTX) ||\
    defined(ARDUINO_GENERIC_F722IEKX) || defined(ARDUINO_GENERIC_F722IETX) ||\
    defined(ARDUINO_GENERIC_F732IEKX) || defined(ARDUINO_GENERIC_F732IETX)
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
  PC_7,
  PC_8,
  PC_9,
  PC_10,
  PC_11,
  PC_12,
  PC_13,
  PC_14,
  PC_15,
  PD_0,
  PD_1,
  PD_2,
  PD_3,
  PD_4,
  PD_5,
  PD_6,
  PD_7,
  PD_8,
  PD_9,
  PD_10,
  PD_11,
  PD_12,
  PD_13,
  PD_14,
  PD_15,
  PE_0,
  PE_1,
  PE_2,
  PE_3,
  PE_4,
  PE_5,
  PE_6,
  PE_7,
  PE_8,
  PE_9,
  PE_10,
  PE_11,
  PE_12,
  PE_13,
  PE_14,
  PE_15,
  PF_0,
  PF_1,
  PF_2,
  PF_3,
  PF_4,
  PF_5,
  PF_6,
  PF_7,
  PF_8,
  PF_9,
  PF_10,
  PF_11,
  PF_12,
  PF_13,
  PF_14,
  PF_15,
  PG_0,
  PG_1,
  PG_2,
  PG_3,
  PG_4,
  PG_5,
  PG_6,
  PG_7,
  PG_8,
  PG_9,
  PG_10,
  PG_11,
  PG_12,
  PG_13,
  PG_14,
  PG_15,
  PH_0,
  PH_1,
  PH_2,
  PH_3,
  PH_4,
  PH_5,
  PH_6,
  PH_7,
  PH_8,
  PH_9,
  PH_10,
  PH_11,
  PH_12,
  PH_13,
  PH_14,
  PH_15,
  PI_0,
  PI_1,
  PI_2,
  PI_3,
  PI_4,
  PI_5,
  PI_6,
  PI_7,
  PI_8,
  PI_9,
  PI_10,
  PI_11
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
  36, // A14, PC4
  37, // A15, PC5
  83, // A16, PF3
  84, // A17, PF4
  85, // A18, PF5
  86, // A19, PF6
  87, // A20, PF7
  88, // A21, PF8
  89, // A22, PF9
  90  // A23, PF10
};

#endif /* ARDUINO_GENERIC_* */
