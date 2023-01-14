// Copyright 2023 Vino Rodrigues (@vinorodrigues)
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "dice.h"

#ifdef RGB_MATRIX_ENABLE
#ifdef VIAL_PROTOCOL_VERSION
void rgb_matrix_indicators_dice(void) {
#else
bool rgb_matrix_indicators_dice(void) {
#endif  // VIAL_PROTOCOL_VERSION
    // xxxxxxxxxx

    #ifndef VIAL_PROTOCOL_VERSION
    return true;
    #endif  // VIAL_PROTOCOL_VERSION
}

bool led_update_dice(led_t led_state) {
    // xxxxxxxxxx
    return true;
}
#endif  // RGB_MATRIX_ENABLE

void keyboard_post_init_dice(void) {
    // xxxxxxxxxx
}

void matrix_scan_dice(void) {
    // xxxxxxxxxx
}

bool dice_process_toggle_keycode(keyrecord_t *record) {
    // xxxxxxxxxx
    return false;
}
