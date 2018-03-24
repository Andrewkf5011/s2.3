#include <mbed.h>
#include "components.h"

AssignmentBoard board;

LED green(board.SHIELD_RED_LED);

Ticker pit;

unsigned int period = 100;

unsigned int duration = 10;

void centisecond(void)
{
   static unsigned int cs=0;
   cs = (cs+1) % period;

   if(cs<duration)
   {
       green.on();
   }
   else
   {
     green.off();
   }
}

int main(void)
{
  //Call the function centisecond once every 10000
  //microseconds. (every 0.01 seconds (1 centisecond)).
  pit.attach_us(centisecond, 10000);

  while(1)
  {
    //ground.
  }

}
