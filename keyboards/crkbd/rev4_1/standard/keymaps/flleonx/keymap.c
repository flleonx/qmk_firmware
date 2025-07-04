#include QMK_KEYBOARD_H

// Layer definitions
enum layers {
    _DEFAULT = 0,
    _LOWER   = 1,
    _RAISE   = 2
};

// Define tap-hold configurations
#define LOWER     MO(_LOWER)           // Momentary switch to Lower layer
#define RAISE     LT(_RAISE, KC_SPC)   // Momentary switch to Raise layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_split_3x6_3_ex2(
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_NO,    KC_NO,    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_RGUI,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     LGUI(KC_GRV),    KC_RALT,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                                      LOWER,  LALT_T(KC_ESC),    LGUI_T(KC_ENTER),           RAISE,          KC_BSPC,  LOWER
    ),

    [_LOWER] = LAYOUT_split_3x6_3_ex2(
        KC_TRNS,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_NO,    KC_NO,    KC_CIRC,  KC_AMPR,  KC_ASTR,  LSFT(KC_9), LSFT(KC_0), KC_BSLS,
        KC_TRNS,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_NO,    KC_RALT,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_PIPE,
        KC_LSFT,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_MINS,  KC_EQL,   KC_GRV,   KC_LBRC,  KC_RBRC,  KC_RSFT,
                                      KC_TRNS,  LALT_T(KC_ESC),  LGUI_T(KC_ENTER),           RAISE,          KC_BSPC,  KC_TRNS
    ),

    [_RAISE] = LAYOUT_split_3x6_3_ex2(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    LGUI(LSFT(KC_5)),  QK_BOOT,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
        KC_TRNS,  KC_MPRV,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY,  LGUI(LSFT(KC_4)),  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                      KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,  KC_TRNS
    )
};
