#include QMK_KEYBOARD_H
#include "tv44.h"
#include "action_layer.h"
#include "eeconfig.h"
#ifdef LED_ENABLE
  #include "backlight.h"
#endif

extern keymap_config_t keymap_config;

#undef LAYOUT
#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K30, K31, K34, K32,      K33, K37, NOP, K38, K39, K3A, K3B  \
) \
{ \
    { K00,   K01,   K02,   K03,  K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B }, \
    { K10,   K11,   K12,   K13,  K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B }, \
    { K20,   K21,   K22,   K23,  K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B }, \
    { K30,   K31,   K32,   K33,  K34,   KC_NO, KC_NO, K37,   K38,   K39,   K3A,   K3B }  \
}

#define LED_TOG BL_STEP
#define LED_CHG BL_BRTG

#include "layout.c"
