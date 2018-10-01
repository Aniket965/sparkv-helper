#include <avr/io.h>

void buzzerPinConfig(void) {
    DDRC = DDRC | 0x08;
    PORTC = PORTC & 0xF7;
}

void buzzerPortInit(void) {
    buzzerPinConfig();
}


void buzzerOn(void) {
    unsigned char port_restore = 0;
    port_restore = PINC;
    port_restore = port_restore | 0x08;
    PORTC = port_restore;
}

void buzzerOff(void) {
    unsigned char port_restore = 0;
    port_restore = PINC;
    port_restore = port_restore & 0xF7; 
    PORTC = port_restore;
}

