/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
<<<<<<<< HEAD:Marlin/src/pins/stm32f1/pins_CREALITY_V24S1.h
 * Creality v2.4.S1 (STM32F103RE / STM32F103RC) v101 as found in the Ender 7
 */

#define BOARD_INFO_NAME      "Creality v2.4.S1 V101"
#define DEFAULT_MACHINE_NAME "Creality3D"

//
// Heaters
//
#define HEATER_BED_PIN                      PA15  // HOT BED

#include "pins_CREALITY_V4.h"
========
 * polargraph.h - Polargraph-specific functions
 */

#include "../core/types.h"
#include "../core/macros.h"

extern float segments_per_second;
extern xy_pos_t draw_area_min, draw_area_max;
extern xy_float_t draw_area_size;
extern float polargraph_max_belt_len;

void inverse_kinematics(const xyz_pos_t &raw);
>>>>>>>> bugfix-2.1.x:Marlin/src/module/polargraph.h
