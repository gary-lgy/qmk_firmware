#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"

enum layers {
    LAYER_QWERTY,
    LAYER_GAMING,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_CONTROL,
};


enum custom_keycodes {
    RGB_SLD = SAFE_RANGE,
    MACRO_NOT_EQUAL,
    MACRO_COLON_EQUAL,
    CUSTOM_KC_SHIFT_LOCK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//     [LAYER_BLOCK] = LAYOUT_ergodox(
// 
//             // left hand
//             KC_Q,                 KC_DOT,            KC_U,       KC_P,             KC_J,        KC_COLON,         KC_NO,
//             KC_SCOLON,            KC_I,              KC_E,       KC_O,             KC_Y,        KC_UNDERSCORE,    TT(LAYER_SYM),
//             KC_Z,                 KC_COMMA,          KC_W,       KC_A,             KC_QUOTE,    KC_DOLLAR,        /*none*/
//             KC_NO,                G(KC_TAB),         KC_LALT,    KC_LSHIFT,        KC_LGUI,     KC_LCTRL,         KC_NO,
//             MO(LAYER_CONTROL),    TT(LAYER_FUNC),    KC_HYPR,    TT(LAYER_NUM),    KC_BSPACE,
// 
//             // left thumb
//             /*none*/      KC_MS_BTN1,     KC_MS_BTN2,
//             /*none*/      /*none*/        MACRO_VISIBLE_WINDOW,
//             KC_ESCAPE,    KC_CAPSLOCK,    KC_MS_BTN3,
// 
//             // right hand
//             KC_NO,             KC_SLASH,    KC_K,        KC_L,                                    KC_C,       KC_R,       KC_F,
//             KC_TAB,            KC_MINUS,    KC_M,        KC_H,                                    KC_T,       KC_S,       KC_B,
//             /*none*/           KC_EQUAL,    KC_V,        KC_N,                                    KC_D,       KC_G,       KC_X,
//             MO(LAYER_FUNC),    KC_RCTRL,    KC_RGUI,     KC_RSHIFT,                               KC_RALT,    KC_UP,      KC_GRAVE,
//             /*none*/           /*none*/     KC_SPACE,    CUSTOM_KC_MO_LAYER_SYM_OR_SHIFT_LOCK,    KC_LEFT,    KC_DOWN,    KC_RIGHT,
// 
//             // right thumb
//             C(KC_LEFT),    C(KC_RIGHT),
//             KC_UP,
//             KC_DOWN,       A(KC_SPACE),    KC_ENTER
// 
//             ),

    [LAYER_QWERTY] = LAYOUT_ergodox(

            // left hand
            KC_GRAVE,             KC_1,           KC_2,            KC_3,             KC_4,    KC_5,    KC_LEFT_GUI,
            KC_TAB,               KC_Q,           KC_W,            KC_E,             KC_R,    KC_T,    KC_NO,
            KC_CAPS_LOCK,         KC_A,           KC_S,            KC_D,             KC_F,    KC_G,    /*none*/
            KC_LEFT_SHIFT,        KC_Z,           KC_X,            KC_C,             KC_V,    KC_B,    MO(LAYER_NAV),
            MO(LAYER_CONTROL),    KC_LEFT_ALT,    KC_LEFT_CTRL,    TT(LAYER_NUM),    KC_BACKSPACE,

            // left thumb
            /*none*/      KC_MS_BTN1,              KC_MS_BTN2,
            /*none*/      /*none*/                 KC_HOME,
            KC_ESCAPE,    CUSTOM_KC_SHIFT_LOCK,    KC_END,

            // right hand
            KC_BACKSLASH,    KC_6,       KC_7,                      KC_8,             KC_9,       KC_0,            KC_MINUS,
            KC_NO,           KC_Y,       KC_U,                      KC_I,             KC_O,       KC_P,            KC_EQUAL,
            /*none*/         KC_H,       KC_J,                      KC_K,             KC_L,       KC_SEMICOLON,    KC_QUOTE,
            KC_NO,           KC_N,       KC_M,                      KC_COMMA,         KC_DOT,     KC_UP,           KC_SLASH,
            /*none*/         /*none*/    LT(LAYER_NAV,KC_SPACE),    TT(LAYER_SYM),    KC_LEFT,    KC_DOWN,         KC_RIGHT,

            // right thumb
            KC_DEL,     KC_NO,
            KC_PGUP,
            KC_PGDN,    KC_NO,    KC_ENTER

            ),

