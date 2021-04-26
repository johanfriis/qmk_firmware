// clang-format off

#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_planck_grid(
    KC_TAB,    KC_Q,     KC_W, KC_E, KC_R,    KC_T,    KC_Y, KC_U,    KC_I,      KC_O,   KC_P,      KC_BSPACE,
    KC_LCTRL,  KC_A,     KC_S, KC_D, KC_F,    KC_G,    KC_H, KC_J,    KC_K,      KC_L,   KC_SCOLON, KC_QUOTE,
    KC_LSHIFT, KC_Z,     KC_X, KC_C, KC_V,    KC_B,    KC_N, KC_M,    KC_COMMA,  KC_DOT, KC_SLASH,  KC_ENTER,
    THINGS,    OSL_SYS,  MRU,  XXXX, OSL_NUM, SPC_NAV, XXXX, OSL_SYM, OSL_LANG,  XXXX,   PLTRO,     ALFRED
  ),

  [_SYMBOL] = LAYOUT_planck_grid(
    ____,    KC_TILDE, KC_PIPE, KC_AMPR, KC_AT,    ____,    ____,     KC_PLUS,  KC_MINUS, KC_EQUAL, KC_ASTR,   ____,
    ____,    KC_LABK,  KC_LBRC, KC_LCBR, KC_LPRN,  KC_DQUO, KC_GRAVE, KC_RPRN,  KC_RCBR,  KC_RBRC,  KC_RABK,   ____,
    ____,    KC_PERC,  KC_BSLS, KC_CIRC, KC_SLASH, ____,    ____,     KC_HASH,  KC_UNDS,  KC_DLR,   KC_SCOLON, ____,
    KC_LCTL, KC_LOPT,  KC_LGUI, KC_COLN, KC_EXLM,  ____,    XXXX,     KC_QUES,  KC_QUOTE, KC_RGUI,  KC_ROPT,   KC_RCTL
  ),

  [_NAVIGATE] = LAYOUT_planck_grid(
    ____, ____,    ____,    ____,    ____,    ____, ____,    KC_PGDN,  KC_UP,   KC_PGUP,  ____,   ____,
    ____, KC_LSFT, KC_LCTL, KC_LOPT, KC_LCMD, ____, KC_HOME, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_END, ____,
    ____, ____,    ____,    ____,    ____,    ____, ____,    KC_TAB,   ____,    ____,     ____,   ____,
    ____, ____,    ____,    ____,    KC_DEL,  ____, XXXX,    KC_ENTER, ____,    ____,     ____,   ____
  ),

  [_NUMPAD] = LAYOUT_planck_grid(
    ____, ____,      ____,     ____,    ____,    KC_A, KC_B, KC_7, KC_8, KC_9, ____, ____,
    ____, KC_LSHIFT, KC_LCTRL, KC_LALT, KC_LGUI, KC_C, KC_D, KC_4, KC_5, KC_6, ____, ____,
    ____, ____,      ____,     ____,    ____,    KC_E, KC_F, KC_1, KC_2, KC_3, KC_0, ____,
    ____, ____,      ____,     ____,    ____,    XXXX, ____, KC_0, ____, ____, ____, ____
  ),

  [_SYSTEM] = LAYOUT_planck_grid(
    ____,  DSKTP_1, DSKTP_2, DSKTP_3, DSKTP_4, ____,    ____,    DSKTP_5, DSKTP_6,  DSKTP_7,  DSKTP_8,    ____,
    ____,  ____,    ____,    ____,    EXPOSE,  ____,    ____,    ____,    ____,     ____,     ____,       ____,
    ____,  ____,    ____,    ____,    ____,    BRI_MIN, BRI_MAX, MUTE,    VOL_DOWN, VOL_UP,   ____,       ____,
    RESET, ____,    ____,    ____,    ____,    ____,    XXXX,    STOP,    PREV_TRK, NEXT_TRK, PLAY_PAUSE, ____
  ),

  [_LANGUAGE] = LAYOUT_planck_grid(
    ____, ____, ____,     ____,      ____,    ____, ____, ____, ____, ____, ____,    ____,
    ____, ____, KC_ARING, KC_OSLSH, KC_AELIG, ____, ____, ____, ____, ____, KC_RSFT, ____,
    ____, ____, ____,     ____,      ____,    ____, ____, ____, ____, ____, ____,    ____,
    ____, ____, ____,     ____,      ____,    XXXX, ____, ____, ____, ____, ____,    ____
  ),

};
