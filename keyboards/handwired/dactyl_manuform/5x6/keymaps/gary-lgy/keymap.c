#include QMK_KEYBOARD_H
#include "print.h"

enum layers {
    /* LAYER_BLOCK, */
    LAYER_QWERTY,
    LAYER_GAMING,
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
  [LAYER_BLOCK] = LAYOUT_5x6(

          KC_ESCAPE,            KC_1,       KC_2,        KC_3,         KC_4,    KC_5,            (-)             (---)    (-)             KC_6,                      KC_7,    KC_8,             KC_9,     KC_0,    KC_GRAVE,    \
          KC_TAB,               KC_Q,       KC_DOT,      KC_U,         KC_P,    KC_J,            (-)             (---)    (-)             KC_K,                      KC_L,    KC_C,             KC_R,     KC_F,    KC_SLASH,    \
          KC_CAPS_LOCK,         KC_SCLN,    KC_I,        KC_E,         KC_O,    KC_Y,            (-)             (---)    (-)             KC_M,                      KC_H,    KC_T,             KC_S,     KC_B,    KC_MINUS,    \
          MO(LAYER_CONTROL),    KC_Z,       KC_COMMA,    KC_W,         KC_A,    KC_QUOTE,        (-)             (---)    (-)             KC_V,                      KC_N,    KC_D,             KC_G,     KC_X,    KC_EQUAL,    \
          (-)                 (-)       KC_NO,       KC_DOLLAR,    (-)    (-)            (-)             (---)    (-)             (-)                      (-)    KC_UNDERSCORE,    KC_NO,    (-)    (-)        \
          (-)                 (-)       (-)        (-)         (-)    KC_BACKSPACE,    TT(LAYER_NUM),    (---)    TT(LAYER_SYM),    LT(LAYER_NAV,KC_SPACE),    (-)    (-)             (-)     (-)    (-)        \
          (-)                 (-)       (-)        (-)         (-)    KC_ESCAPE,       KC_BTN1,          (---)    KC_CAPS_LOCK,     KC_ENTER,                  (-)    (-)             (-)     (-)    (-)        \
          (-)                 (-)       (-)        (-)         (-)    KC_BTN3,         KC_BTN2,          (---)    KC_NO,            KC_NO                      (-)    (-)             (-)     (-)    (-)        \

   ),
   */

  [LAYER_QWERTY] = LAYOUT_5x6(

          KC_GRAVE,             KC_1,    KC_2,       KC_3,       KC_4,    KC_5,            /*-*/             /*---*/    /*-*/                   KC_6,                      KC_7,    KC_8,        KC_9,       KC_0,       KC_MINUS,        \
          KC_TAB,               KC_Q,    KC_W,       KC_E,       KC_R,    KC_T,            /*-*/             /*---*/    /*-*/                   KC_Y,                      KC_U,    KC_I,        KC_O,       KC_P,       KC_EQUAL,        \
          KC_CAPS_LOCK,         KC_A,    KC_S,       KC_D,       KC_F,    KC_G,            /*-*/             /*---*/    /*-*/                   KC_H,                      KC_J,    KC_K,        KC_L,       KC_SCLN,    KC_QUOTE,        \
          MO(LAYER_CONTROL),    KC_Z,    KC_X,       KC_C,       KC_V,    KC_B,            /*-*/             /*---*/    /*-*/                   KC_N,                      KC_M,    KC_COMMA,    KC_DOT,     KC_SLSH,    KC_BACKSLASH,    \
          /*-*/                 /*-*/    KC_LCTL,    KC_LGUI,    /*-*/    /*-*/            /*-*/             /*---*/    /*-*/                   /*-*/                      /*-*/    KC_LBRC,     KC_RBRC,    /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_BACKSPACE,    TT(LAYER_NUM),    /*---*/    TT(LAYER_SYM),          LT(LAYER_NAV,KC_SPACE),    /*-*/    /*-*/        /*-*/       /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_ESCAPE,       KC_BTN1,          /*---*/    QK_CAPS_WORD_TOGGLE,    KC_ENTER,                  /*-*/    /*-*/        /*-*/       /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_LSFT,         KC_BTN2,          /*---*/    KC_RALT,                KC_RSFT                    /*-*/    /*-*/        /*-*/       /*-*/       /*-*/            \

   ),

