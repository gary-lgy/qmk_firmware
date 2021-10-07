/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

/* #define ORYX_CONFIGURATOR */

/* Conservatively apply modifiers for Mod Tap keys.
 * https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#ignore-mod-tap-interrupt */
#define IGNORE_MOD_TAP_INTERRUPT

/* Trigger Mod Tap more easily */
/* https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#permissive-hold */
#define PERMISSIVE_HOLD

/* https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#tapping-term */
#define TAPPING_TERM_PER_KEY

/* Number of taps needed to toggle the layer of a TT key.
 * https://beta.docs.qmk.fm/using-qmk/software-features/feature_layers#switching-and-toggling-layers-id-switching-and-toggling-layers
 * Ergodox EZ defaults to 1 */
#ifdef TAPPING_TOGGLE
#undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 2

/* Tapping this number of times holds the key until tapped once again. */
/* https://beta.docs.qmk.fm/using-qmk/software-features/one_shot_keys */
#define ONESHOT_TAP_TOGGLE 2

#define AUTO_SHIFT_REPEAT
#define AUTO_SHIFT_NO_AUTO_REPEAT
