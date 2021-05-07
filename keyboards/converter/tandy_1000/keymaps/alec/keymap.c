
#include QMK_KEYBOARD_H
#define TAP_HOLD_CAPS_DELAY 150

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

    
   
  [0] = LAYOUT(
     KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL, AC_FN9,
     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, KC_LALT, KC_PSCR, KC_BSLS, KC_GRV, KC_PGUP,
     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_HOME, TG(1), KC_NUBS, KC_KP_5, KC_KP_6,
     KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_RGUI, KC_UP, KC_END, KC_ZKHK, KC_PGDN,
     KC_CAPSLOCK, KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, MO(2), KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_KP_ENTER,
     KC_SPACE
     ),
    [1] = LAYOUT(
                 KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL, AC_FN9,
                 KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, KC_LALT, KC_PSCR, KC_KP_7, KC_KP_8, KC_KP_9,
                 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_HOME, TG(1), KC_KP_4, KC_KP_5, KC_KP_6,
                 KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_RGUI, KC_UP, KC_KP_1, KC_KP_2, KC_KP_3,
                 KC_CAPSLOCK, KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, MO(2), KC_LEFT, KC_DOWN, KC_RIGHT, KC_KP_0, KC_KP_ENTER,
                 KC_SPACE
                 ),
    [2] = LAYOUT(
                 KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL, KC_PAUSE,
                 RESET, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, KC_LALT, KC_PSCR, KC_KP_7, KC_VOLU, KC_KP_9,
                 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_HOME, KC_NLCK, KC_MPRV, KC_MPLY, KC_MNXT,
                 KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_RGUI, AC_FN5, KC_KP_1, KC_VOLD, KC_KP_3,
                 KC_CAPSLOCK, KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_TRNS, AC_FN2, AC_FN6, AC_FN1, KC_KP_0, KC_KP_ENTER,
                 KC_SPACE
                 ),
} ;
