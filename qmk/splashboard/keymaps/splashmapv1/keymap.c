#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * 
     */
    [0] = LAYOUT_8x5(
        // LEFT
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        XXXXXXX, XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,
        XXXXXXX, XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,
        XXXXXXX, XXXXXXX, KC_Y,    KC_X,    KC_C,    KC_V,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_SPC,  KC_LGUI,

        // RIGHT
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_TAB,  LT(1, KC_SPC), KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [1] = LAYOUT_8x5(
        // LEFT
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,

        // RIGHT
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, LT(0, _______), _______, _______, _______, _______
    )
};
