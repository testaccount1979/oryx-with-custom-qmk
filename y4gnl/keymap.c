#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(11, KC_F15)
#define DUAL_FUNC_1 LT(10, KC_F15)
#define DUAL_FUNC_2 LT(9, KC_W)
#define DUAL_FUNC_3 LT(14, KC_L)
#define DUAL_FUNC_4 LT(10, KC_N)
#define DUAL_FUNC_5 LT(2, KC_R)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    CW_TOGG,        KC_W,           MT(MOD_LCTL, KC_C),MT(MOD_LALT, KC_M),MT(MOD_LGUI, KC_P),KC_K,                                           KC_X,           MT(MOD_RGUI, KC_L),MT(MOD_RALT, KC_O),MT(MOD_RCTL, KC_U),KC_J,           TG(4),          
    KC_TAB,         KC_R,           LT(3, KC_S),    LT(2, KC_T),    LT(1, KC_H),    KC_B,                                           KC_Y,           LT(1, KC_N),    LT(2, KC_A),    LT(3, KC_E),    KC_I,           KC_COMMA,       
    KC_LEFT_CTRL,   KC_Q,           KC_G,           KC_D,           MT(MOD_LSFT, KC_F),KC_V,                                           KC_Z,           KC_SLASH,       KC_QUOTE,       KC_SCLN,        KC_DOT,         KC_QUES,        
                                                    KC_BSPC,        KC_SPACE,                                       KC_LEFT_GUI,    KC_RIGHT_SHIFT
  ),
  [1] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_TRANSPARENT, 
    RGB_HUI,        KC_TRANSPARENT, KC_ESCAPE,      LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT,                                 KC_AUDIO_VOL_UP,LGUI(KC_C),     KC_UP,          KC_BSPC,        LGUI(KC_V),     KC_TRANSPARENT, 
    RGB_HUD,        LGUI(KC_GRAVE), DUAL_FUNC_0,    DUAL_FUNC_1,    LGUI(KC_RBRC),  LGUI(LCTL(LSFT(KC_4))),                                KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS,        LSFT(KC_3),     KC_DLR,         KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_DOT),   KC_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_MINUS,       KC_BSLS,        KC_PLUS,                                        KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_PIPE,        KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AT,          DUAL_FUNC_2,    DUAL_FUNC_3,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ASTR,        KC_PERC,        DUAL_FUNC_4,    KC_DQUO,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    DUAL_FUNC_5,    KC_TRANSPARENT,                                 KC_ENTER,       KC_LEFT_ALT
  ),
};


const uint16_t PROGMEM combo0[] = { MT(MOD_LGUI, KC_P), LT(1, KC_H), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LALT, KC_M), LT(2, KC_T), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LCTL, KC_C), LT(3, KC_S), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_RGUI, KC_L), LT(1, KC_N), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_RALT, KC_O), LT(2, KC_A), COMBO_END};
const uint16_t PROGMEM combo6[] = { MT(MOD_RCTL, KC_U), LT(3, KC_E), COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_J, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_LPRN),
    COMBO(combo1, KC_LBRC),
    COMBO(combo2, KC_LCBR),
    COMBO(combo3, KC_LABK),
    COMBO(combo4, KC_RPRN),
    COMBO(combo5, KC_RBRC),
    COMBO(combo6, KC_RCBR),
    COMBO(combo7, KC_RABK),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_LBRC));
        } else {
          unregister_code16(LGUI(KC_LBRC));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_RBRC));
        } else {
          unregister_code16(LALT(KC_RBRC));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_RBRC)));
        } else {
          unregister_code16(LALT(LSFT(KC_RBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_LBRC));
        } else {
          unregister_code16(LALT(KC_LBRC));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_LBRC)));
        } else {
          unregister_code16(LALT(LSFT(KC_LBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SPACE);
        } else {
          unregister_code16(KC_SPACE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SPACE);
        } else {
          unregister_code16(KC_SPACE);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


// Magic Key Rules
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_QUOTE: return KC_L;

        case KC_W: return KC_R;
        case KC_S: return KC_C;
  
        case KC_F: return KC_T;
        case KC_P: return KC_T;

        case KC_B: return KC_T;
      
        case KC_G: return KC_H;
        case KC_M: return KC_B;

        case KC_C: return KC_K;
        case KC_R: return KC_K;
        case KC_A: return KC_Y;
        case KC_E: return KC_X;
        case KC_I: return KC_X;
    }
    return KC_SLASH;
}

