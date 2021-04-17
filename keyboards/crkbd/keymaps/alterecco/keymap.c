// clang-format off

#include "keymap.h"
#include "tapdance.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_crkbd_wrapper(HIRU_L1, HIRU_R1, HIRU_L2, HIRU_R2, HIRU_L3, HIRU_R3, HIRU_TL, HIRU_TR),
//   [_BASE] = LAYOUT_split_3x6_3(
//   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//        XXXX  ,  KC_Q  ,  KC_F  ,  KC_D  ,  KC_W  ,KC_GRAVE,                        MRU  ,  KC_G  ,  KC_C  ,  KC_L  ,  KC_Y  ,  XXXX  ,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//        XXXX  , HOME_A , HOME_S , HOME_O , HOME_N ,KC_COMMA,                      KC_DOT , HOME_H , HOME_I , HOME_R , HOME_U ,  XXXX  ,
//   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//        XXXX  ,  KC_B  ,  KC_Z  ,  KC_V  ,  KC_M  , KC_TAB ,                     KC_ENTER,  KC_P  ,  KC_X  ,  KC_J  ,  KC_K  ,  XXXX  ,
//   //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                          THUMB_L1,THUMB_L2,SPC_NAV ,     XXXX  ,THUMB_R2,THUMB_R1
//                                       //`--------------------------'  `--------------------------'
//   ),

  [_NAVIGATE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,KC_BSPC ,  KC_UP ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_LSFT ,KC_LCTL ,KC_LOPT ,KC_LCMD ,  XXXX  ,                     KC_HOME ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_END ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  , KC_TAB ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  ,  XXXX  , SPC_NAV,     TO(_NAVIGATE_)  ,KC_ENTER,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAVIGATE_] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             XXXX  ,  XXXX  ,TO(_BASE) ,  TO(_BASE)  ,  XXXX  ,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYMBOL] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,KC_TILDE,KC_PIPE ,KC_AMPR , KC_AT  ,  XXXX  ,                       XXXX  ,KC_PLUS ,KC_MINUS,KC_EQUAL,KC_ASTR ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_LABK ,KC_LBRC ,KC_LCBR ,KC_LPRN ,KC_DQUO ,                     KC_GRAVE,KC_RPRN ,KC_RCBR ,KC_RBRC ,KC_RABK ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_PERC ,KC_BSLS ,KC_CIRC ,KC_SLASH,  XXXX  ,                       XXXX  ,KC_HASH ,KC_UNDS , KC_DLR ,KC_SCLN ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  ,KC_COLN ,KC_EXLM ,   KC_QUES ,KC_QUOT ,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUMPAD] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       KC_A  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_B  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_LSFT ,KC_LCTL ,KC_LOPT ,KC_LCMD ,  XXXX  ,                       KC_C  ,  KC_4  ,  KC_5  ,  KC_6  ,  KC_D  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       KC_E  ,  KC_1  ,  KC_2  ,  KC_3  ,  KC_F  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  ,  XXXX ,  XXXX  ,     XXXX  ,  KC_0  ,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYSTEM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,DSKTP_1 ,DSKTP_2 ,DSKTP_3 ,DSKTP_4 ,  XXXX  ,                       XXXX  ,DSKTP_5 ,DSKTP_6 ,DSKTP_7 ,DSKTP_8 ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  , EXPOSE ,  XXXX  ,                       XXXX  ,BRI_MIN ,BRI_MAX ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       RESET ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  ,  XXXX  ,  XXXX  ,     XXXX  ,  XXXX  ,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_LANGUAGE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_ARING,KC_OSLSH,KC_AELIG,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  ,  XXXX  ,  XXXX  ,     XXXX  ,  XXXX  ,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),

};

// Tap hold macro function for process_record_user()
// using layer tap LT() tapping term delay as a
// hold shortcut, by @sigprof
#define TAP_HOLD(_tap_, _hold_) \
	if (record->tap.count) { \
		if (record->event.pressed) { register_code(_tap_); } \
		else { unregister_code(_tap_); } \
	} else if (record->event.pressed) { _hold_; } \
	return false;





bool process_record_user(uint16_t const keycode, keyrecord_t *record) {
switch (keycode) {
		// VIM commands
		// case Q_TH: TAP_HOLD(KC_Q, SEND_STRING(":q!"));
		// case W_TH: TAP_HOLD(KC_W, SEND_STRING(":wq"));
		// // New tab and window
		// case T_TH: TAP_HOLD(KC_T, tap_code16(G(KC_T)));
		// case N_TH: TAP_HOLD(KC_N, tap_code16(G(KC_N)));
		// // Right hand cut copy paste
		// case DOT_TH: TAP_HOLD(KC_DOT, tap_code16(G(KC_X)));
		// case COMM_TH: TAP_HOLD(KC_COMM, tap_code16(G(KC_C)));
		// case M_TH: TAP_HOLD(KC_M, tap_code16(G(KC_V)));
	}
	return true; // Continue with unmatched keycodes
}
