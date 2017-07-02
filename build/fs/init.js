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
   Handle Display
   ############### */

// Initialize the display.
let d = Adafruit_SSD1306.create_i2c(4 /* RST GPIO */, Adafruit_SSD1306.RES_128_64);
d.begin(Adafruit_SSD1306.SWITCHCAPVCC, 0x3C, true /* reset */);
// d.display(); Ohne diese Zeile wird die Splashscreen nicht angezeigt.

let updateDisplay = function() {

  let max = 1;
  for(let i=0;i<hwConfig.nOfButtons;i++) {
    if (max < s.button[i].count) {
      max = s.button[i].count;
    }
  }
  
  d.clearDisplay();
  d.setTextColor(Adafruit_SSD1306.INVERSE);
  d.setTextSize(2);
  
  let w = Math.floor((d.width() - hwConfig.nOfButtons)/hwConfig.nOfButtons);
  let h = 0;
  for(let i=0;i<hwConfig.nOfButtons;i++) {
    h = Math.max(1, Math.ceil(s.button[i].count / max * d.height()));
    print("Draw:", i*w, h, max);
    d.fillRoundRect(i * w, d.height() - h, w - 1, h, 3, Adafruit_SSD1306.WHITE);
    d.setCursor(i*w, d.height() - 10);
    d.write(JSON.stringify(s.button[i]));
  }
  
  d.display();
};

updateDisplay(); // necessary to show start values

/* ###############
   Handle AWS Shadows
   ############### */

AWS.Shadow.setStateHandler(function(data, event, reported, desired) {
  if (event === AWS.Shadow.CONNECTED) {
    AWS.Shadow.update(0, {reported: s});
    // print('Reported: ',JSON.stringify(reported));
    updateLedState();
  } else if (event === AWS.Shadow.UPDATE_DELTA) {
    for (let key in s) {
      if (desired[key] !== undefined) s[key] = desired[key];
    }
    print('Desired: ',JSON.stringify(desired));
    AWS.Shadow.update(0, {reported: s});
    updateLedState();
    updateDisplay();
  }
}, null);

/* ###############
   Handle Results form other devices
   ############### */

MQTT.sub('/happyornot/survey/' + s.title, function(conn, topic, msgTxt) {
  print('Topic:', topic, 'message:', JSON.parse(msgTxt));
  let msg = JSON.parse(msgTxt);
  if (msg.device !== id) {
    print("Remote Update from device ", msg.device);
    for(let i=0;i<hwConfig.nOfButtons;i++) {
      if (msg.name === s.button[i].name) {
        s.button[i].count = s.button[i].count + 1;
      }
    }
    updateDisplay();
    AWS.Shadow.update(0, {desired: s});
  }
}, null);


/* ###############
   Handle Button Press
   ############### */

let updateButtonState = function(i) {
  s.button[i].count = s.button[i].count + 1;
  AWS.Shadow.update(0, {desired: s});
  
  updateDisplay();

  let time = Timer.now();
  let message = JSON.stringify({
    survey: s.title, 
    device: id, 
    name: s.button[i].name,
    time: time, 
    id: id + '-' + JSON.stringify(time)
  });

  let ok = MQTT.pub('/happyornot/survey/' + s.title, message);
  print('MQTT pub ', ok ? "OK":"NOK", message);
};

GPIO.set_button_handler(hwConfig.buttonPin[0], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 500, function() {updateButtonState(0)} , null);
GPIO.set_button_handler(hwConfig.buttonPin[1], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 500, function() {updateButtonState(1)} , null);
GPIO.set_button_handler(hwConfig.buttonPin[2], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 500, function() {updateButtonState(2)} , null);
GPIO.set_button_handler(hwConfig.buttonPin[3], GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 500, function() {updateButtonState(3)} , null);
