#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(15, KC_F6)
#define DUAL_FUNC_1 LT(5, KC_F13)
#define DUAL_FUNC_2 LT(14, KC_3)
#define DUAL_FUNC_3 LT(13, KC_F12)
#define DUAL_FUNC_4 LT(13, KC_F1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,                                          KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,          
    KC_NO,          KC_X,           MT(MOD_RGUI, KC_L),MT(MOD_RALT, KC_O),MT(MOD_RCTL, KC_U),KC_J,           TO(4),                                          KC_TAB,         KC_W,           MT(MOD_LCTL, KC_C),KC_M,           KC_P,           KC_K,           KC_NO,          
    KC_NO,          KC_Y,           LT(1, KC_N),    LT(2, KC_A),    KC_E,           KC_I,           KC_COMMA,                                                                       KC_LEFT_CTRL,   KC_R,           LT(3, KC_S),    LT(2, KC_T),    LT(1, KC_H),    KC_B,           KC_NO,          
    KC_NO,          KC_Z,           QK_AREP,       KC_QUOTE,       LT(3, KC_SCLN), KC_DOT,                                         KC_Q,           KC_G,           MT(MOD_RALT, KC_D),MT(MOD_LSFT, KC_F),KC_V,           KC_NO,          
    KC_LEFT_GUI,    KC_RIGHT_SHIFT, KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        KC_SPACE,       
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_TRANSPARENT,                                 RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_PAGE_UP,     KC_UP,          KC_BSPC,        KC_PGDN,        KC_TRANSPARENT,                                 RGB_HUI,        KC_TRANSPARENT, KC_ESCAPE,      LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT,                                                                 RGB_HUD,        LGUI(KC_GRAVE), DUAL_FUNC_0,    DUAL_FUNC_1,    LGUI(KC_RBRC),  LGUI(LCTL(LSFT(KC_4))),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_DOT),   KC_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS,        LSFT(KC_3),     KC_DLR,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_PIPE,        KC_SLASH,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_MINUS,       KC_BSLS,        KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AT,          DUAL_FUNC_2,    DUAL_FUNC_3,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_COLN,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_ASTR,        KC_PERC,        DUAL_FUNC_4,    KC_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,                                        KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           TO(0),                                          KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT,                                                                 KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,                                       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT, 
    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {172,1,203}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {75,255,255}, {75,255,255}, {75,255,255}, {0,0,0}, {75,255,255}, {42,134,234}, {190,255,255}, {0,0,0}, {0,0,0}, {75,255,255}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {75,255,255}, {0,182,238}, {190,255,255}, {0,0,0}, {0,0,0}, {0,182,238}, {42,134,234}, {23,189,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {172,1,203}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {190,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {190,255,255}, {0,0,0}, {161,135,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,134,234}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,134,234}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {106,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {172,1,203}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,135,235}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,135,235}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,135,235}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198}, {161,162,198} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


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
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

// Custom QMK
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_QUOTE: return KC_L;
      
        case KC_G: return KC_H;
      
        case KC_P: return KC_T;
        case KC_W: return KC_R;
        case KC_S: return KC_C;
      
        case KC_M: return KC_B;
      
        case KC_R: return KC_K;
        case KC_E: return KC_L;
        case KC_I: return KC_L;
    }
    return KC_SLASH;
}
