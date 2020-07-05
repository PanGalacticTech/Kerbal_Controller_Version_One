





int pxWidth = 120;
int pxHeight = 30;

// 'Pan Galactic Smol Logo Bitmap Solid2', 120x30px
const unsigned char panLogo [] PROGMEM = {
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xfc, 0xf1, 0xc7, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff,
  0xf9, 0xf7, 0x80, 0x07, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xf9,
  0xff, 0x80, 0x1f, 0xc0, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x0f, 0x0f, 0xfd, 0xff,
  0x80, 0x3f, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x0f, 0xfd, 0xff, 0xdf, 0x81,
  0xfc, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xfe, 0x7f, 0xf0, 0x07, 0x03, 0x8f, 0xcf, 0x87, 0xe0,
  0x00, 0x00, 0x00, 0x3e, 0x1f, 0xff, 0xfe, 0xff, 0xe0, 0x07, 0x03, 0x8f, 0x87, 0xdf, 0xc0, 0x00,
  0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0xf8, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
  0x0f, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f,
  0xff, 0xff, 0x00, 0xf8, 0xf0, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0xff, 0xf3,
  0xff, 0x00, 0x7c, 0xf8, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf8, 0xfe, 0x00, 0xff,
  0x80, 0x7c, 0xfc, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x1f, 0x00, 0x07, 0xbc, 0xf8, 0x00, 0x3f, 0xc0,
  0x7c, 0x7f, 0xff, 0x07, 0xff, 0xf0, 0x78, 0x1f, 0x00, 0x07, 0x9e, 0xf8, 0x00, 0x1f, 0xf8, 0x3e,
  0x3f, 0xff, 0x00, 0x0f, 0xff, 0xfe, 0x1f, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xef,
  0xfe, 0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x0f, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xe1, 0x00,
  0x07, 0xff, 0xe1, 0xcf, 0xcf, 0x80, 0x1f, 0xff, 0xbf, 0xff, 0x0f, 0xc3, 0xff, 0xfc, 0x00, 0x0f,
  0xff, 0xe1, 0xff, 0xef, 0x80, 0x1f, 0xcf, 0xdf, 0xff, 0x8f, 0x80, 0xcf, 0xff, 0xc0, 0x0f, 0xe0,
  0xf3, 0xff, 0xff, 0x80, 0x1f, 0x87, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x0f, 0x80, 0xf3,
  0xff, 0xff, 0xc0, 0x1f, 0x03, 0xf7, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x0f, 0x80, 0xff, 0xf3,
  0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0x80, 0xff, 0xc1, 0xff,
  0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xe0, 0xff, 0xc0, 0x7f, 0xff,
  0x00, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 0xc0, 0x39, 0xf0, 0x00,
  0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0xfc, 0x00, 0x00,
  0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x03,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x1f, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00
};








void OLEDsetupSimple(){

  //  Serial.begin(115200);  //
  //Serial.begin(9600);

  // Dont know what this does
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }


  //??????????????????????????????????????????????????? Without code above no opening splash

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.


  //display.clearDisplay();  // Clear Display ready for welcome Splash


  //Pan Galactic Logo Intro:

  // welcomeScreen();  //---------------------------------Logo Splash Intro--------------------------------------
  // Clear the buffer.
  display.clearDisplay();
  
//display.setFont(&FreeMonoBold9pt7b);

  // Draw bitmap on the screen
  // 'Pan Galactic Smol Logo Bitmap', 127x45px // panLogo
  display.drawBitmap(4, 1, panLogo, pxWidth, pxHeight, 1);  //(x , y bitMap, width, height, color)
  display.display();
 // delay(2000);
  delay(500); 
  delay(500);
 display.invertDisplay(true);
  delay(500);
//  display.invertDisplay(false);
//  delay(500);
//  display.invertDisplay(true);
 // delay(1000);
  display.invertDisplay(false);



  // Set Analogue outputs

  //pinMode(ledR, OUTPUT);
  // pinMode(ledG, OUTPUT);
  //  pinMode(ledB, OUTPUT);


  /*
    // Added from user comments:
    pinMode(encoder0PinA, INPUT);
    digitalWrite(encoder0PinA, HIGH); // turn on pull-up resistor
    pinMode(encoder0PinB, INPUT);
    digitalWrite(encoder0PinB, HIGH); // turn on pull-up resistor
  */


  // pinMode(encoderButton, INPUT);
  // digitalWrite(encoderButton, HIGH); // turn on pull-up resistor


  //------------------------Alternative to lines above from stackexchange---------------------------------------
  //  pinMode (encoderPinA, INPUT_PULLUP);     // enable pull-ups
  // pinMode (encoderPinB, INPUT_PULLUP);
  // attachInterrupt (digitalPinToInterrupt (encoderPinA), isr, CHANGE);   // interrupt 0 is pin 2


 pinMode(encoderButton, INPUT);
  digitalWrite(encoderButton, HIGH); // turn on pull-up resistor


  //------------------------Alternative to lines above from stackexchange---------------------------------------
 // pinMode (encoderPinA, INPUT_PULLUP);     // enable pull-ups
 // pinMode (encoderPinB, INPUT_PULLUP);
 pinMode (encoderPinA, INPUT);
  pinMode (encoderPinB, INPUT);
  attachInterrupt (digitalPinToInterrupt (encoderPinA), isr, CHANGE);   // interrupt 0 is pin 2




  // Clear the buffer
  display.clearDisplay();   // Clear Buffer Ready for Static Menu


}
