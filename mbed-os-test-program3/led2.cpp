#include "mbed.h"

void Led2(DigitalOut& ledpin)
{
    for(int i=0; i<4; ++i) { //blink for 4 times
       ledpin = !ledpin; // toggle led
       wait(0.2f);
   }
}