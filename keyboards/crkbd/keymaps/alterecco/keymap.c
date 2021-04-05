/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// clang-format off

#include "keymap.h"
#include "eeprom.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_HIRU] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  KC_Q  ,  KC_F  ,  KC_D  ,  KC_W  ,KC_GRAVE,                        MRU  ,  KC_G  ,  KC_C  ,  KC_L  ,  KC_Y  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  , HOME_A , HOME_S , HOME_O , HOME_N ,KC_COMMA,                      KC_DOT , HOME_H , HOME_I , HOME_R , HOME_U ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  KC_B  ,  KC_Z  ,  KC_V  ,  KC_M  , KC_TAB ,                     KC_ENTER,  KC_P  ,  KC_X  ,  KC_J  ,  KC_K  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         THUMB_L1,THUMB_L2,THUMB_L3,   THUMB_R3,THUMB_R2,THUMB_R1
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

  [_NAVIGATE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                       XXXX  ,KC_PGDN ,  KC_UP ,KC_PGUP ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,KC_LSFT ,KC_LCTL ,KC_LOPT ,KC_LCMD ,  XXXX  ,                     KC_HOME ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_END ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,                      KC_TAB ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,  XXXX  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           XXXX  , KC_DEL ,  XXXX  ,     XXXX  ,KC_ENTER,  XXXX
                                      //`--------------------------'  `--------------------------'
  ),


//     [_NAVIGATE] = LAYOUT_planck_grid(
//     ____,    ____,    ____,    ____,    ____, ____, ____, ____,    KC_PGDN,  KC_UP,   KC_PGUP,  ____,
//     KC_LSFT, KC_LCTL, KC_LOPT, KC_LCMD, ____, ____, ____, KC_HOME, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_END,
//     ____,    ____,    ____,    ____,    ____, ____, ____, ____,    KC_TAB,   ____,    ____,     ____,
//     ____,    ____,    ____,    KC_DEL,  ____, ____, XXXX, ____,    KC_ENTER, ____,    ____,     ____
//   ),

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

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    oled_render_logo();
}
#endif // OLED_DRIVER_ENABLE
