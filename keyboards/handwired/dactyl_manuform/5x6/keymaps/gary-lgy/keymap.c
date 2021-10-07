#include QMK_KEYBOARD_H
#include "print.h"

enum layers {
    LAYER_BLOCK,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_CONTROL,
};

enum custom_keycodes {
    MACRO_NOT_EQUAL = SAFE_RANGE,
    MACRO_COLON_EQUAL,
    CUSTOM_KC_SHIFT_LOCK,
};


#define BASE_LAYER_WITH_LETTER_LAYOUT(LAYER, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30) \
    LAYOUT_5x6( \
            KC_ESCAPE,            CUSTOM_KC_SHIFT_LOCK,    KC_LALT,    KC_LSHIFT,    KC_LGUI,    KC_LCTRL,     /*-*/             /*---*/    /*-*/             KC_RCTRL,                  KC_RGUI,    KC_RSHIFT,        KC_RALT,    CUSTOM_KC_SHIFT_LOCK,    KC_GRAVE,    \
            KC_TAB,               L_1,                     L_2,        L_3,          L_4,        L_5,          /*-*/             /*---*/    /*-*/             L_6,                       L_7,        L_8,              L_9,        L_10,                    KC_SLASH,    \
            KC_CAPSLOCK,          L_11,                    L_12,       L_13,         L_14,       L_15,         /*-*/             /*---*/    /*-*/             L_16,                      L_17,       L_18,             L_19,       L_20,                    KC_MINUS,    \
            MO(LAYER_CONTROL),    L_21,                    L_22,       L_23,         L_24,       L_25,         /*-*/             /*---*/    /*-*/             L_26,                      L_27,       L_28,             L_29,       L_30,                    KC_EQUAL,    \
            /*-*/                 /*-*/                    KC_NO,      KC_DOLLAR,    /*-*/       /*-*/         /*-*/             /*---*/    /*-*/             /*-*/                      /*-*/       KC_UNDERSCORE,    KC_NO,      /*-*/                    /*-*/        \
            /*-*/                 /*-*/                    /*-*/       /*-*/         /*-*/       KC_BSPACE,    TT(LAYER_NUM),    /*---*/    TT(LAYER_SYM),    LT(LAYER_NAV,KC_SPACE),    /*-*/       /*-*/             /*-*/       /*-*/                    /*-*/        \
            /*-*/                 /*-*/                    /*-*/       /*-*/         /*-*/       KC_ESCAPE,    KC_BTN1,          /*---*/    KC_CAPSLOCK,      KC_ENTER,                  /*-*/       /*-*/             /*-*/       /*-*/                    /*-*/        \
            /*-*/                 /*-*/                    /*-*/       /*-*/         /*-*/       KC_BTN3,      KC_BTN2,          /*---*/    KC_NO,            KC_NO                      /*-*/       /*-*/             /*-*/       /*-*/                    /*-*/        \
  )

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_BLOCK] = BASE_LAYER_WITH_LETTER_LAYOUT(LAYER_BLOCK,

          KC_Q,         KC_DOT,      KC_U,    KC_P,    KC_J,        /*-*/    /*-*/    KC_K,    KC_L,    KC_C,    KC_R,    KC_F,
          KC_SCOLON,    KC_I,        KC_E,    KC_O,    KC_Y,        /*-*/    /*-*/    KC_M,    KC_H,    KC_T,    KC_S,    KC_B,
          KC_Z,         KC_COMMA,    KC_W,    KC_A,    KC_QUOTE,    /*-*/    /*-*/    KC_V,    KC_N,    KC_D,    KC_G,    KC_X

  ),

  [LAYER_NAV] = LAYOUT_5x6(

          KC_NO,    KC_F1,    KC_F2,      KC_F3,      KC_F4,      KC_F5,        /*-*/         /*-*/     KC_F6,    KC_F7,      KC_F8,      KC_F9,        KC_F10,    KC_F11,
          KC_NO,    KC_NO,    KC_NO,      KC_LCTL,    KC_NO,      KC_NO,        /*-*/         /*-*/     KC_NO,    KC_HOME,    KC_UP,      KC_END,       KC_NO,     KC_F12,
          KC_NO,    KC_NO,    KC_LALT,    KC_LSFT,    KC_LGUI,    KC_NO,        /*-*/         /*-*/     KC_NO,    KC_LEFT,    KC_DOWN,    KC_RIGHT,     KC_NO,     KC_NO,
          KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,        /*-*/         /*-*/     KC_NO,    KC_PGUP,    KC_TAB,     KC_PGDOWN,    KC_NO,     KC_NO,
          /*-*/     /*-*/     KC_NO,      KC_NO,      /*-*/       /*-*/         /*-*/         /*-*/     /*-*/     /*-*/       KC_NO,      KC_NO,        /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_BSPACE,    KC_DELETE,    KC_NO,    KC_NO,    /*-*/       /*-*/       /*-*/         /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_NO,        KC_NO,        KC_NO,    KC_NO,    /*-*/       /*-*/       /*-*/         /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_NO,        KC_NO,        KC_NO,    KC_NO     /*-*/       /*-*/       /*-*/         /*-*/      /*-*/

  ),

  [LAYER_SYM] = LAYOUT_5x6(

          KC_NO,      KC_F1,    KC_F2,                KC_F3,                  KC_F4,                   KC_F5,           /*-*/     /*-*/             KC_F6,      KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,
          KC_NO,      KC_NO,    MACRO_NOT_EQUAL,      KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PERCENT,      /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_F12,
          KC_NO,      KC_NO,    MACRO_COLON_EQUAL,    KC_LEFT_PAREN,          KC_RIGHT_PAREN,          KC_AMPERSAND,    /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
          _______,    KC_NO,    KC_BSLASH,            KC_LBRACKET,            KC_RBRACKET,             KC_PIPE,         /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
          /*-*/       /*-*/     KC_NO,                KC_NO,                  /*-*/                    /*-*/            /*-*/     /*-*/             /*-*/       /*-*/     KC_NO,    KC_NO,    /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/                 /*-*/                   /*-*/                    _______,         KC_NO,    TG(LAYER_SYM),    _______,    /*-*/     /*-*/     /*-*/     /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/                 /*-*/                   /*-*/                    KC_NO,           KC_NO,    KC_NO,            KC_NO,      /*-*/     /*-*/     /*-*/     /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/                 /*-*/                   /*-*/                    KC_NO,           KC_NO,    KC_NO,            KC_NO       /*-*/     /*-*/     /*-*/     /*-*/      /*-*/

  ),

  [LAYER_NUM] = LAYOUT_5x6(

          KC_NO,      KC_F1,    KC_F2,    KC_F3,               KC_F4,         KC_F5,      /*-*/             /*-*/     KC_F6,       KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,
          KC_NO,      KC_NO,    KC_NO,    KC_NO,               KC_NO,         KC_NO,      /*-*/             /*-*/     KC_COMMA,    KC_7,     KC_8,     KC_9,     KC_NO,     KC_F12,
          KC_NO,      KC_NO,    KC_NO,    LGUI(KC_C),          LGUI(KC_V),    KC_NO,      /*-*/             /*-*/     KC_DOT,      KC_4,     KC_5,     KC_6,     KC_NO,     KC_NO,
          _______,    KC_NO,    KC_NO,    LSFT(LGUI(KC_Z)),    LGUI(KC_Z),    KC_NO,      /*-*/             /*-*/     KC_0,        KC_1,     KC_2,     KC_3,     KC_NO,     KC_NO,
          /*-*/       /*-*/     KC_NO,    KC_NO,               /*-*/          /*-*/       /*-*/             /*-*/     /*-*/        /*-*/     KC_NO,    KC_NO,    /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/     /*-*/                /*-*/          _______,    TG(LAYER_NUM),    KC_NO,    _______,     /*-*/     /*-*/     /*-*/     /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/     /*-*/                /*-*/          KC_NO,      KC_NO,            KC_NO,    KC_NO,       /*-*/     /*-*/     /*-*/     /*-*/      /*-*/
          /*-*/       /*-*/     /*-*/     /*-*/                /*-*/          KC_NO,      KC_NO,            KC_NO,    KC_NO        /*-*/     /*-*/     /*-*/     /*-*/      /*-*/

  ),

  [LAYER_CONTROL] = LAYOUT_5x6(

          KC_AUDIO_MUTE,        TO(LAYER_BLOCK),    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    RESET,
          KC_AUDIO_VOL_UP,      KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_AUDIO_VOL_DOWN,    KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,                KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*-*/                 /*-*/               DEBUG,    KC_NO,    /*-*/     /*-*/     /*-*/     /*-*/    /*-*/     /*-*/     /*-*/     KC_NO,    KC_NO,    /*-*/     /*-*/
          /*-*/                 /*-*/               /*-*/     /*-*/     /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO,    /*-*/     /*-*/     /*-*/     /*-*/     /*-*/
          /*-*/                 /*-*/               /*-*/     /*-*/     /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO,    /*-*/     /*-*/     /*-*/     /*-*/     /*-*/
          /*-*/                 /*-*/               /*-*/     /*-*/     /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO     /*-*/     /*-*/     /*-*/     /*-*/     /*-*/

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
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    dprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
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
                } else {
                    // start shift lock
                    add_mods(MOD_BIT(KC_LSHIFT));
                    shift_lock_on = true;
                }
            } else {
                // released
            }
            return false;
    }

    return true;
}
