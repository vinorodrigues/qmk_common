// Copyright 2023 Vino Rodrigues (@vinorodrigues)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef RGB_MATRIX_ENABLE
#ifdef VIAL_PROTOCOL_VERSION
void rgb_matrix_indicators_caffeine(void);
#else
bool rgb_matrix_indicators_caffeine(void);
#endif  // VIAL_PROTOCOL_VERSION
bool led_update_caffeine(led_t led_state);
#endif  // RGB_MATRIX_ENABLE

void keyboard_post_init_caffeine(void);
void matrix_scan_caffeine(void);

bool caffeine_process_toggle_keycode(keyrecord_t *record);
