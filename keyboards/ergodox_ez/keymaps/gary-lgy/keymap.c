#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"

enum layers {
    LAYER_BLOCK,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_FUNC,
    LAYER_CONTROL,
};


enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    MACRO_NOT_EQUAL,
    MACRO_COLON_EQUAL,
    CUSTOM_KC_SHIFT_LOCK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [LAYER_BLOCK] = LAYOUT_ergodox(

            // left hand
            KC_Q,                 KC_DOT,      KC_U,              KC_P,             KC_J,        KC_COLON,         KC_NO,
            KC_SCOLON,            KC_I,        KC_E,              KC_O,             KC_Y,        KC_UNDERSCORE,    TT(LAYER_SYM),
            KC_Z,                 KC_COMMA,    KC_W,              KC_A,             KC_QUOTE,    KC_DOLLAR,        /*none*/
            KC_NO,                KC_NO,       KC_LALT,           KC_LSHIFT,        KC_LGUI,     KC_LCTRL,         CUSTOM_KC_SHIFT_LOCK,
            MO(LAYER_CONTROL),    KC_NO,       TT(LAYER_FUNC),    TT(LAYER_NUM),    KC_BSPACE,

            // left thumb
            /*none*/      KC_MS_BTN1,    KC_MS_BTN2,
            /*none*/      /*none*/       KC_NO,
            KC_ESCAPE,    KC_NO,         KC_MS_BTN3,

            // right hand
            KC_CAPSLOCK,    KC_SLASH,    KC_K,                      KC_L,             KC_C,       KC_R,       KC_F,
            KC_TAB,         KC_MINUS,    KC_M,                      KC_H,             KC_T,       KC_S,       KC_B,
            /*none*/        KC_EQUAL,    KC_V,                      KC_N,             KC_D,       KC_G,       KC_X,
            KC_NO,          KC_RCTRL,    KC_RGUI,                   KC_RSHIFT,        KC_RALT,    KC_UP,      KC_GRAVE,
            /*none*/        /*none*/     LT(LAYER_NAV,KC_SPACE),    TT(LAYER_SYM),    KC_LEFT,    KC_DOWN,    KC_RIGHT,

            // right thumb
            KC_LEFT,    KC_RIGHT,
            KC_UP,
            KC_DOWN,    KC_NO,    KC_ENTER

            ),

