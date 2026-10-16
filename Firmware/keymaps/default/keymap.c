#include QMK_KEYBOARD_H

// Define your 2 layout layers matching your 4 direct pins (SW1, SW2, SW3, Encoder Switch)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // LAYER 0: Base Layer
  [0]  = LAYOUT(
        KC_A,    KC_B,    KC_C,    TG(1) // Pressing Encoder Switch toggles to Layer 1
    ),
    // LAYER 1: Media Layer
  [1] = LAYOUT(
        KC_MPLY, KC_MNXT, KC_MPRV, TG(0) // Pressing Encoder Switch toggles back to Layer 0
    )
};

// Define your single rotary encoder actions per layer
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
   [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }, // Layer 0: Turn left = Vol Down, Turn right = Vol Up
    [1] = { ENCODER_CCW_CW(KC_MRWD, KC_MFFD) }  // Layer 1: Turn left = Rewind, Turn right = Fast Forward
};
#endif
