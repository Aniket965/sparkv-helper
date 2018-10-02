#include <avr/io.h> 
#include <avr/interrupt.h>
#include <util/delay.h>
#include "Sparkv.h"


int main(void) {
    cli();
    Sparkvbot bot = Sparkvbot();
    bot.buzzerPinInit();
    sei();
 

    _delay_ms(1000);
    bot.buzzerOn();
    _delay_ms(1000);
    bot.buzzerOff();
       
}
