//
// Created by ecoutu on 27/05/18.
//

#ifndef LED_LEDS1_H
#define LED_LEDS1_H
#include <Arduino.h>
#include <FastLED.h>

#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define LED_PIN 6
#define NUM_LEDS 15

#define BRIGHTNESS 96
#define FRAMES_PER_SECOND 120

CRGB *get_leds();
void leds1();
void nextPattern();
void rainbow();
void rainbowWithGlitter();
void addGlitter(fract8);
void confetti();
void sinelon();
void bpm();
void juggle();
#endif //LED_LEDS1_H
