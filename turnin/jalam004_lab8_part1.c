/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
void ADC_init()
{
ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);


}
int main(void) {
    /* Insert DDR and PORT initializations */
DDRB = 0xFF; PORTB = 0x00;
DDRD = 0xFF; PORTD = 0x00;

ADC_init();    
while (1) {
unsigned short x = ADC;
unsigned short tmpB= 0x00;
unsigned short tmpD = 0x00;
tmpB = (char)(x);
unsigned char my_char = (char)(x >> 4);
tmpD = ((my_char & 0x30) >> 4);
PORTB = tmpB;
PORTD = tmpD;




//	PORTB = 0xFF;
//	PORTD = 0x03;
    }
    return 1;
}
