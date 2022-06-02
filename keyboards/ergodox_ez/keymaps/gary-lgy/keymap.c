#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"

enum layers {
    LAYER_BLOCK,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_FUNC,
    LAYER_CONTROL,
};


enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    MACRO_NOT_EQUAL,
    MACRO_COLON_EQUAL,
    MACRO_VISIBLE_WINDOW,
    CUSTOM_KC_SHIFT_LOCK,
    CUSTOM_KC_MO_LAYER_SYM_OR_SHIFT_LOCK,
};

enum tap_dance_keycodes {
    TD_CMD_G,
};

#define change_input_method C(A(KC_SPACE))
#define tmux_prefix C(KC_B)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [LAYER_BLOCK] = LAYOUT_ergodox(

            // left hand
            KC_Q,                 KC_DOT,            KC_U,       KC_P,             KC_J,        KC_COLON,         KC_NO,
            KC_SCOLON,            KC_I,              KC_E,       KC_O,             KC_Y,        KC_UNDERSCORE,    TT(LAYER_SYM),
            KC_Z,                 KC_COMMA,          KC_W,       KC_A,             KC_QUOTE,    KC_DOLLAR,        /*none*/
            KC_NO,                G(KC_TAB),         KC_LALT,    KC_LSHIFT,        KC_LGUI,     KC_LCTRL,         KC_NO,
            MO(LAYER_CONTROL),    TT(LAYER_FUNC),    KC_HYPR,    TT(LAYER_NUM),    KC_BSPACE,

            // left thumb
            /*none*/      KC_MS_BTN1,     KC_MS_BTN2,
            /*none*/      /*none*/        MACRO_VISIBLE_WINDOW,
            KC_ESCAPE,    KC_CAPSLOCK,    KC_MS_BTN3,

            // right hand
            KC_NO,             KC_SLASH,    KC_K,        KC_L,                                    KC_C,       KC_R,       KC_F,
            KC_TAB,            KC_MINUS,    KC_M,        KC_H,                                    KC_T,       KC_S,       KC_B,
            /*none*/           KC_EQUAL,    KC_V,        KC_N,                                    KC_D,       KC_G,       KC_X,
            MO(LAYER_FUNC),    KC_RCTRL,    KC_RGUI,     KC_RSHIFT,                               KC_RALT,    KC_UP,      KC_GRAVE,
            /*none*/           /*none*/     KC_SPACE,    CUSTOM_KC_MO_LAYER_SYM_OR_SHIFT_LOCK,    KC_LEFT,    KC_DOWN,    KC_RIGHT,

            // right thumb
            C(KC_LEFT),    C(KC_RIGHT),
            KC_UP,
            KC_DOWN,       A(KC_SPACE),    KC_ENTER

            ),

  [LAYER_SYM] = LAYOUT_ergodox(

          // left hand
          KC_NO,      KC_RIGHT_ANGLE_BRACKET,    KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PERCENT,      KC_NO,      KC_NO,
          KC_NO,      KC_LEFT_ANGLE_BRACKET,     KC_LEFT_PAREN,          KC_RIGHT_PAREN,          KC_AMPERSAND,    KC_NO,      TG(LAYER_SYM),
          KC_NO,      KC_BSLASH,                 KC_LBRACKET,            KC_RBRACKET,             KC_PIPE,         KC_NO,      /*none*/
          KC_NO,      KC_NO,                     _______,                _______,                 _______,         _______,    KC_NO,
          _______,    KC_NO,                     KC_NO,                  HYPR(KC_SPACE),          _______,

          // left thumb
          /*none*/    KC_NO,      KC_NO,
          /*none*/    /*none*/    KC_NO,
          KC_NO,      KC_NO,      KC_NO,

          // right hand
          KC_NO,      KC_NO,      KC_NO,      KC_NO,            MACRO_COLON_EQUAL,    MACRO_NOT_EQUAL,    KC_NO,
          KC_NO,      KC_NO,      KC_NO,      KC_HASH,          KC_ASTR,              KC_CIRCUMFLEX,      KC_NO,
          /*none*/    KC_NO,      KC_NO,      KC_EXCLAIM,       KC_AT,                KC_NO,              KC_NO,
          KC_NO,      _______,    _______,    _______,          _______,              KC_NO,              KC_NO,
          /*none*/    /*none*/    _______,    TG(LAYER_SYM),    KC_NO,                KC_NO,              KC_NO,

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
          KC_NO,      KC_NO,      KC_COMMA,    KC_7,                    KC_8,       KC_9,         KC_NO,
          KC_NO,      KC_NO,      KC_DOT,      KC_4,                    KC_5,       KC_6,         KC_NO,
          /*none*/    KC_NO,      KC_0,        KC_1,                    KC_2,       KC_3,         KC_NO,
          KC_NO,      _______,    _______,     _______,                 _______,    KC_PGUP,      KC_NO,
          /*none*/    /*none*/    _______,     CUSTOM_KC_SHIFT_LOCK,    KC_HOME,    KC_PGDOWN,    KC_END,

          // right thumb
          KC_NO,    KC_NO,
          KC_NO,
          KC_NO,    KC_NO,    KC_NO

          ),

  [LAYER_FUNC] = LAYOUT_ergodox(

          // left hand
          KC_NO,      KC_NO,             KC_UP,      KC_NO,       KC_NO,      KC_NO,      KC_NO,
          KC_NO,      KC_LEFT,           KC_DOWN,    KC_RIGHT,    KC_NO,      KC_NO,      KC_NO,
          KC_NO,      KC_NO,             KC_NO,      KC_NO,       KC_NO,      KC_NO,      /*none*/
          KC_NO,      KC_NO,             _______,    _______,     _______,    _______,    KC_NO,
          _______,    TG(LAYER_FUNC),    KC_NO,      KC_NO,       _______,

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

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'TD_DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }

    return TD_UNKNOWN;
}

