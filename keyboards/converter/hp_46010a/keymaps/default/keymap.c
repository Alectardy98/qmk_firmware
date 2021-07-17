/*
Copyright 2018 listofoptions <listofoptions@gmail.com>

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

#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}

#define AC_FN0 M(0)                          //Test
#define AC_FN1 M(1)                          //Desktop Right
#define AC_FN2 M(2)                          //Desktop Left
#define AC_FN3 M(3)                          //New Explorer On Windows
#define AC_FN4 M(4)                          //Snip Tool Windows
#define AC_FN5 M(5)                          //V-Desktop Up
#define AC_FN6 M(6)                          //Min All
#define AC_FN7 M(7)                          //Paste
#define AC_FN8 M(8)                          //Copy All
#define AC_FN9 M(9)                          //Task Manager
#define AC_FN10 M(10)                        //Double Zero
#define AC_FN11 M(11)                        //F1


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
            switch(id) {
            case 0:  {               //TEST
                if (record->event.pressed) {
                      return  MACRO( I(0), T(CAPS), END ) ;
            }else{
                     }
            break;
        }
            case 1: {                 //Desktop Right
               if (record->event.pressed) {
                      return  MACRO( I(0), D(LGUI), D(LCTL), T(RGHT), U(LGUI), U(LCTL), END ) ;
                      }else{
                     }
            break;
        }
            case 2:   {               //Desktop Left
                if (record->event.pressed) {
                      return   MACRO( I(0), D(LGUI), D(LCTL), T(LEFT), U(LGUI), U(LCTL), END ) ;
                      }else{
                     }
            break;
        }
            case 3:   {               //New Explorer
                if (record->event.pressed) {
                      return  MACRO( I(0), D(LGUI), D(E), U(LGUI), U(E), END ) ;
                      }else{
                    }
            break;
        }
            case 4:  {                //Snip Tool
                if (record->event.pressed) {
                      return  MACRO( I(0), D(LGUI), D(LSFT), T(S), U(LGUI), U(LSFT), END ) ;
                      }else{
                     }
            break;
        }
            case 5:    {              //V-Desktop Up
               if (record->event.pressed) {
                      return  MACRO( I(0), D(LGUI), T(TAB), U(LGUI), END ) ;
                      }else{
                     }
            break;
        }
            case 6:   {               //Min All
                if (record->event.pressed) {
                      return MACRO( I(0), D(LGUI), T(D), U(LGUI), END ) ;
                      }else{
                    }
            break;
        }
            case 7:  {                // Paste All
                if (record->event.pressed) {
                      return MACRO( I(0), T(F2), D(LCTL), T(V), U(LCTL), END ) ;
                      }else{
                    }
            break;
        }
            case 8:  {                //Copy All
                if (record->event.pressed) {
                      return  MACRO( I(0), T(F2), D(LCTL), T(A), T(C), U(LCTL), END ) ;
                      }else{
                   }
            break;
        }
            case 9:  {                //Task Manager
                if (record->event.pressed) {
                      return  MACRO( I(0), D(LSFT), D(LCTL), T(ESC), U(LSFT), U(LCTL), END ) ;
                      }else{
                    }
            break;
        }
            case 10:   {               //Double Zero
                if (record->event.pressed) {
                      return  MACRO( I(0), T(P0), T(P0), END ) ;
                      }else{
                    }
            break;
        }
                      
            case 11:   {               //F1
               if (record->event.pressed) {
                      return  MACRO( D(FN23), T(F1), U(FN23), END ) ;
                      }else{
                    }
            break;
        }
            }
        return MACRO_NONE;
    };





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ,---------.  ,---------------------------------------------------------.  ,---------.    ,-------------------.
     * | esc|TSKM|  |   f1|   f2|   f3|   f4|xxxx|xxxx|   f5|   f6|   f7|   f8|  |xxxx|xxxx|    |  f9| f10| f11| f12|
     * `---------'  `---------------------------------------------------------'  `---------'    `-------------------'
     * ,------------------------------------------------------------------------..---------.    ,-------------------.
     * |     `|   1|   2|   3|   4|   5|   6|   7|   8|   9|   0|   -|   =| back||ins |home|    |   *|   /|   +|   -|
     * |------------------------------------------------------------------------||---------|    |-------------------|
     * |     tab|   q|   w|   e|   r|   t|   y|   u|   i|   o|   p|   [|  ]|   \||del | end|    |   7|   8|   9|pade|
     * |------------------------------------------------------------------------||---------|    |-------------------|
     * |caps|ctrl|   a|   s|   d|   f|   g|   h|   j|   k|   l|   ;|   '|   retr||xxxx|pgup|    |   4|   5|   6|   ,|
     * |------------------------------------------------------------------------------------    |-------------------|
     * |del |lsft  |   z|   x|   c|   v|   b|   n|   m|   ,|   .|   /|rsft  | app|  up|pgdn|    |   1|   2|   3| tab|
     * |-------------------------------------------------------------------------|---------|    |---------------    |
     * | gui|XLEFT |lalt|              space                    |ralt|XRGHT |left|down|rght|    |        0|   .|    |
     * `-----------------------------------------------------------------------------------'    `-------------------'
     */
     
    [0] = LAYOUT(
        KC_ESC,AC_FN9,  KC_F1,KC_F2,KC_F3,KC_F4,   KC_HOME,KC_PSCR,   KC_F5,KC_F6,KC_F7,KC_F8,                     AC_FN8, AC_FN7,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
        KC_GRAVE,     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC,     KC_INS, KC_DEL,     KC_PAST, KC_PSLS, KC_PPLS, KC_PMNS, \
        KC_TAB,          KC_Q,KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,     KC_PGUP,KC_PGDN,    KC_7,    KC_8,    KC_9,    KC_PENT, \
        KC_CAPS, KC_LCTL,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,        KC_ENT,  DM_PLY1, DM_PLY2,   KC_4,    KC_5,    KC_6,    KC_PCMM, \
        KC_DEL,  KC_LSFT,     KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,KC_RSFT, KC_MPLY, KC_UP,   KC_MNXT,   KC_1,    KC_2,    KC_3,    KC_TAB,  \
        KC_LGUI, MO(1), KC_LALT,                      KC_SPACE,                            KC_RALT,MO(1), KC_LEFT, KC_DOWN, KC_RGHT,        KC_0,       KC_PDOT            \
    ),
    [1] = LAYOUT(
        RESET,DEBUG,  KC_F1,KC_F2,KC_F3,KC_F4,   KC_HOME,KC_PSCR,   KC_F5,KC_F6,KC_F7,KC_F8,                       AC_FN8, AC_FN7,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
        KC_GRAVE,     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC,     KC_INS, KC_DEL,     KC_PAST, KC_PSLS, KC_PPLS, KC_PMNS, \
        KC_TAB,          KC_Q,KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,     KC_PGUP,KC_PGDN,    KC_7,    KC_VOLU, KC_9,    KC_PENT, \
        KC_CAPS, KC_LCTL,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,        KC_ENT,  DM_REC1,DM_REC2,    KC_MPRV, KC_MPLY, KC_MNXT, KC_PCMM, \
        KC_DEL,  KC_LSFT,     KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,KC_RSFT, KC_MPLY, AC_FN5, KC_MNXT,    KC_1,    KC_VOLD, KC_3,    KC_TAB,  \
        KC_LGUI, KC_TRNS, KC_LALT,                      DM_RSTP,                       KC_RALT,KC_TRNS, AC_FN2,  AC_FN6, AC_FN1,        KC_0,       KC_PDOT                \
    ),
} ;