[LAYER_NAV] = LAYOUT_ergodox(

        // left hand
        KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,    _______,    _______,    _______,    _______,    KC_NO,
        _______,    KC_NO,    KC_NO,      KC_NO,      _______,

        // left thumb
        /*none*/    KC_NO,      KC_NO,
        /*none*/    /*none*/    KC_NO,
        KC_NO,      KC_NO,      KC_NO,

        // right hand
        KC_NO,      KC_NO,      KC_NO,      KC_HOME,    KC_UP,      KC_END,       KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RIGHT,     KC_NO,
        /*none*/    KC_NO,      KC_NO,      KC_PGUP,    KC_TAB,     KC_PGDOWN,    KC_NO,
        KC_NO,      _______,    _______,    _______,    _______,    KC_NO,        KC_NO,
        /*none*/    /*none*/    KC_NO,      KC_NO,      KC_NO,      KC_NO,        KC_NO,

        // right thumb
        KC_NO,    KC_NO,
        KC_NO,
        KC_NO,    KC_NO,    KC_NO

            ),

  [LAYER_SYM] = LAYOUT_ergodox(

          // left hand
          KC_NO,      KC_RIGHT_ANGLE_BRACKET,    KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PERCENT,      KC_NO,      KC_NO,
          KC_NO,      KC_LEFT_ANGLE_BRACKET,     KC_LEFT_PAREN,          KC_RIGHT_PAREN,          KC_AMPERSAND,    KC_NO,      TG(LAYER_SYM),
          KC_NO,      KC_BSLASH,                 KC_LBRACKET,            KC_RBRACKET,             KC_PIPE,         KC_NO,      /*none*/
          KC_NO,      KC_NO,                     _______,                _______,                 _______,         _______,    KC_NO,
          _______,    KC_NO,                     KC_NO,                  KC_NO,                   _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,      MACRO_NOT_EQUAL,      KC_NO,
          KC_NO,      KC_NO,      KC_NO,      KC_NO,            KC_NO,      MACRO_COLON_EQUAL,    KC_NO,
          /*none*/    KC_NO,      KC_NO,      KC_NO,            KC_NO,      KC_NO,                KC_NO,
          KC_NO,      _______,    _______,    _______,          _______,    KC_NO,                KC_NO,
          /*none*/    /*none*/    _______,    TG(LAYER_SYM),    KC_NO,      KC_NO,                KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_NUM] = LAYOUT_ergodox(

          // left hand
          KC_NO,      KC_NO,         KC_NO,               KC_NO,            KC_NO,      KC_NO,      KC_NO,
          KC_NO,      LGUI(KC_X),    LGUI(KC_C),          LGUI(KC_V),       KC_NO,      KC_NO,      KC_NO,
          KC_NO,      KC_NO,         LSFT(LGUI(KC_Z)),    LGUI(KC_Z),       KC_NO,      KC_NO,      /*none*/
          KC_NO,      KC_NO,         _______,             _______,          _______,    _______,    KC_NO,
          _______,    KC_NO,         KC_NO,               TG(LAYER_NUM),    _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_NO,      KC_COMMA,    KC_7,       KC_8,       KC_9,     KC_NO,
          KC_NO,      KC_NO,      KC_DOT,      KC_4,       KC_5,       KC_6,     KC_NO,
          /*none*/    KC_NO,      KC_0,        KC_1,       KC_2,       KC_3,     KC_NO,
          KC_NO,      _______,    _______,     _______,    _______,    KC_NO,    KC_NO,
          /*none*/    /*none*/    _______,     KC_NO,      KC_NO,      KC_NO,    KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_FUNC] = LAYOUT_ergodox(

          // left hand
          KC_NO,      KC_NO,    KC_NO,             KC_NO,      KC_NO,      KC_NO,      KC_NO,
          KC_NO,      KC_NO,    KC_NO,             KC_NO,      KC_NO,      KC_NO,      KC_NO,
          KC_NO,      KC_NO,    KC_NO,             KC_NO,      KC_NO,      KC_NO,      /*none*/
          KC_NO,      KC_NO,    _______,           _______,    _______,    _______,    KC_NO,
          _______,    KC_NO,    TG(LAYER_FUNC),    KC_NO,      _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_F15,     KC_F12,     KC_F7,      KC_F8,      KC_F9,    KC_NO,
          KC_NO,      KC_F14,     KC_F11,     KC_F4,      KC_F5,      KC_F6,    KC_NO,
          /*none*/    KC_F13,     KC_F10,     KC_F1,      KC_F2,      KC_F3,    KC_NO,
          KC_NO,      _______,    _______,    _______,    _______,    KC_NO,    KC_NO,
          /*none*/    /*none*/    _______,    KC_NO,      KC_NO,      KC_NO,    KC_NO,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_CONTROL] = LAYOUT_ergodox(

          // left hand
          KC_AUDIO_MUTE,        TO(LAYER_BLOCK),    KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_AUDIO_VOL_UP,      KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_AUDIO_VOL_DOWN,    KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,                KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
          KC_NO,                DEBUG,              KC_NO,    KC_NO,    KC_NO,    /*none*/    /*none*/

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    RESET,
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*none*/    KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*none*/    /*none*/    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,

          // right thumb
          DYN_REC_START2,    DYN_REC_START1,
          DYN_REC_STOP,
          KC_NO,             DYN_MACRO_PLAY2,    DYN_MACRO_PLAY1

          ),

};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return 200;
    }
}

bool shift_lock_on = false;

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
                // pressed
                if (shift_lock_on) {
                    // stop shift lock
                    unregister_mods(MOD_BIT(KC_LSHIFT));
                    shift_lock_on = false;
                    ergodox_right_led_1_off();
                    ergodox_right_led_2_off();
                    ergodox_right_led_3_off();
                } else {
                    // start shift lock
                    add_mods(MOD_BIT(KC_LSHIFT));
                    shift_lock_on = true;
                    ergodox_right_led_1_on();
                    ergodox_right_led_2_on();
                    ergodox_right_led_3_on();
                }
            } else {
                // released
            }
            return false;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  uint8_t layer = get_highest_layer(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
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
  return state;
};

// vim: set foldmethod=manual
