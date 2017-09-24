#include <Adafruit_NeoPixel.h>

//Set LEDs
// strip = Adafruit_NeoPixel(param1, param2, param3);
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
// Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

/*
Adafruit_NeoPixel led_A = Adafruit_NeoPixel(3, 1); 
Adafruit_NeoPixel led_B = Adafruit_NeoPixel(3, 2);
Adafruit_NeoPixel led_C = Adafruit_NeoPixel(3, 3);
Adafruit_NeoPixel led_D = Adafruit_NeoPixel(3, 4);
Adafruit_NeoPixel led_E = Adafruit_NeoPixel(3, 5);
Adafruit_NeoPixel led_F = Adafruit_NeoPixel(3, 6);
Adafruit_NeoPixel led_G = Adafruit_NeoPixel(3, 7);
*/

//LED
#define NUM_OF_PIXELS_IN_STRIP 10
#define LED_PIN_NUM 2    


Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_OF_PIXELS_IN_STRIP, LED_PIN_NUM);


void setup() {
// .begin() - prepare the data pin for NeoPixel output
// .show() - initialise all pixels to 'off'

  strip.begin(); //initiliase pin
  strip.show(); //all pixels 'off' 
 
/*
  led_A.begin();
  led_B.begin();
  led_C.begin();
  led_D.begin();
  led_E.begin();
  led_F.begin();
  led_G.begin();
  led_A.show();
  led_B.show();
  led_C.show();
  led_D.show();
  led_E.show();
  led_F.show();
  led_G.show();
 */
}

void loop() {

//Two ways to set color:
// 1) ledA.setPixelColor(n, red, green, blue);          For RGB type strips
// 2) ledA.setPixelColor(n, color); 
// Where 
// n = pixel number along the strip (numbered 0-9 for 10 pixels for ex.)
// color = 32 bit value that combines RGB values to one number
// r,g,b: 0 to 255

//Can also save colors like: 
// uint32_t magenta = strip.Color(255, 0, 255);
// and then just pass in 'magenta' to the 'color' variable.

// Note: setPixelColor() does not have an immediate effect on the LEDs. 
//       To “push” the color data to the strip, call .show()

  //Set 10 pixels to different colours
  strip.setPixelColor(0, 255, 0, 255);
  strip.setPixelColor(1, 255, 0, 255);
  strip.setPixelColor(2, 255, 0, 255);
  strip.setPixelColor(3, 255, 0, 255);
  strip.setPixelColor(4, 255, 0, 255);
  strip.setPixelColor(5, 255, 0, 255);
  strip.setPixelColor(6, 255, 0, 255);
  strip.setPixelColor(7, 255, 0, 255);
  strip.setPixelColor(8, 255, 0, 255);
  strip.setPixelColor(9, 255, 0, 255);
  //actually send the above values to the pixels
  strip.show();

  /*
  //Turn on LEDs
  //led_A
  led_A.setPixelColor(0, 255, 0, 0);
  led_A.setPixelColor(1, 255, 0, 0);
  led_A.setPixelColor(2, 255, 0, 0);
  led_A.show();

  //led_B
  led_B.setPixelColor(0, 0, 255, 0);
  led_B.setPixelColor(1, 0, 255, 0);
  led_B.setPixelColor(2, 0, 255, 0);
  led_B.show();

  //led_C
  led_C.setPixelColor(0, 0, 0, 255);
  led_C.setPixelColor(1, 0, 0, 255);
  led_C.setPixelColor(2, 0, 0, 255);
  led_C.show();

  //led_D
  led_D.setPixelColor(0, 255, 255, 0);
  led_D.setPixelColor(1, 255, 255, 0);
  led_D.setPixelColor(2, 255, 255, 0);
  led_D.show();

  //led_E
  led_E.setPixelColor(0, 255, 0, 255);
  led_E.setPixelColor(1, 255, 0, 255);
  led_E.setPixelColor(2, 255, 0, 255);
  led_E.show();

  //led_F
  led_F.setPixelColor(0, 0, 255, 255);
  led_F.setPixelColor(1, 0, 255, 255);
  led_F.setPixelColor(2, 0, 255, 255);
  led_F.show();

  //led_G
  led_G.setPixelColor(0, 255, 255, 255);
  led_G.setPixelColor(1, 255, 255, 255);
  led_G.setPixelColor(2, 255, 255, 255);
  led_G.show();
  */
  
}



