#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Right side is fliped horizontaly.
     */
    [0] = LAYOUT_8x5(
        // LEFT
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     // R00
        KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     // R01
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     // R02
        KC_LCTL, KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,     // R03
        XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,  LT(2, KC_SPC),  KC_LGUI,  // R04

        // RIGHT
        KC_ESC,  LT(1, KC_SPC), KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX,  // R14
        KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  // R13
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_LBRC,  // R12
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,  // R11
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL   // R10
    ),

    [1] = LAYOUT_8x5(
        // LEFT
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, MS_LEFT, MS_UP,   MS_RGHT, _______,
        _______, _______, MS_BTN2, MS_DOWN, MS_BTN1, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, _______, KC_RCTL,

        // RIGHT
        _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT_8x5(
        // LEFT
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,

        // RIGHT
        _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_NUM,  KC_P1,   KC_P2,   KC_P3,   KC_PAST, _______,
        KC_DEL,  KC_P4,   KC_P5,   KC_P6,   KC_PMNS, _______,
        KC_BSPC, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_PSLS,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12
    )
};
