// clang-format off
#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "action.h"
#include "keyboards/planck/ez/ez.h"
#include "keyboards/planck/ez/config.h"


enum layer_names {
  _BASE,
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

#define ALFRED       CMD(KC_SPACE)
#define THINGS       MEH(KC_F13)
#define EXPOSE       HYPR(KC_F16)
#define PLTRO        HYPR(KC_F17)
#define MRU          CMD(RALT(KC_GRAVE))

#define SPC_NAV      LT(_NAVIGATE, KC_SPC)
#define OSL_SYS      OSL(_SYSTEM)
#define OSL_SYM      OSL(_SYMBOL)
#define OSL_NUM      OSL(_NUMPAD)
#define OSL_LANG     OSL(_LANGUAGE)

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

#define BRI_MIN      KC_F14
#define BRI_MAX      KC_F15

// clang-format on
