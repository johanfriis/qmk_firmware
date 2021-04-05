#include "keymap.h"

// clang-format off

void keyboard_post_init_user(void) {
  rgb_matrix_disable();
  planck_ez_left_led_level(0);
  planck_ez_right_led_level(0);
}

// clang-format on
