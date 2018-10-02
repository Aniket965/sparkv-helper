#include <avr/io.h>
#include "Sparkv.h"

#define FORWARD_DIRECTION 0x06
#define BACKWARD_DIRECTION 0x09
#define HARDBREAK_DIRECTION 0x00
#define SOFTBREAK_DIRECTION 0x0F


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

void Sparkvbot::motionPinInit() {
   DDRB = DDRB | 0x0F; 
   PORTB = PORTB & 0xF0;
   DDRD = DDRD | 0x30; 
   PORTD = PORTD | 0x30; 
}

void Sparkvbot::motionSet(unsigned char direction) {
    unsigned char PortBRestore = 0;
    direction &= 0x0F;         
    PortBRestore = PORTB;      
    PortBRestore &= 0xF0;      
    PortBRestore |= direction; 
    PORTB = PortBRestore;      
}

void Sparkvbot::motionForward(void) {
    motionSet(FORWARD_DIRECTION);
}
void Sparkvbot::motionBackward(void) {
    motionSet(BACKWARD_DIRECTION);
}
void Sparkvbot::motionHardBreak(void) {
    motionSet(HARDBREAK_DIRECTION);
}
void Sparkvbot::motionSoftBreak(void) {
    motionSet(SOFTBREAK_DIRECTION);
}