// Create an instance of 'td_tap_t' for the 'x' tap dance.
static td_tap_t cmd_g_tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void cmd_g_finished(qk_tap_dance_state_t *state, void *user_data) {
    cmd_g_tap_state.state = cur_dance(state);
    switch (cmd_g_tap_state.state) {
        case TD_SINGLE_TAP: register_code16(G(KC_G)); break;
        case TD_SINGLE_HOLD: register_code16(G(KC_G)); break;
        case TD_DOUBLE_TAP: register_code16(S(G(KC_G))); break;
        case TD_DOUBLE_HOLD: register_code16(S(G(KC_G))); break;
        // Last case is for fast typing. Assuming your key is `f`:
        // For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
        // In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
        case TD_DOUBLE_SINGLE_TAP: register_code16(S(G(KC_G))); break;
        default: break;
    }
}

void cmd_g_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (cmd_g_tap_state.state) {
        case TD_SINGLE_TAP: unregister_code16(G(KC_G)); break;
        case TD_SINGLE_HOLD: unregister_code16(G(KC_G)); break;
        case TD_DOUBLE_TAP: unregister_code16(S(G(KC_G))); break;
        case TD_DOUBLE_HOLD: unregister_code16(S(G(KC_G))); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(S(G(KC_G))); break;
        default: break;
    }
    cmd_g_tap_state.state = TD_NONE;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_CMD_G] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, cmd_g_finished, cmd_g_reset)
};

static bool shift_lock_on = false;

void turn_on_shift_lock(void) {
    add_mods(MOD_BIT(KC_LSHIFT));
    shift_lock_on = true;
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
}

void turn_off_shift_lock(void) {
    unregister_mods(MOD_BIT(KC_LSHIFT));
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
        case MACRO_VISIBLE_WINDOW:
            if (record->event.pressed) {
                add_mods(MOD_BIT(KC_LGUI));
                tap_code(KC_GRAVE);
            } else {
                unregister_mods(MOD_BIT(KC_LGUI));
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
        case CUSTOM_KC_MO_LAYER_SYM_OR_SHIFT_LOCK:
            if (record->event.pressed && shift_lock_on) {
                turn_off_shift_lock();
                return false;
            }

            // simulate MO(LAYER_SYM)
            if (record->event.pressed) {
                layer_on(LAYER_SYM);
            } else {
                layer_off(LAYER_SYM);
            }
            return false;
    }

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    if (shift_lock_on) {
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        return state;
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
    return state;
}


// vim: set foldmethod=manual
