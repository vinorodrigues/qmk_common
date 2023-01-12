// Copyright 2022 Keychron (https://www.keychron.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "stdint.h"
#include "quantum_keycodes.h"
#include "via.h"

enum custom_keycodes {
#ifdef VIA_ENABLE
    KC_MISSION_CONTROL = USER00,
#else
    KC_MISSION_CONTROL = SAFE_RANGE,
#endif
    KC_LAUNCHPAD,
    // KC_DO_NOT_DISTURB,
    KC_LOPTN,
    KC_ROPTN,
    KC_LCMMD,
    KC_RCMMD,
    KC_SIRI,
    KC_TASK_VIEW,
    KC_FILE_EXPLORER,
    KC_SCREEN_SHOT,
    KC_CORTANA
};

#define KC_MCTL KC_MISSION_CONTROL
#define KC_LPAD KC_LAUNCHPAD
// #define KC_DND  KC_DO_NOT_DISTURB
#define KC_TASK KC_TASK_VIEW
#define KC_FLXP KC_FILE_EXPLORER
#define KC_SNAP KC_SCREEN_SHOT
#define KC_CRTA KC_CORTANA

typedef struct PACKED {
    uint8_t len;
    uint8_t keycode[3];
} key_combination_t;

void housekeeping_task_keychron(void);
bool process_record_keychron(uint16_t keycode, keyrecord_t *record);

#ifdef RAW_ENABLE
bool dip_switch_update_keychron(uint8_t index, bool active);
#endif // RAW_ENABLE

#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_keychron(uint8_t led_min, uint8_t led_max);
#endif // RGB_MATRIX_ENABLE

#ifdef LED_MATRIX_ENABLE
bool led_matrix_indicators_advanced_keychron(uint8_t led_min, uint8_t led_max);
#endif // LED_MATRIX_ENABLE
