// clang-format off
#pragma once

#include "config.h"
#include "keymap.h"
#include "quantum/process_keycode/process_tap_dance.h"

typedef enum {
  TD_NONE,
  TD_UNKNOWN,
  TD_SINGLE_TAP,
  TD_SINGLE_HOLD,
  TD_DOUBLE_TAP
} td_state_t;

typedef struct {
  bool       is_press_action;
  td_state_t state;
} td_tap_t;



// Declare the functions to be used with your tap dance key(s)

// Function associated with all tap dances
td_state_t cur_dance(qk_tap_dance_state_t *state);

// Functions associated with individual tap dances
void td_nav_finished(qk_tap_dance_state_t *state, void *user_data);
void td_nav_reset(qk_tap_dance_state_t *state, void *user_data);

// clang-format on
