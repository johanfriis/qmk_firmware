// clang-format off
#include "tapdance.h"

// Determine the current tap dance state
td_state_t cur_dance(qk_tap_dance_state_t *state) {
  switch (state->count) {
    case 1:
      if (!state->pressed)
        return TD_SINGLE_TAP;
      else
        return TD_SINGLE_HOLD;
    case 2:
      return TD_DOUBLE_TAP;
    default:
      return TD_UNKNOWN;
  }
}

static td_tap_t td_nav_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

// Functions that control what our tap dance key does
void td_nav_finished(qk_tap_dance_state_t *state, void *user_data) {
  td_nav_tap_state.state = cur_dance(state);
  switch (td_nav_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_SPACE);
      break;
    case TD_SINGLE_HOLD:
      layer_on(_NAVIGATE);
      break;
    case TD_DOUBLE_TAP:
      if (layer_state_is(_NAVIGATE))
        layer_off(_NAVIGATE);
      else
        layer_on(_NAVIGATE);
      break;
    default:
      break;
  }
}

void td_nav_reset(qk_tap_dance_state_t *state, void *user_data) {
  if (td_nav_tap_state.state == TD_SINGLE_HOLD)
    layer_off(_NAVIGATE);
  td_nav_tap_state.state = TD_NONE;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [KC_TD_NAV] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, td_nav_finished, td_nav_reset, 275)
};
