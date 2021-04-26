#include "keymap.h"
#include "key_override.h"

// I want key overrides for symbols with shift and some common
// punctuation on shift+space/dot/comma






const key_override_t kc_dot_override =
    ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_QUOTE);

// This globally defines all key overrides to be used
const key_override_t** key_overrides = (const key_override_t*[]){
    &kc_dot_override,
    NULL  // Null terminate the array of overrides!
};
