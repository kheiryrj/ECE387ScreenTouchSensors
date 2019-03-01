/* 
 * File:   ArduinoTouchscreen.cpp
 * Author: Becca Kheiry
 * 
 * Created on March 1, 2019, 12:22 AM
 */

#include "ArduinoTouchscreen.h"
#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_STMPE610.h>

// The display also uses hardware SPI, plus #9 & #10
#define TF_CS 10
#define TF_DC 9
Adafruit_ILI9341 tf = Adafruit_ILI9341(TF_CS, TF_DC);

ArduinoTouchscreen::ArduinoTouchscreen() {
}

void ArduinoTouchscreen::makeButton(int x, int y, int txtSize, char button[]) {
  tf.setCursor(x+4,y+3);
  tf.setTextColor(ILI9341_WHITE);  
  tf.setTextSize(txtSize);
  tf.println(button);
  int len = 7 + 6*(strlen(button)*txtSize);
  int hei = 6 + txtSize*7;
  tf.drawRect(x, y, len, hei, ILI9341_WHITE);
}

ArduinoTouchscreen::ArduinoTouchscreen(const ArduinoTouchscreen& orig) {
}

ArduinoTouchscreen::~ArduinoTouchscreen() {
}
