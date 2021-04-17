#include <stdint.h>
#include "keymap.h"


enum combos
{
  XM_UNDO,
  MV_COPY,
  VP_PASTE,
  XV_CUT,
  XP_SELECT_ALL,
  MP_PASTE_MATCH,

  FD_KC_Q,
  DW_KC_Y,
  GC_KC_B,
  CL_KC_Z,
  // This must be the last item in the enum.
  // This is used to automatically update the COMBO_COUNT.
  COMBO_LENGTH
};

int COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM undo_combo[] = {KC_X, KC_M, COMBO_END};  // undo
const uint16_t PROGMEM copy_combo[] = {KC_M, KC_V, COMBO_END};  // copy
const uint16_t PROGMEM paste_combo[] = {KC_V, KC_P, COMBO_END};  // paste
const uint16_t PROGMEM cut_combo[] = {KC_X, KC_V, COMBO_END};  // cut
const uint16_t PROGMEM select_all_combo[] = {KC_X, KC_P, COMBO_END};  // select all
const uint16_t PROGMEM paste_match_combo[] = {KC_M, KC_P, COMBO_END};  // paste match

const uint16_t PROGMEM kc_q_combo[] = {KC_F, KC_D, COMBO_END};  // Q
const uint16_t PROGMEM kc_y_combo[] = {KC_D, KC_W, COMBO_END};  // Y
const uint16_t PROGMEM kc_b_combo[] = {KC_G, KC_C, COMBO_END};  // B
const uint16_t PROGMEM kc_z_combo[] = {KC_C, KC_L, COMBO_END};  // Z

combo_t key_combos[COMBO_COUNT] = {
    [XM_UNDO]        = COMBO_ACTION(undo_combo),
    [MV_COPY]        = COMBO_ACTION(copy_combo),
    [VP_PASTE]       = COMBO_ACTION(paste_combo),
    [XV_CUT]         = COMBO_ACTION(cut_combo),
    [XP_SELECT_ALL]  = COMBO_ACTION(select_all_combo),
    [MP_PASTE_MATCH] = COMBO_ACTION(paste_match_combo),

    [FD_KC_Q] = COMBO(kc_q_combo, KC_Q),
    [DW_KC_Y] = COMBO(kc_y_combo, KC_Y),
    [GC_KC_B] = COMBO(kc_b_combo, KC_B),
    [CL_KC_Z] = COMBO(kc_z_combo, KC_Z),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch (combo_index) {
    case XM_UNDO:
      if (pressed) {
        tap_code16(LCMD(KC_Z));
      }
      break;
    case MV_COPY:
      if (pressed) {
        tap_code16(LCMD(KC_C));
      }
      break;
    case VP_PASTE:
      if (pressed) {
        tap_code16(LCMD(KC_V));
      }
      break;
    case XV_CUT:
      if (pressed) {
        tap_code16(LCMD(KC_X));
      }
      break;
    case XP_SELECT_ALL:
      if (pressed) {
        tap_code16(LCMD(KC_A));
      }
      break;
    case MP_PASTE_MATCH:
      if (pressed) {
        tap_code16(LSFT(LOPT(LCMD(KC_V))));
      }
      break;
  }
}
