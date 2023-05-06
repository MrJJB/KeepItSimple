#ifndef DISPLAYFUNCTIONS_H
#define DISPLAYFUNCTIONS_H
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#define SCREEN_WIDTH 128    // OLED display width, in pixels
#define SCREEN_HEIGHT 64    // OLED display height, in pixels
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

void displayInit();
void menuDisplay();
void displayRecording(int);

#endif