    [LAYER_GAMING] = LAYOUT_ergodox(

            // left hand
            _______,    _______,    _______,    _______,        _______,    _______,    _______,
            _______,    _______,    _______,    _______,        _______,    _______,    _______,
            _______,    _______,    _______,    _______,        _______,    _______,    /*none*/
            _______,    _______,    _______,    _______,        _______,    _______,    _______,
            _______,    _______,    _______,    KC_LEFT_ALT,    KC_SPACE,

            // left thumb
            /*none*/          _______,      _______,
            /*none*/          /*none*/      _______,
            KC_LEFT_SHIFT,    KC_ESCAPE,    _______,

            // right hand
            _______,    _______,    _______,                       _______,    _______,    _______,    _______,
            _______,    _______,    _______,                       _______,    _______,    _______,    _______,
            /*none*/    _______,    _______,                       _______,    _______,    _______,    _______,
            _______,    _______,    _______,                       _______,    _______,    _______,    _______,
            /*none*/    /*none*/    LT(LAYER_NAV,KC_BACKSPACE),    _______,    _______,    _______,    _______,

            // right thumb
            _______,    _______,
            _______,
            _______,    _______,    _______

            ),

  [LAYER_NAV] = LAYOUT_ergodox(

          // left hand
          KC_NO,    KC_F1,    KC_F2,      KC_F3,      KC_F4,      KC_F5,    KC_NO,
          KC_NO,    KC_NO,    KC_NO,      KC_LCTL,    KC_NO,      KC_NO,    KC_NO,
          KC_NO,    KC_NO,    KC_LALT,    KC_LSFT,    KC_LGUI,    KC_NO,    /*none*/
          KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,    KC_NO,
          KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_BACKSPACE,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_F6,      KC_F7,       KC_F8,      KC_F9,       KC_F10,    KC_F11,
          KC_NO,      KC_NO,      KC_HOME,     KC_UP,      KC_END,      KC_NO,     KC_F12,
          /*none*/    KC_NO,      KC_LEFT,     KC_DOWN,    KC_RIGHT,    KC_NO,     KC_NO,
          KC_NO,      KC_NO,      KC_PGUP,     KC_TAB,     KC_PGDN,     KC_NO,     KC_NO,
          /*none*/    /*none*/    KC_SPACE,    KC_NO,      KC_NO,       KC_NO,     KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_SYM] = LAYOUT_ergodox(

          // left hand
          KC_NO,    KC_F1,    KC_F2,                KC_F3,                  KC_F4,                   KC_F5,           KC_NO,
          KC_NO,    KC_NO,    MACRO_NOT_EQUAL,      KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PERCENT,      KC_NO,
          KC_NO,    KC_NO,    MACRO_COLON_EQUAL,    KC_LEFT_PAREN,          KC_RIGHT_PAREN,          KC_AMPERSAND,    /*none*/
          KC_NO,    KC_NO,    KC_BACKSLASH,         KC_LEFT_BRACKET,        KC_RIGHT_BRACKET,        KC_PIPE,         KC_NO,
          KC_NO,    KC_NO,    KC_NO,                KC_NO,                  _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_F6,      KC_F7,      KC_F8,            KC_F9,    KC_F10,    KC_F11,
          KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,    KC_NO,     KC_F12,
          /*none*/    KC_NO,      KC_NO,      KC_NO,            KC_NO,    KC_NO,     KC_NO,
          KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,    KC_NO,     KC_NO,
          /*none*/    /*none*/    _______,    TG(LAYER_SYM),    KC_NO,    KC_NO,     KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_NUM] = LAYOUT_ergodox(

          // left hand
          KC_NO,    KC_F1,    KC_F2,    KC_F3,               KC_F4,         KC_F5,    KC_NO,
          KC_NO,    KC_NO,    KC_NO,    KC_NO,               KC_NO,         KC_NO,    KC_NO,
          KC_NO,    KC_NO,    KC_NO,    LGUI(KC_C),          LGUI(KC_V),    KC_NO,    /*none*/
          KC_NO,    KC_NO,    KC_NO,    LSFT(LGUI(KC_Z)),    LGUI(KC_Z),    KC_NO,    KC_NO,
          KC_NO,    KC_NO,    KC_NO,    TG(LAYER_NUM),       _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_F6,       KC_F7,      KC_F8,    KC_F9,    KC_F10,    KC_F11,
          KC_NO,      KC_COMMA,    KC_7,       KC_8,     KC_9,     KC_NO,     KC_F12,
          /*none*/    KC_DOT,      KC_4,       KC_5,     KC_6,     KC_NO,     KC_NO,
          KC_NO,      KC_0,        KC_1,       KC_2,     KC_3,     KC_NO,     KC_NO,
          /*none*/    /*none*/     _______,    KC_NO,    KC_NO,    KC_NO,     KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_CONTROL] = LAYOUT_ergodox(

          // left hand
          KC_AUDIO_MUTE,        TO(LAYER_QWERTY),    TO(LAYER_GAMING),    KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_AUDIO_VOL_UP,      KC_NO,               KC_NO,               KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_AUDIO_VOL_DOWN,    KC_NO,               KC_NO,               KC_NO,    KC_NO,    KC_NO,
          KC_NO,                KC_NO,               KC_NO,               KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_NO,                QK_DEBUG_TOGGLE,     KC_NO,               KC_NO,    KC_NO,    /*none*/    /*none*/

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    QK_BOOT,
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*none*/    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*none*/    /*none*/    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,

          // right thumb
          QK_DYNAMIC_MACRO_RECORD_START_2,    QK_DYNAMIC_MACRO_RECORD_START_1,
          QK_DYNAMIC_MACRO_RECORD_STOP,
          KC_NO,                              QK_DYNAMIC_MACRO_PLAY_2,    QK_DYNAMIC_MACRO_PLAY_1

          ),

};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return 200;
    }
}

