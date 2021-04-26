#include <stdint.h>
#include "process_combo.h"
#include "keymap.h"

enum combos
{
  COMBO_UNDO,
  COMBO_COPY,
  COMBO_PASTE,
  COMBO_CUT,
  COMBO_SELECT_ALL,
  COMBO_PASTE_MATCH,

  COMBO_Q,
  COMBO_Y,
  COMBO_B,
  COMBO_Z,

  COMBO_6,
  COMBO_4,
  COMBO_0,
  COMBO_2,
  COMBO_8,
  COMBO_3,
  COMBO_1,
  COMBO_5,
  COMBO_7,
  COMBO_9,

  COMBO_AELIG,
  COMBO_OSLASH,
  COMBO_ARING,

  COMBO_ESCAPE,

  // This must be the last item in the enum.
  // This is used to automatically update the COMBO_COUNT.
  COMBO_LENGTH
};

int COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM undo_combo[] = {KC_X, KC_M, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_M, KC_V, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_V, KC_P, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM select_all_combo[] = {KC_X, KC_P, COMBO_END};
const uint16_t PROGMEM paste_match_combo[] = {KC_M, KC_P, COMBO_END};

const uint16_t PROGMEM kc_q_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM kc_y_combo[] = {KC_D, KC_W, COMBO_END};
const uint16_t PROGMEM kc_b_combo[] = {KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM kc_z_combo[] = {KC_C, KC_L, COMBO_END};

const uint16_t PROGMEM kc_6_combo[] = {KC_SPACE, KC_A, COMBO_END};
const uint16_t PROGMEM kc_4_combo[] = {KC_SPACE, KC_R, COMBO_END};
const uint16_t PROGMEM kc_0_combo[] = {KC_SPACE, KC_S, COMBO_END};
const uint16_t PROGMEM kc_2_combo[] = {KC_SPACE, KC_T, COMBO_END};
const uint16_t PROGMEM kc_8_combo[] = {KC_SPACE, KC_P, COMBO_END};
const uint16_t PROGMEM kc_3_combo[] = {KC_SPACE, KC_N, COMBO_END};
const uint16_t PROGMEM kc_1_combo[] = {KC_SPACE, KC_E, COMBO_END};
const uint16_t PROGMEM kc_5_combo[] = {KC_SPACE, KC_I, COMBO_END};
const uint16_t PROGMEM kc_7_combo[] = {KC_SPACE, KC_O, COMBO_END};
const uint16_t PROGMEM kc_9_combo[] = {KC_SPACE, KC_H, COMBO_END};

const uint16_t PROGMEM aelig_combo[]  = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM oslash_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM aring_combo[]  = {KC_A, KC_O, COMBO_END};

const uint16_t PROGMEM escape_combo[]  = {KC_A, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_UNDO]        = COMBO_ACTION(undo_combo),
    [COMBO_COPY]        = COMBO_ACTION(copy_combo),
    [COMBO_PASTE]       = COMBO_ACTION(paste_combo),
    [COMBO_CUT]         = COMBO_ACTION(cut_combo),
    [COMBO_SELECT_ALL]  = COMBO_ACTION(select_all_combo),
    [COMBO_PASTE_MATCH] = COMBO_ACTION(paste_match_combo),

    [COMBO_Q] = COMBO(kc_q_combo, KC_Q),
    [COMBO_Y] = COMBO(kc_y_combo, KC_Y),
    [COMBO_B] = COMBO(kc_b_combo, KC_B),
    [COMBO_Z] = COMBO(kc_z_combo, KC_Z),

    [COMBO_6] = COMBO(kc_6_combo, KC_6),
    [COMBO_4] = COMBO(kc_4_combo, KC_4),
    [COMBO_0] = COMBO(kc_0_combo, KC_0),
    [COMBO_2] = COMBO(kc_2_combo, KC_2),
    [COMBO_8] = COMBO(kc_8_combo, KC_8),
    [COMBO_3] = COMBO(kc_3_combo, KC_3),
    [COMBO_1] = COMBO(kc_1_combo, KC_1),
    [COMBO_5] = COMBO(kc_5_combo, KC_5),
    [COMBO_7] = COMBO(kc_7_combo, KC_7),
    [COMBO_9] = COMBO(kc_9_combo, KC_9),

    [COMBO_AELIG]  = COMBO(aelig_combo, _AELIG_),
    [COMBO_OSLASH] = COMBO(oslash_combo, _OSLSH_),
    [COMBO_ARING]  = COMBO(aring_combo, _ARING_),

    [COMBO_ESCAPE]  = COMBO(escape_combo, KC_ESCAPE),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch (combo_index) {
    case COMBO_UNDO:
      if (pressed) {
        tap_code16(LCMD(KC_Z));
      }
      break;
    case COMBO_COPY:
      if (pressed) {
        tap_code16(LCMD(KC_C));
      }
      break;
    case COMBO_PASTE:
      if (pressed) {
        tap_code16(LCMD(KC_V));
      }
      break;
    case COMBO_CUT:
      if (pressed) {
        tap_code16(LCMD(KC_X));
      }
      break;
    case COMBO_SELECT_ALL:
      if (pressed) {
        tap_code16(LCMD(KC_A));
      }
      break;
    case COMBO_PASTE_MATCH:
      if (pressed) {
        tap_code16(LSFT(LOPT(LCMD(KC_V))));
      }
      break;
  }
}
