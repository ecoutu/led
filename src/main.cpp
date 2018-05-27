//
// Created by ecoutu on 26/05/18.
//

#include <Arduino.h>
#include <FastLED.h>
#include <leds1.h>

FASTLED_USING_NAMESPACE

void setup() {
  delay(3000); // 3 second delay for recovery

  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(get_leds(), NUM_LEDS).setCorrection(TypicalLEDStrip);
  //FastLED.addLeds<LED_TYPE,DATA_PIN,CLK_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  leds1();
}

