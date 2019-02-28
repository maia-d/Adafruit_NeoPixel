#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

int rando;
int firstNumber[] = {0, 0, 100, 180, 102};
int secondNumber[] = {0, 0, 100, 180, 51};
int thirdNumber[] = {0, 0, 100, 180, 0};
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

void colorWipe() {
    for(int i=0; i<strip.numPixels(); i++) {
    rando = random(0, 4);
    if (i == 30 || i == 31 || i == 32 || i == 33 || i == 34 || i == 35 || i == 36 || i == 37 || i == 38 || i == 39 || i == 40 || i == 41 || i == 42 || i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48 || i == 49 || i == 50 || i == 51 || i == 52 || i == 53 || i == 54 || i == 55 || i == 56 || i == 57 || i == 58 || i == 59 || i == 60 || i == 61 || i == 62 || i == 106 || i == 107 || i == 108 || i == 109 || i == 110 || i == 111 || i == 112 || i == 113 || i == 114 || i == 115 || i == 116 || i == 117 || i == 118 || i == 119 || i == 120 || i == 121 || i == 122 || i == 123 || i == 124 || i == 125 || i == 126 || i == 127 || i == 128 || i == 129 || i == 130 || i == 131 || i == 132 || i == 133 || i == 134 || i == 135 || i == 136 || i == 137 || i == 138 || i == 139 || i == 140 || i == 141 || i == 142 || i == 143 || i == 144 || i == 312 || i == 313 || i == 314 || i == 315 || i == 316 || i == 317 || i == 318 || i == 319 || i == 320 || i == 321 || i == 322 || i == 323 || i == 324 || i == 325 || i == 326 || i == 327 || i == 328 || i == 329 || i == 330 || i == 331 || i == 332 || i == 333 || i == 334 || i == 335 || i == 336 || i == 337 || i == 338 || i == 339 || i == 340 || i == 341 || i == 342 || i == 343 || i == 344 || i == 345 || i == 346 || i == 347 || i == 348 || i == 349 || i == 350 || i == 351 || i == 352 || i == 353 || i == 354 || i == 355 || i == 356 || i == 357 || i == 358 || i == 359 || i == 360 || i == 361 || i == 362 || i == 363 || i == 364 || i == 365 || i == 366 || i == 389 || i == 390 || i == 391 || i == 392 || i == 393 || i == 441 || i == 442 || i == 443 || i == 444 || i == 445 || i == 446 || i == 447 || i == 448 || i == 449 || i == 450 || i == 451 || i == 452 || i == 453 || i == 454 || i == 455 || i == 456 || i == 457 || i == 458 || i == 459 || i == 460 || i == 461 || i == 462 || i == 463){
      strip.setPixelColor(i, strip.Color(150, 75, 0));//browi
    } else {
      strip.setPixelColor(i, strip.Color(firstNumber[rando], secondNumber[rando], thirdNumber[rando]));
    }
    strip.show();
  }
}

