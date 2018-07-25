#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
LAYOUT(
  KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  LT(1, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, LT(1, KC_QUOT),
  KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MO(2),
  KC_LCTL,       MO(2),   KC_LALT, KC_LGUI, KC_ENT,      KC_SPC,       KC_SPC,  KC_RALT, KC_RSFT, KC_RCTL, TT(3)
),

  /* FN Layer 1
   * ,-------------------------------------------------------------------------.
   * |   ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |  _  |  +  |  { |  }  |   |   |
   * |-------------------------------------------------------------------------+
   * |       | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
   * `-------------------------------------------------------------------------'
   */

LAYOUT(
  KC_TILDE, KC_EXCLAIM, KC_AT,   KC_HASH, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND,  KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_DELETE,
  _______,   KC_BSLS,    _______, KC_MINS, KC_EQL,    _______,    KC_LEFT,      KC_DOWN, KC_UP, KC_RIGHT, KC_COLN, KC_DQUO,
  _______,  _______,    _______, KC_LBRC, KC_RBRC,   _______,    KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE,   KC_LABK,   KC_RABK,   KC_QUES,  _______,
  _______,  _______,    _______, KC_CAPS, _______,          _______,            _______, _______, _______, _______, _______
),

  /* FN Layer 2
   * ,-------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |  -  |  =  |  [  |  ]  |  \   |
   * |-------------------------------------------------------------------------+
   * |       | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |Capsl|      |          |       | Home| PgDn| PgUp| End |
   * `-------------------------------------------------------------------------'
   */

LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______, KC_PIPE, _______, KC_UNDERSCORE, KC_PLUS, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
  _______, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  _______,  _______, _______, _______,  _______,  _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

  /* FN Layer 3
   * ,-------------------------------------------------------------------------.
   * | Esc | Calc|Webhm| Mail| Comp|     |     |     |     |     |PrtSc|       |
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |       |LEDtg|LEDch|     |     |     |     |     |     |     |     |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
   * `-------------------------------------------------------------------------'
   */

LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
  _______, LED_TOG, LED_CHG, RGB_TOG,   RGB_MOD, RGB_VAD, RGB_VAI, _______, _______, RESET, _______, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),
};
