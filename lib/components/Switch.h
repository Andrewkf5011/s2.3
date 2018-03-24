#ifndef SWITCH_H
#define SWITCH_H

#include<mbed.h>
#include<stdbool.h>

class Switch
{
  private:
    DigitalIn pin;
    PinName pinName;
    bool usesPullUpResistor;

  public:
    Switch(PinName pinName, bool usesPullUpResistor);
    PinName getPinName();
    bool isPressed();

};

#endif //SWITCH_H
