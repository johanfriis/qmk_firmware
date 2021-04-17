#pragma once

#include "quantum.h"

#define HOME    G(KC_LEFT)
#define END     G(KC_RGHT)
#define FWD     G(KC_RBRC)
#define BACK    G(KC_LBRC)
#define TAB_L   G(S(KC_LBRC))
#define TAB_R   G(S(KC_RBRC))
#define SPACE_L A(G(KC_LEFT))
#define SPACE_R A(G(KC_RGHT))
#define LA_SYM  MO(SYM)
#define LA_NAV  MO(NAV)

enum layers
{
  DEF,
  SYM,
  NAV,
  NUM,
};

enum keycodes
{
  // Custom oneshot mod implementation with no timers.
  OS_SHFT = SAFE_RANGE,
  OS_CTRL,
  OS_ALT,
  OS_CMD,

  MHT_WIN,   // Switch to next window         (cmd-tab)
  MHT_LANG,  // Switch to next input language (ctl-spc)
};

#define XXXXXXX KC_NO

#define ___A___ KC_A
#define ___B___ KC_B
#define ___C___ KC_C
#define ___D___ KC_D
#define ___E___ KC_E
#define ___F___ KC_F
#define ___G___ KC_G
#define ___H___ KC_H
#define ___I___ KC_I
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ KC_L
#define ___M___ KC_M
#define ___N___ KC_N
#define ___O___ KC_O
#define ___P___ KC_P
#define ___Q___ KC_Q
#define ___R___ KC_R
#define ___S___ KC_S
#define ___T___ KC_T
#define ___U___ KC_U
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z

#define _COMMA_ KC_COMMA
#define __DOT__ KC_DOT
#define _ENTER_ KC_ENT
#define __TAB__ KC_TAB
#define _LSHFT_ KC_LSHIFT
#define _SPACE_ KC_SPACE

#define __NAV__ MO(NAV)
#define __SYM__ MO(SYM)

// clang-format off
#define ___ KC_NO
#define LAYOUT_3x10_6(                                     \
  k00, k01, k02, k03, k04,           k05, k06, k07, k08, k09,    \
  k10, k11, k12, k13, k14,           k15, k16, k17, k18, k19,    \
  k20, k21, k22, k23, k24,           k27, k28, k29, k2a, k2b,    \
            k32, k33, k34,           k37, k38, k39               \
)                                                                \
{                                                                \
 { k00, k01, k02, k03, k04, ___, ___, k05, k06, k07, k08, k09 }, \
 { k10, k11, k12, k13, k14, ___, ___, k15, k16, k17, k18, k19 }, \
 { k20, k21, k22, k23, k24, ___, ___, k27, k28, k29, k2a, k2b }, \
 { ___, ___, k32, k33, k34, ___, ___, k37, k38, k39, ___, ___ }  \
}
// clang-format on
