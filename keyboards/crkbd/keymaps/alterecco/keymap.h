// clang-format off
#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "action.h"
#include "keyboards/crkbd/config.h"
#include "keyboards/crkbd/rev1/rev1.h"


enum layer_names {
  _HIRU,
  _LOWER,
  _RAISE,
  _ADJUST,
  _SYMBOL,
  _NAVIGATE,
  _NUMPAD,
  _SYSTEM,
  _LANGUAGE,
};

#define CMD          LGUI
#define XXXX         KC_NO
#define ____         KC_TRNS
#define _____        KC_TRNS
#define ______       KC_TRNS

#define BRI_MIN      KC_F14
#define BRI_MAX      KC_F15

#define ALFRED       CMD(KC_SPACE)
#define THINGS       MEH(KC_F13)
#define EXPOSE       HYPR(KC_F16)
#define PLTRO        HYPR(KC_F17)
#define MRU          CMD(RALT(KC_GRAVE))

#define HOME_A       LSFT_T(KC_A)
#define HOME_S       LCTL_T(KC_S)
#define HOME_O       LOPT_T(KC_O)
#define HOME_N       LCMD_T(KC_N)

#define HOME_H       RCMD_T(KC_H)
#define HOME_I       ROPT_T(KC_I)
#define HOME_R       RCTL_T(KC_R)
#define HOME_U       RSFT_T(KC_U)

#define THUMB_L1     MO(_NUMPAD)
#define THUMB_L2     LT(_SYMBOL, KC_E)
#define THUMB_L3     LT(_NAVIGATE, KC_BSPC)
#define THUMB_MID    OSL(_SYSTEM)
#define THUMB_R3     LT(_NAVIGATE, KC_SPC)
#define THUMB_R2     LT(_SYMBOL, KC_T)
#define THUMB_R1     LT(_LANGUAGE, KC_ESC)
// #define THUMB_L1     LT(_NAVIGATE, KC_BSPC)
// #define THUMB_L2     LT(_SYMBOL, KC_E)
// #define THUMB_L3     LT(_NUMPAD, KC_BSPC)
// #define THUMB_MID    OSL(_SYSTEM)
// #define THUMB_R2     LT(_SYMBOL, KC_T)
// #define THUMB_R1     LT(_SYMBOL, KC_SPC)
// #define THUMB_R3     LT(_LANGUAGE, KC_ESC)

#define KC_GRAVE     KC_NONUS_BSLASH
#undef  KC_TILDE
#define KC_TILDE     LSFT(KC_GRAVE)
#define KC_ARING     RALT(KC_LBRC)
#define KC_OSLSH     RALT(KC_QUOTE)
#define KC_AELIG     RALT(KC_SCOLON)

#define DSKTP_1      HYPR(KC_1)
#define DSKTP_2      HYPR(KC_2)
#define DSKTP_3      HYPR(KC_3)
#define DSKTP_4      HYPR(KC_4)
#define DSKTP_5      HYPR(KC_5)
#define DSKTP_6      HYPR(KC_6)
#define DSKTP_7      HYPR(KC_7)
#define DSKTP_8      HYPR(KC_8)

#define MUTE         KC_AUDIO_MUTE
#define VOL_DOWN     KC_AUDIO_VOL_DOWN
#define VOL_UP       KC_AUDIO_VOL_UP
#define STOP         KC_MEDIA_STOP
#define PREV_TRK     KC_MEDIA_PREV_TRACK
#define NEXT_TRK     KC_MEDIA_NEXT_TRACK
#define PLAY_PAUSE   KC_MEDIA_PLAY_PAUSE

// clang-format on
