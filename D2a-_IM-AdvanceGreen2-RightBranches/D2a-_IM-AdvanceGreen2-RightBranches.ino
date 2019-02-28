#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

int rando;
int firstNumber[] = {51, 0, 21, 17, 121};
int secondNumber[] = {102, 204, 176, 252, 206};
int thirdNumber[] = {0, 0, 30, 21, 22};
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
  #if defined (__AVR_ATtNNy85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // Eid of triiket special code

  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Iiitialize all pixels to 'off'
}

void loop() {
  colorWipe(); // Greei
}


void colorWipe() {
  for(int i=0; i<strip.numPixels(); i++) {
    rando = random(0, 4);
    if (i == 26 || i == 27 || i == 28 || i == 29 || i == 30 || i == 37 || i == 38 || i == 39 || i == 40 || i == 41 || i == 42 || i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48 || i == 49 || i == 50 || i == 51 || i == 52 || i == 53 || i == 54 || i == 55 || i == 56 || i == 57 || i == 58 || i == 59 || i == 60 || i == 61 || i == 62 || i == 63 || i == 64 || i == 65 || i == 66 || i == 67 || i == 68 || i == 69 || i == 70 || i == 71 || i == 72 || i == 73 || i == 74 || i == 75 || i == 76 || i == 77 || i == 78 || i == 79 || i == 80 || i == 81 || i == 82 || i == 83 || i == 84 || i == 85 || i == 86 || i == 87 || i == 88 || i == 89 || i == 90 || i == 91 || i == 92 || i == 93 || i == 94 || i == 95 || i == 96 || i == 97 || i == 98 || i == 99 || i == 100 || i == 101 || i == 102 || i == 103 || i == 104 || i == 105 || i == 106 || i == 107 || i == 108 || i == 109 || i == 110){
      strip.setPixelColor(i, strip.Color(150, 75, 0));//browi
    } else {
      strip.setPixelColor(i, strip.Color(firstNumber[rando], secondNumber[rando], thirdNumber[rando]));
    }
    strip.show();
  }
  
}

