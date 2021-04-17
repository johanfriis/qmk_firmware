#include "keymap.h"
#include "features/mod_hold_n_tap.h"
#include "features/oneshot.h"

// clang-format off

//   HIRU
//
//   [DEF] = LAYOUT_mini_atreus(
// //------+-------+-------+-------+------            ------+-------+-------+-------+-------//
//   __Q__ , __F__ , __D__ , __W__ , _____     ,      _____ , __G__ , __C__ , __L__ , __Y__,
// //------+-------+-------+-------+------            ------+-------+-------+-------+-------//
//   __A__ , __S__ , __O__ , __N__ , __E__     ,      __T__ , __H__ , __I__ , __R__ , __U__,
// //------+-------+-------+-------+------            ------+-------+-------+-------+-------//
//   __B__ , __Z__ , __V__ , __M__ , _TAB_     ,      _ENT_ , __P__ , __X__ , __J__ , __K__,
// //------+-------+-------+-------+---------     -----------+-------+-------+-------+------//
//                   _COM_ , _NAV_ , _SFT_     ,      _SYM_ , _SPC_ , _DOT_
//                //-------+-------+------------------------+-------+------//

// //------+-----__X__---__J__-----+-------          -------+-----__Q__---__Z__-----+-------//
//   __Q__ , __F__ , __D__ , __W__ , __Y__     ,      __B__ , __G__ , __C__ , __L__ , __Z__,
// //------+-------+-------+-------+-------          -------+-------+-------+-------+-------//
//   __A__ , __R__ , __S__ , __T__ , _COM_     ,      _DOT_ , __N__ , __E__ , __I__ , __O__,
// //------+-------+-------+-------+-------          -------+-------+-------+-------+-------//
//   __X__ , __M__ , __V__ , __P__ , _____     ,      _____ , __H__ , __U__ , __K__ , __J__,
// //------+-------+-------+-------+---------     ----------+-------+-------+-------+-------//
//                   _____ , _NAV_ , _SFT_     ,      _SYM_ , _SPC_ , _____
//                //-------+-------+------------------------+-------+------//



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 Add combos for:
  * Q on R1-C7/8
  * Z on R1-C8/9
  * X on R1-C2/3
  * J on R1-C3/4
  * UCCP (Undo, Cut, Copy, Paste)
    * Undo on R3-C1/2
    * Cut on R3-C1/3
    * Copy on R3-C2/3
    * Paste on R3-C3/4
    * Paste Match on R3-C2/4
  * Select All on R3-C1/4

 Missing:



*/
#undef  _______
#define _______ KC_TRANSPARENT

  [DEF] = LAYOUT_3x10_6(


//---------+-------__X__-----__J__-------+-------            ---------+-------__Q__-----__Z__-------+---------//
   ___Q___ , ___F___ , ___D___ , ___W___ , ___Y___     ,      ___B___ , ___G___ , ___C___ , ___L___ , ___Z___ ,
//---------+---------+---------+---------+---------          ---------+---------+---------+---------+---------//
   ___A___ , ___R___ , ___S___ , ___T___ , _COMMA_     ,      __DOT__ , ___N___ , ___E___ , ___I___ , ___O___ ,
//---------+---------+---------+---------+---------          ---------+---------+---------+---------+---------//
   ___X___ , ___M___ , ___V___ , ___P___ , _______     ,      _______ , ___H___ , ___U___ , ___K___ , ___J___ ,
//---------+---------+---------+---------+--------           ---------+---------+---------+---------+---------//
                       _______ , __NAV__ , _LSHFT_     ,      __SYM__ , _SPACE_ , _______
                    //---------+---------+----------------------------+---------+---------//
  ),

  [SYM] = LAYOUT_3x10_6(
    KC_ESC,  KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD, KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC,  KC_GRV,
    KC_MINS, KC_ASTR, KC_EQL,  KC_UNDS, KC_DLR,  KC_HASH, OS_CMD,  OS_ALT,  OS_CTRL,  OS_SHFT,
    KC_PLUS, KC_PIPE, KC_AT,   KC_SLSH, KC_PERC, XXXXXXX, KC_BSLS, KC_AMPR, KC_QUES,  KC_EXLM,
                      _______, _______, _______, _______, _______, _______
  ),

  [NAV] = LAYOUT_3x10_6(
    KC_TAB,  MHT_WIN, TAB_L,   TAB_R,   KC_VOLU, RESET,   KC_BSPACE ,    KC_UP,   END,      KC_DEL,
    OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  KC_VOLD, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT,  KC_BSPC,
    SPACE_L, SPACE_R, BACK,    FWD,     KC_MPLY, XXXXXXX, __TAB__, KC_PGUP, MHT_LANG, KC_ENT,
                      _______, _______, _______,  _______, _ENTER_, _______
  ),

  [NUM] = LAYOUT_3x10_6(
    KC_7,    KC_5,    KC_3,    KC_1,    KC_9,    KC_8,    KC_0,    KC_2,    KC_4,     KC_6,
    OS_SHFT, OS_CTRL, OS_ALT,  OS_CMD,  KC_F11,  KC_F10,  OS_CMD,  OS_ALT,  OS_CTRL,  OS_SHFT,
    KC_F7,   KC_F5,   KC_F3,   KC_F1,   KC_F9,   KC_F8,   KC_F12,  KC_F2,   KC_F4,    KC_F6,
                      _______, _______, _______,  _______, _______, _______
  ),
};
// clang-format on

bool is_oneshot_cancel_key(uint16_t keycode) {
  switch (keycode) {
    case __SYM__:
    case __NAV__:
      return true;
    default:
      return false;
  }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
  switch (keycode) {
    case __SYM__:
    case __NAV__:
    case _LSHFT_:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
      return true;
    default:
      return false;
  }
}

bool mht_win_active  = false;
bool mht_lang_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state  = os_up_unqueued;
oneshot_state os_cmd_state  = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  // clang-format off
  process_mod_hold_n_tap(
    &mht_win_active, KC_LGUI, KC_TAB, MHT_WIN,
    keycode, record
  );
  process_mod_hold_n_tap(
    &mht_lang_active, KC_LCTL, KC_SPC, MHT_LANG,
    keycode, record
  );

  process_oneshot(
    &os_shft_state, _LSHFT_, OS_SHFT,
    keycode, record
  );
  process_oneshot(
    &os_ctrl_state, KC_LCTL, OS_CTRL,
    keycode, record
  );
  process_oneshot(
    &os_alt_state, KC_LALT, OS_ALT,
    keycode, record
  );
  process_oneshot(
    &os_cmd_state, KC_LCMD, OS_CMD,
    keycode, record
  );
  // clang-format on

  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, SYM, NAV, NUM);
}
