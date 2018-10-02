#include <avr/io.h>
#include "Sparkv.h"


void Sparkvbot::buzzerPinInit()  {
    DDRC = DDRC | 0x08;
    PORTC = PORTC & 0xF7;
}
void Sparkvbot::buzzerOn()  {
  unsigned char port_restore = 0;
    port_restore = PINC;
    port_restore = port_restore | 0x08;
    PORTC = port_restore;
}
void Sparkvbot::buzzerOff()  {
    unsigned char port_restore = 0;
    port_restore = PINC;
    port_restore = port_restore & 0xF7; 
    PORTC = port_restore;
}