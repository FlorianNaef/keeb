#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * aaaWWaaaaaaaaaaaaaaaaaaaaaaaaaaaaawwWWaww
     */
    [0] = LAYOUT_8x5(
        // LEFT
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LCTL, ,    KC_Z,    KC_X,    KC_C,    KC_V,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB,  KC_SPC,  KC_LGUI,

        // RIGHT
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, XXXXXXX,
        KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_ESC,  LT(1, KC_SPC), KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [1] = LAYOUT_8x5(
        // LEFT
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,

        // RIGHT
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_PGUP, KC_P7,   KC_P8,   KC_P9,   _______, _______,
        KC_PGDN, KC_P4,   KC_P5,   KC_P6,   _______, _______,
        _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
        _______, LT(0, _______), _______, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
