/* Copyright 2020 Purdea Andrei
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _FN2
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_all(
        KC_ESC  , AC_FN9  ,   KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS, KC_BSPC,     MO(_FN2), KC_CAPS, KC_PSLS, KC_PAST,
        DM_PLY1  , DM_PLY2  ,   KC_TAB ,     KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,            KC_INS,   KC_HOME, KC_PGUP, KC_PAST,
        AC_FN3  , AC_FN4  ,   KC_LCTL,      KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT ,         KC_DEL,   KC_END,  KC_PGDN, KC_PMNS,
        AC_FN8  , AC_FN7  ,   KC_LSFT,    MO(_FN),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_RSFT,           _______,  KC_UP,   _______, KC_BSPC,
        AC_FN2  , AC_FN1 ,   KC_RGUI,           KC_LALT,                 KC_SPC ,                                              MO(_FN),              KC_RGUI,            KC_LEFT,  KC_DOWN, KC_RGHT, KC_PENT
    ),
    [_FN] = LAYOUT_all(
        RESET , DEBUG,   KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______,        _______, _______, _______, _______,
        DM_REC1, DM_REC2,   _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______,   _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______,
        _______, _______,   _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           KC_MPLY, KC_VOLU, KC_MPLY, _______,
        _______, _______,   _______,           _______,                 DM_RSTP,                                             _______,               _______,           KC_MPRV, KC_VOLD, KC_MNXT, _______
    ),
    [_FN2] = LAYOUT_all(
        _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______,
        _______, _______,   _______,     _______,_______,_______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             KC_P7  , KC_P8  , KC_P9  , _______,
        _______, _______,   _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         KC_P4  , KC_P5  , KC_P6  , _______,
        _______, _______,   _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           KC_P1  , KC_P2  , KC_P3  , _______,
        _______, _______,   _______,           _______,                 _______,                                              _______,              _______,           KC_P0  , AC_FN10, KC_PDOT, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is presse
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
