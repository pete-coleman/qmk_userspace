// Copyright 2025 Pete Coleman
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum combos {
  DF,
  JK
};

const uint16_t PROGMEM df_kc[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_kc[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [DF]  = COMBO(df_kc, S(KC_SCLN)),
  [JK]  = COMBO(jk_kc, KC_ESC),
};

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _FUNC,
};

// These are defined to make the keymap below display nicely, not for any other reason
#define BOTTOM      C(KC_END)
#define COLON       S(KC_SCLN)
#define CTL_ENT     LCTL_T(KC_ENT)
#define CTL_SPC     LCTL_T(KC_SPC)
#define LOW_TAB     LT(_LOWER, KC_TAB)
#define OSL_FUN     OSL(_FUNC)
#define PIPE        S(KC_NUBS)
#define RSE_BSP     LT(_RAISE, KC_BSPC)
#define TOP         C(KC_HOME)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_VOLU,   KC_NO   ,KC_Y    ,KC_U    ,KC_I    ,KC_O    , KC_P   ,KC_DEL  ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      OS_LALT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_VOLD,   KC_NO   ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_QUOT ,OS_RALT ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LGUI,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,OSL_FUN ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          OS_LSFT, LOW_TAB, CTL_ENT,   KC_SPC  ,RSE_BSP ,OS_LCTL
                                      //`--------------------------'  `--------------------------'
  ),
  [_LOWER] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      KC_TRNS,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS,   KC_NO, KC_TRNS,   KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_TRNS,   KC_NO   ,KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LPRN ,KC_RPRN ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_TRNS,    PIPE,   COLON,  KC_GRV, KC_LCBR, KC_LBRC,                     KC_RBRC ,KC_RCBR ,KC_SCLN ,KC_NUHS ,KC_NUBS ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS ,KC_TRNS ,KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
  [_RAISE] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      KC_TRNS,   KC_NO,    KC_1,    KC_2,    KC_3, KC_PLUS, KC_TRNS,   KC_NO   ,KC_HOME ,BOTTOM  ,TOP     ,KC_END  ,KC_0    ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_TRNS,    KC_0,    KC_4,    KC_5,    KC_6, KC_MINS, KC_TRNS,   KC_NO   ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT ,KC_RPRN ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      OS_LSFT,   KC_NO,    KC_7,    KC_8,    KC_9,  KC_EQL,                     KC_NO   ,KC_PGDN ,KC_PGUP ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_BSPC, CTL_SPC,   KC_TRNS ,KC_TRNS ,KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
  [_FUNC] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      KC_TRNS,   KC_NO,   KC_F1,   KC_F2,   KC_F3,  KC_F10, KC_TRNS,   KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_NO,   KC_F4,   KC_F5,   KC_F6,  KC_F11, KC_TRNS,   KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_NO,   KC_F7,   KC_F8,   KC_F9,  KC_F12,                     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS ,KC_TRNS ,KC_TRNS
                                      //`--------------------------'  `--------------------------'
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case LT(_RAISE, KC_BSPC):
      case LT(_LOWER, KC_TAB):
      case LCTL_T(KC_ENT):
      case LCTL_T(KC_SPC):
            return TAPPING_TERM_THUMB;
      default:
            return TAPPING_TERM;
    }
}
