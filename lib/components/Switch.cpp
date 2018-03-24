#include "Switch.h"
#include<mbed.h>
#include<stdbool.h>

Switch::Switch(PinName pinName, bool usesPullUpResistor) : pin(pinName)
{
  Switch::usesPullUpResistor = usesPullUpResistor;
  Switch::pinName = pinName;
}

PinName Switch::getPinName()
{
  return pinName;
}

bool Switch::isPressed()
{
  //Use a bitwise XOR to work out if the pin is being pressed.
  return ((pin.read()) ^ usesPullUpResistor);
}
