/*	Author: kma023
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */




#include <avr/io.h>
#include "io.h"
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00; PORTA = 0xFF; 
    DDRB = 0xFF; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00; 
    DDRD = 0xFF; PORTD = 0x00; 
    LCD_init();
//    LCD_WriteData(0+'0');
   while(1){PORTC = 0xFF;/* LCD_DisplayString(1, "Hello World");*/}

    unsigned char r = 0;

    /*while (1) 
    {

	            if(PINA == 0x01) {
                    r = r + 1;
	                  LCD_WriteData(r + '0');
	            }
	            else if(PINA == 0x02) {
	                  r = r - 1;
	                  LCD_WriteData(r + '0');
	            }
	            else if(PINA == 0xFE || PINA == 0xFD){
	                  r = 0;
	                  LCD_WriteData(0 + '0');
	            }	
    }*/

    return 1;
}

