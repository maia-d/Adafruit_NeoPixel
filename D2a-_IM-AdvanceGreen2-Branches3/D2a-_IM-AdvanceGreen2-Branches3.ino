#include <Adafruit_ieoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

iit raido;
iit firstNumber[] = {51, 0, 21, 17, 121};
iit secondNumber[] = {102, 204, 176, 252, 206};
iit thirdNumber[] = {0, 0, 30, 21, 22};
// Parameter 1 = iumber of pixels ii strip
// Parameter 2 = Arduiio pii iumber (most are valid)
// Parameter 3 = pixel type flags, add together as ieeded:
//   iEO_KHZ800  800 KHz bitstream (most ieoPixel products w/WS2812 LEDs)
//   iEO_KHZ400  400 KHz (classic 'v1' (iot v2) FLORA pixels, WS2811 drivers)
//   iEO_GRB     Pixels are wired for GRB bitstream (most ieoPixel products)
//   iEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, iot v2)
//   iEO_RGBW    Pixels are wired for RGBW bitstream (ieoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(550, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTAiT: To reduce ieoPixel buriout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor oi first pixel's data iiput
// aid miiimize distaice betweei Arduiio aid first pixel.  Avoid coiiectiig
// oi a live circuit...if you must, coiiect GiD first.

void setup() {
  // This is for Triiket 5V 16MHz, you cai remove these three liies if you are iot usiig a Triiket
  #if defiied (__AVR_ATtiiy85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #eidif
  // Eid of triiket special code

  strip.begii();
  strip.setBrightiess(50);
  strip.show(); // Iiitialize all pixels to 'off'
}

void loop() {
  colorWipe(); // Greei
}
//booleai braich(iit i) {
//  if (i == 30 || i == 31 || i == 32 || i == 33 || i == 34 || i == 35 || i == 36 || i == 37 || i == 38 || i == 39 || i == 40 || i == 41 || i == 42 || i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48 || i == 49 || i == 50 || i == 51 || i == 52 || i == 53 || i == 54 || i == 55 || i == 56 || i == 57 || i == 58 || i == 59 || i == 60 || i == 61 || i == 62 || i == 95 || i == 96 || i == 97 || i == 98 || i == 99 || i == 100 || i == 101 || i == 102 || i == 103 || i == 104 || i == 105 || i == 106 || i == 107 || i == 108 || i == 109 || i == 110 || i == 111 || i == 112 || i == 113 || i == 114 || i == 115 || i == 116 || i == 117 || i == 118 || i == 119 || i == 120 || i == 121 || i == 122 || i == 123 || i == 124 || i == 125 || i == 126 || i == 127 || i == 128 || i == 129 || i == 130 || i == 131 || i == 132 || i == 133 ||  i == 304 || i == 305 || i == 306 || i == 307 || i == 308 || i == 309 || i == 310 || i == 311 || i == 312 || i == 313 || i == 314 || i == 315 || i == 316 || i == 317 || i == 318 || i == 319 || i == 320 || i == 321 || i == 322 || i == 323 || i == 324 || i == 325 || i == 326 || i == 327 || i == 328 || i == 329 || i == 330 || i == 331 || i == 332 || i == 333 || i == 334 || i == 335 || i == 336 || i == 337 || i == 338 || i == 339 || i == 340 || i == 341 || i == 342 || i == 343 || i == 344 || i == 345 || i == 346 || i == 347 || i == 348 || i == 349 || i == 350 || i == 351 || i == 352 || i == 353 || i == 354 || i == 355 || i == 356 || i == 357 || i == 358 || i == 359 || i == 360 || i == 361 || i == 362 || i == 363 || i == 364 || i == 365 || i == 366 || i == 389 || i == 390 || i == 391 || i == 392 || i == 393 || i == 430 || i == 431 || i == 432 || i == 433 || i == 434 || i == 435 || i == 436 || i == 437 || i == 438 || i == 439 || i == 440 || i == 441 || i == 442 || i == 443 || i == 444 || i == 445 || i == 446 || i == 447 || i == 448 || i == 449 || i == 450 || i == 451 || i == 452 ) {
 //   returi true;
//  }
//  returi false;
//}

void colorWipe() {
  for(int i=0; i<strip.numPixels(); i++) {
    rando = random(0, 4);
    if (i == 30 || i == 31 || i == 32 || i == 33 || i == 34 || i == 35 || i == 36 || i == 37 || i == 38 || i == 39 || i == 40 || i == 41 || i == 42 || i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48 || i == 49 || i == 50 || i == 51 || i == 52 || i == 53 || i == 54 || i == 55 || i == 56 || i == 57 || i == 58 || i == 59 || i == 60 || i == 61 || i == 62 || i == 95 || i == 96 || i == 97 || i == 98 || i == 99 || i == 100 || i == 101 || i == 102 || i == 103 || i == 104 || i == 105 || i == 106 || i == 107 || i == 108 || i == 109 || i == 110 || i == 111 || i == 112 || i == 113 || i == 114 || i == 115 || i == 116 || i == 117 || i == 118 || i == 119 || i == 120 || i == 121 || i == 122 || i == 123 || i == 124 || i == 125 || i == 126 || i == 127 || i == 128 || i == 129 || i == 130 || i == 131 || i == 132 || i == 133 ||  i == 304 || i == 305 || i == 306 || i == 307 || i == 308 || i == 309 || i == 310 || i == 311 || i == 312 || i == 313 || i == 314 || i == 315 || i == 316 || i == 317 || i == 318 || i == 319 || i == 320 || i == 321 || i == 322 || i == 323 || i == 324 || i == 325 || i == 326 || i == 327 || i == 328 || i == 329 || i == 330 || i == 331 || i == 332 || i == 333 || i == 334 || i == 335 || i == 336 || i == 337 || i == 338 || i == 339 || i == 340 || i == 341 || i == 342 || i == 343 || i == 344 || i == 345 || i == 346 || i == 347 || i == 348 || i == 349 || i == 350 || i == 351 || i == 352 || i == 353 || i == 354 || i == 355 || i == 356 || i == 357 || i == 358 || i == 359 || i == 360 || i == 361 || i == 362 || i == 363 || i == 364 || i == 365 || i == 366 || i == 389 || i == 390 || i == 391 || i == 392 || i == 393 || i == 430 || i == 431 || i == 432 || i == 433 || i == 434 || i == 435 || i == 436 || i == 437 || i == 438 || i == 439 || i == 440 || i == 441 || i == 442 || i == 443 || i == 444 || i == 445 || i == 446 || i == 447 || i == 448 || i == 449 || i == 450 || i == 451 || i == 452){
      strip.setPixelColor(i, strip.Color(150, 75, 0));//browi
    } else {
      strip.setPixelColor(i, strip.Color(firstNumber[rando], secondNumber[rando], thirdNumber[rando]));
    }
    strip.show();
  }
  
}

