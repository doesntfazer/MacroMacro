// Copyright 2023 doesntfazer (@doesntfazer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#ifdef OLED_ENABLE
#   define OLED_DISPLAY_128X32
#   define I2C1_SDA_PIN        GP0
#   define I2C1_SCL_PIN        GP1
#   define I2C_DRIVER I2CD0
#endif