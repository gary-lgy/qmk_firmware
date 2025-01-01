/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once


#define USE_SERIAL

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS
// Rows are doubled-up

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#define TAPPING_TERM_PER_KEY

#ifdef TAPPING_TOGGLE
#undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 2

#ifdef ONESHOT_TAP_TOGGLE
#undef ONESHOT_TAP_TOGGLE
#endif
#define ONESHOT_TAP_TOGGLE 2

// Repeat auto-shifted keys
// https://beta.docs.qmk.fm/using-qmk/software-features/feature_auto_shift#how-does-it-work
// Enable auto-repeat support.
#define AUTO_SHIFT_REPEAT
// Don't auto-repeat the shifted key if the key is held down.
// To repeat, use tap-hold.
// To repeat the non-shifted key, release the first tap within auto-thift timeout.
// To repeat the shifted key, hold until the shifted key is registered then hold again.
#define AUTO_SHIFT_NO_AUTO_REPEAT
