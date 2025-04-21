#include QMK_KEYBOARD_H

enum LAYERS {
    _BASE,
    _SYMB,
    _FUNC,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
  A(KC_TAB), KC_1,    KC_2,    KC_3,     KC_4,     KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_DEL,
  KC_ESC,    KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_TAB,    KC_A,    KC_S,    KC_D,     KC_F,     KC_G,                            KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LGUI,   KC_Z,    KC_X,    KC_C,     KC_V,     KC_B, KC_MUTE,      KC_NO,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RGUI,
                   KC_LALT, KC_LCTL,  KC_LSFT, MO(_SYMB),  KC_ENT,      KC_SPC, MO(_FUNC), KC_RSFT, KC_RCTL, KC_LALT
),
[_SYMB] = LAYOUT(
  KC_TRNS,   KC_F1,   KC_F2,     KC_F3,      KC_F4,      KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_TRNS,    KC_1,    KC_2,      KC_3,       KC_4,       KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  KC_TRNS, S(KC_1), S(KC_2),   S(KC_3),    S(KC_4),    S(KC_5),                        S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_NUHS,
  KC_TRNS,  KC_EQL, KC_MINS, S(KC_EQL), S(KC_LBRC), S(KC_RBRC), KC_TRNS,      KC_TRNS, KC_LBRC, KC_RBRC, KC_SCLN,  KC_GRV, KC_NUBS, KC_TRNS,
                    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
[_FUNC] = LAYOUT(
  KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                         KC_NO,   KC_NO,      KC_NO,   KC_NO, KC_NO, KC_TRNS,
  KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                         KC_NO, KC_HOME, C(KC_HOME),   KC_NO, KC_NO, KC_TRNS,
  KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO,                       KC_LEFT, KC_DOWN,      KC_UP, KC_RGHT, KC_NO,   KC_NO,
  KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_TRNS,         KC_NO, KC_NO,  KC_END,  C(KC_END),   KC_NO, KC_NO, KC_TRNS,
                KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS,       KC_TRNS, KC_NO, KC_TRNS,    KC_TRNS, KC_TRNS
)
/* [_RAISE] = LAYOUT( */
/*   _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______, */
/*   _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_UP, KC_NXTWD,C(KC_BSPC), KC_BSPC, */
/*   _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC, */
/*   _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX,  _______,       _______,  XXXXXXX, KC_LSTRT, XXXXXXX, KC_LEND,   XXXXXXX, _______, */
/*                          _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______ */
/* ), */
/*   [_ADJUST] = LAYOUT( */
/*   XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
/*   QK_BOOT  , XXXXXXX,KC_QWERTY,KC_COLEMAK,CG_TOGG,XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, */
/*   XXXXXXX , XXXXXXX,CG_TOGG, XXXXXXX,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, */
/*   XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, */
/*                    _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______ */
/*   ) */
};
