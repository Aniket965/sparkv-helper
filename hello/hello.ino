#include <avr/io.h> 
#include <avr/interrupt.h>
#include <util/delay.h>
#include "buzzer.h"
int main(void) {
    cli();
    buzzerPortInit();
    sei();
  
    _delay_ms(1000);
    buzzerOn();
    _delay_ms(1000);
    buzzerOff();
    
}
