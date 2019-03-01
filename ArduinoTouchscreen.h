/* 
 * File:   ArduinoTouchscreen.h
 * Author: Becca Kheiry
 *
 * Created on March 1, 2019, 12:22 AM
 */

#ifndef ARDUINOTOUCHSCREEN_H
#define	ARDUINOTOUCHSCREEN_H
#define TFT_CS 10
#define TFT_DC 9
#include <SPI.h>
#include <Adafruit_ILI9341.h>

extern Adafruit_ILI9341 tft;

class ArduinoTouchscreen {
public:
	ArduinoTouchscreen();
        void makeButton(int x, int y, int txtSize, char button[]);
	ArduinoTouchscreen(const ArduinoTouchscreen& orig);
	virtual ~ArduinoTouchscreen();
private:

};

#endif	/* ARDUINOTOUCHSCREEN_H */
