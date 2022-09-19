#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRACKET,                                    KC_RBRACKET,    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_GRAVE,                                                                       KC_SLASH,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    MO(2),          KC_LCTRL,       KC_LALT,        TD(DANCE_0),    KC_LGUI,        LSFT(KC_F6),                                                                                                    LALT(KC_F7),    ST_MACRO_0,     KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_BSPACE,      TO(1),                          TO(2),          KC_DELETE,      KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGUP,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, TD(DANCE_1),    KC_LABK,        KC_RABK,        TD(DANCE_2),    KC_TRANSPARENT,                                 KC_LPRN,        KC_RPRN,        KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_EXLM,        KC_CIRC,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_QUOTE,       KC_DQUO,        KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_DLR,         KC_PERC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_SCOLON),KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_KP_COMMA,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_MINUS), KC_MINUS,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,240,255}, {0,240,255}, {0,240,255}, {138,255,206}, {91,250,159}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {138,255,206}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {138,255,206}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {91,250,159}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {138,255,206}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {40,240,255}, {0,240,255}, {221,240,255}, {221,240,255}, {0,240,255}, {91,250,159}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {138,255,206}, {166,240,255}, {0,240,255}, {221,240,255}, {0,240,255}, {0,240,255}, {166,240,255}, {40,240,255}, {221,240,255}, {221,240,255}, {0,240,255}, {166,240,255}, {40,240,255}, {221,240,255}, {221,240,255}, {0,240,255}, {166,240,255}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {40,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {221,240,255}, {221,240,255}, {221,240,255}, {221,240,255} },

    [1] = { {91,250,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {103,218,204}, {103,218,204}, {0,0,0}, {138,255,206}, {0,0,0}, {103,218,204}, {103,218,204}, {103,218,204}, {138,255,206}, {0,0,0}, {103,218,204}, {103,218,204}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,250,159}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,255}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,255}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,206}, {138,255,206}, {0,0,0}, {0,0,0}, {91,250,159}, {0,0,0} },

    [2] = { {91,250,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,240,255}, {0,240,255}, {0,0,0}, {0,0,0}, {22,240,255}, {22,240,255}, {22,240,255}, {22,240,255}, {0,0,0}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {22,240,255}, {22,240,255}, {22,240,255}, {22,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,250,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {164,255,255}, {164,255,255}, {164,255,255}, {164,255,255}, {164,255,255}, {164,255,255}, {67,255,255}, {67,255,255}, {67,255,255}, {164,255,255}, {164,255,255}, {67,255,255}, {67,255,255}, {67,255,255}, {67,255,255}, {164,255,255}, {67,255,255}, {67,255,255}, {67,255,255}, {67,255,255}, {0,240,255}, {0,240,255}, {0,240,255}, {164,255,255}, {0,240,255}, {0,240,255}, {0,240,255}, {0,0,0}, {0,0,0}, {91,250,159}, {0,0,0} },

    [3] = { {0,240,255}, {0,240,255}, {0,240,255}, {138,255,206}, {91,250,159}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {91,250,159}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {40,240,255}, {0,240,255}, {0,240,255}, {80,218,204}, {0,240,255}, {91,250,159}, {0,240,255}, {0,240,255}, {0,240,255}, {0,240,255}, {138,255,206}, {138,255,206}, {0,240,255}, {80,218,204}, {80,218,204}, {0,240,255}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {0,240,255}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {0,240,255}, {138,255,206}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {80,218,204}, {40,240,255}, {80,218,204}, {80,218,204}, {80,218,204}, {0,240,255}, {0,240,255}, {0,240,255}, {80,218,204}, {0,240,255}, {91,250,159}, {0,240,255} },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool is_caps_lock_on(void) {
    led_t led_state = host_keyboard_led_state();
    return led_state.caps_lock;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_4) ));

    }
    break;
    case KC_CAPSLOCK:
      if (record->event.pressed) {
        if (is_caps_lock_on()) {
          set_layer_color(3);
        } else {
          set_layer_color(0);
        }
      }
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: layer_move(1); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_RBRACKET));
        tap_code16(LALT(KC_RBRACKET));
        tap_code16(LALT(KC_RBRACKET));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_RBRACKET));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(KC_RBRACKET)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_LBRACKET)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_RBRACKET)); register_code16(LALT(KC_RBRACKET)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_RBRACKET)); register_code16(LALT(KC_RBRACKET));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_RBRACKET)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_LBRACKET)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_RBRACKET)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_RBRACKET)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_RBRACKET)));
        tap_code16(LALT(LSFT(KC_RBRACKET)));
        tap_code16(LALT(LSFT(KC_RBRACKET)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_RBRACKET)));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_RBRACKET))); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_LBRACKET))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_RBRACKET))); register_code16(LALT(LSFT(KC_RBRACKET)));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_RBRACKET))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_LBRACKET))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_RBRACKET))); break;
    }
    dance_state[2].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

