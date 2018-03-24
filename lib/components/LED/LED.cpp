#include "LED.h"
#include <mbed.h>

LED::LED(PinName pinName) : pin(pinName,1)
{
  LED::pinName = pinName;
}

PinName LED::getPinName()
{
  return pinName;
}

void LED::on()
{
  pin.write(0);
}

void LED::off()
{
  pin.write(1);
}
