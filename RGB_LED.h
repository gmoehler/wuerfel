#ifndef RGB_LED_h
#define RGB_LED_h

#include "Arduino.h"

class RGB_LED {

  public:
    RGB_LED();
    RGB_LED(int redPin, int greenPin, int bluePin);

    void white(int brightness = 100);
    void black(int brightness = 100);
    void red(int brightness = 100);
    void blue(int brightness = 100);
    void green(int brightness = 100);
    void yellow(int brightness = 100);
    void lila(int brightness = 100);
    void cyan(int brightness = 100);

    // rgb-Wert auf RGB LED  ausgeben
    void rgb_ausgabe(int red, int green, int blue, int brightness = 100);

    // debug output to serial out
    void printToSerialRgb(int red, int green, int blue, int brightness);

    // do fine-grained debug output
    void doFineSerialOutput(bool doOutput);

  private:
    // output pins for rotary RGB
    int ledRedPin;
    int ledGreenPin;
    int ledBluePin;

    bool printFineSerialOut;
};



#endif
