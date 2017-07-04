load('api_config.js');
load('api_aws.js');
load('api_gpio.js');
load('api_neopixel.js');
load('api_sys.js');
load('api_timer.js');
load('api_mqtt.js');
load('api_i2c.js');
load('api_arduino_ssd1306.js');
load('api_math.js');

let hwConfig = {
  hwRevision: 1,
  nOfButtons: 4,
  ledPin: 4,
  buttonPin: [16, 17, 18, 19]
};

let s = { 
  title: 'iotworkshop',
  brightness: 20,
  button: [ 
    { name: 'verysad',  r: 139, g:   0, b:   0, count: 0},
    { name: 'sad',      r: 205, g:  92, b:  92, count: 0},
    { name: 'good',     r: 202, g: 255, b: 112, count: 0},
    { name: 'verygood', r:   0, g: 100, b:   0, count: 0}
  ]
};

let id = Cfg.get('device.id');
let led = ffi('int get_led_gpio_pin()')();

/* ###############
   Handle LEDs
   ############### */

let updateLedState = function() {
  strip.clear();
  let b = s.brightness/255;
  for(let i=0;i<hwConfig.nOfButtons;i++) {
    strip.setPixel(i, 
      s.button[i].r * b,
      s.button[i].g * b,
      s.button[i].b * b
    );
  }
  strip.show();
};

let strip = NeoPixel.create(hwConfig.ledPin, hwConfig.nOfButtons, NeoPixel.GRB);
strip.clear();

updateLedState();

/* ###############
   Handle Button Press
   ############### */

for(let i=0;i<hwConfig.nOfButtons;i++) {
  GPIO.set_mode(hwConfig.buttonPin[i],GPIO.MODE_INPUT);
}

let updateButtonState = function(i) {
  s.button[i].count = s.button[i].count + 1;
};

GPIO.set_button_handler(hwConfig.buttonPin[0], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 1000, function() {updateButtonState(0);} , null);
GPIO.set_button_handler(hwConfig.buttonPin[1], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 1000, function() {updateButtonState(1);} , null);
GPIO.set_button_handler(hwConfig.buttonPin[2], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 1000, function() {updateButtonState(2);} , null);
GPIO.set_button_handler(hwConfig.buttonPin[3], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 1000, function() {updateButtonState(3);} , null);
