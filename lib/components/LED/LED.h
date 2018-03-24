#include<mbed.h>

#ifndef LED_H
#define LED_H

//LEDs
class LED
{
  private:
    DigitalOut pin;
    PinName pinName;

  public:
    LED(PinName pinName);
    PinName getPinName();
    void on();
    void off();
};

#endif // LED_H
