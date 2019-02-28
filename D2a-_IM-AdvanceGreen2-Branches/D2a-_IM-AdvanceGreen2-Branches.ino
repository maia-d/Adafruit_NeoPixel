#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

int rando;
int firstNumber[] = {51, 0, 21, 17, 121};
int secondNumber[] = {102, 204, 176, 252, 206};
int thirdNumber[] = {0, 0, 30, 21, 22};
// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(550, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code

  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  colorWipe(); // Green
}
boolean branch(int n) {
  if (n ==  30 || 31 || 32 || 33 || 34 || 35 || 36 || 37 || 38 || 39 || 40 || 41 || 42 || 43 || 44 || 45 || 46 || 47 || 48 || 49 || 50 || 51 || 52 || 53 || 54 || 55 || 56 || 57 || 58 || 59 || 60 || 61 || 62 || 95 || 96 || 97 || 98 || 99 || 100 || 101 || 102 || 103 || 104 || 105 || 106 || 107 || 108 || 109 || 110 || 111 || 112 || 113 || 114 || 115 || 116 || 117 || 118 || 119 || 120 || 121 || 122 || 123 || 124 || 125 || 126 || 127 || 128 || 129 || 130 || 131 || 132 || 133 || 304 || 305 || 306 || 307 || 308 || 309 || 310 || 311 || 312 || 313 || 314 || 315 || 316 || 317 || 318 || 319 || 320 || 321 || 322 || 323 || 324 || 325 || 326 || 327 || 328 || 329 || 330 || 331 || 332 || 333 || 334 || 335 || 336 || 337 || 338 || 339 || 340 || 341 || 342 || 343 || 344 || 345 || 346 || 347 || 348 || 349 || 350 || 351 || 352 || 353 || 354 || 355 || 356 || 357 || 358 || 359 || 360 || 361 || 362 || 363 || 364 || 365 || 366 || 389 || 390 || 391 || 392 || 393 || 434 || 435 || 436 || 437 || 438 || 439 || 440 || 441 || 442 || 443 || 444 || 445 || 446 || 447 || 448 || 449 || 450 || 451 || 452 || 453 || 454 || 455 || 456) {
    return true;
  }
  return false;
}

void colorWipe() {
  for(int i=0; i<strip.numPixels(); i++) {
    rando = random(0, 4);
    if (branch(i)){
      strip.setPixelColor(i, strip.Color(150, 75, 0));//brown
    } else {
      strip.setPixelColor(i, strip.Color(firstNumber[rando], secondNumber[rando], thirdNumber[rando]));
    }
    strip.show();
  }
  
}

