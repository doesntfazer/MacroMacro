#include QMK_KEYBOARD_H
#include <stdio.h>
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    QK_BOOT,    KC_I,    KC_J
    )
};

#ifdef OLED_ENABLE

//flip OLED 180 degrees
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;  // flips the display 180 degrees
}

//draw to OLED
bool oled_task_user() {
    oled_set_cursor(0, 1);
    
    uint8_t n = get_highest_layer(layer_state);
    
    if (n == 0) {
        oled_write_P(PSTR("Layer: Default"), false);
    } else {
        char layer_str[16];
        snprintf(layer_str, sizeof(layer_str), "Layer: %d                         ", n);
        oled_write(layer_str, false);
    }

    return false;
}

#endif