  [LAYER_GAMING] = LAYOUT_5x6(

          KC_GRAVE,             KC_1,    KC_2,       KC_3,       KC_4,    KC_5,         /*-*/       /*---*/    /*-*/       KC_6,                          KC_7,    KC_8,        KC_9,                                            KC_0,       KC_MINUS,        \
          KC_TAB,               KC_Q,    KC_W,       KC_E,       KC_R,    KC_T,         /*-*/       /*---*/    /*-*/       KC_Y,                          KC_U,    KC_I,        KC_O,                                            KC_P,       KC_EQUAL,        \
          KC_CAPS_LOCK,         KC_A,    KC_S,       KC_D,       KC_F,    KC_G,         /*-*/       /*---*/    /*-*/       KC_H,                          KC_J,    KC_K,        KC_L,                                            KC_SCLN,    KC_QUOTE,        \
          MO(LAYER_CONTROL),    KC_Z,    KC_X,       KC_C,       KC_V,    KC_B,         /*-*/       /*---*/    /*-*/       KC_N,                          KC_M,    KC_COMMA,    KC_DOT,                                          KC_SLSH,    KC_BACKSLASH,    \
          /*-*/                 /*-*/    KC_LGUI,    KC_LALT,    /*-*/    /*-*/         /*-*/       /*---*/    /*-*/       /*-*/                          /*-*/    KC_LBRC,     KC_RBRC,                                         /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_SPACE,     KC_LCTL,    /*---*/    KC_NO,      LT(LAYER_NAV,KC_BACKSPACE),    /*-*/    /*-*/        /*-*/                 /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_LSFT,      KC_TAB,     /*---*/    KC_NO,      KC_ENTER,                      /*-*/    /*-*/        /*-*/    /*-*/       /*-*/            \
          /*-*/                 /*-*/    /*-*/       /*-*/       /*-*/    KC_ESCAPE,    KC_NO,      /*---*/    KC_RALT,    KC_RSFT                        /*-*/    /*-*/        /*-*/    /*-*/       /*-*/            \

   ),

  [LAYER_NAV] = LAYOUT_5x6(

          KC_NO,    KC_F1,    KC_F2,      KC_F3,      KC_F4,      KC_F5,           /*-*/         /*-*/     KC_F6,    KC_F7,      KC_F8,      KC_F9,       KC_F10,    KC_F11,
          KC_NO,    KC_NO,    KC_NO,      KC_LCTL,    KC_NO,      KC_NO,           /*-*/         /*-*/     KC_NO,    KC_HOME,    KC_UP,      KC_END,      KC_NO,     KC_F12,
          KC_NO,    KC_NO,    KC_LALT,    KC_LSFT,    KC_LGUI,    KC_NO,           /*-*/         /*-*/     KC_NO,    KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_NO,     KC_NO,
          KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_NO,      KC_NO,           /*-*/         /*-*/     KC_NO,    KC_PGUP,    KC_TAB,     KC_PGDN,     KC_NO,     KC_NO,
          /*-*/     /*-*/     KC_NO,      KC_NO,      /*-*/       /*-*/            /*-*/         /*-*/     /*-*/     /*-*/       KC_NO,      KC_NO,       /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_BACKSPACE,    KC_DELETE,    KC_NO,    KC_NO,    /*-*/       /*-*/       /*-*/        /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_NO,           KC_NO,        KC_NO,    KC_NO,    /*-*/       /*-*/       /*-*/        /*-*/      /*-*/
          /*-*/     /*-*/     /*-*/       /*-*/       /*-*/       KC_NO,           KC_NO,        KC_NO,    KC_NO     /*-*/       /*-*/       /*-*/        /*-*/      /*-*/

  ),

  [LAYER_SYM] = LAYOUT_5x6(

          KC_NO,      KC_F1,    KC_F2,                KC_F3,                  KC_F4,                   KC_F5,           /*-*/     /*-*/             KC_F6,      KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,
          KC_NO,      KC_NO,    MACRO_NOT_EQUAL,      KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PERCENT,      /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_F12,
          KC_NO,      KC_NO,    MACRO_COLON_EQUAL,    KC_LEFT_PAREN,          KC_RIGHT_PAREN,          KC_AMPERSAND,    /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
          _______,    KC_NO,    KC_BACKSLASH,         KC_LBRC,                KC_RBRC,                 KC_PIPE,         /*-*/     /*-*/             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
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

          KC_AUDIO_MUTE,        TO(LAYER_QWERTY),    TO(LAYER_GAMING),    KC_NO,            KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_AUDIO_VOL_UP,      KC_NO,               KC_NO,               KC_NO,            KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_AUDIO_VOL_DOWN,    KC_NO,               KC_NO,               KC_NO,            KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          KC_NO,                KC_NO,               KC_NO,               KC_NO,            KC_NO,    KC_NO,    /*-*/     /*-*/    /*-*/     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
          /*-*/                 /*-*/                QK_DEBUG_TOGGLE,     QK_BOOTLOADER,    /*-*/     /*-*/     /*-*/     /*-*/    /*-*/     /*-*/     /*-*/     KC_NO,    KC_NO,    /*-*/     /*-*/
          /*-*/                 /*-*/                /*-*/                /*-*/             /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO,    /*-*/     /*-*/     /*-*/     /*-*/     /*-*/
          /*-*/                 /*-*/                /*-*/                /*-*/             /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO,    /*-*/     /*-*/     /*-*/     /*-*/     /*-*/
          /*-*/                 /*-*/                /*-*/                /*-*/             /*-*/     KC_NO,    KC_NO,    /*-*/    KC_NO,    KC_NO     /*-*/     /*-*/     /*-*/     /*-*/     /*-*/

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
                    unregister_mods(MOD_BIT(KC_LSFT));
                    shift_lock_on = false;
                } else {
                    // start shift lock
                    add_mods(MOD_BIT(KC_LSFT));
                    shift_lock_on = true;
                }
            } else {
                // released
            }
            return false;
    }

    return true;
}

void turn_off_auto_shift_for_gaming_layer(layer_state_t state) {
    if (layer_state_cmp(state, LAYER_GAMING)) {
        autoshift_disable();
    } else {
        autoshift_enable();
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    turn_off_auto_shift_for_gaming_layer(state);

    return state;
}