static bool shift_lock_on = false;

void turn_on_shift_lock(void) {
    add_mods(MOD_BIT(KC_LEFT_SHIFT));
    shift_lock_on = true;
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
}

void turn_off_shift_lock(void) {
    unregister_mods(MOD_BIT(KC_LEFT_SHIFT));
    shift_lock_on = false;
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    dprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupted: %b, count: %u\n",
            keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 

    switch (keycode) {
        case MACRO_NOT_EQUAL:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("!=");
            } else {
                // released
            }
            return false;
        case MACRO_COLON_EQUAL:
            if (record->event.pressed) {
                // pressed
                SEND_STRING(":=");
            } else {
                // released
            }
            return false;
        case CUSTOM_KC_SHIFT_LOCK:
            if (record->event.pressed) {
                if (shift_lock_on) {
                    turn_off_shift_lock();
                } else {
                    turn_on_shift_lock();
                }
            } else {}
            return false;
    }

    return true;
}

void setup_led_for_layer(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    if (shift_lock_on) {
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        return;
    }

    switch (get_highest_layer(state)) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
}

void turn_off_auto_shift_for_gaming_layer(layer_state_t state) {
    if (layer_state_cmp(state, LAYER_GAMING)) {
        autoshift_disable();
    } else {
        autoshift_enable();
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    setup_led_for_layer(state);
    turn_off_auto_shift_for_gaming_layer(state);

    return state;
}

// vim: set foldmethod=manual
