/*
 * File:   main.c
 * Author: SSJ Rose
 *
 * Created on January 28, 2021, 3:30 AM
 */


#include <xc.h>
#include "config.h"

#define _XTAL_FREQ 4000000 

void main(void) {
    
  unsigned char segments_code[10] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
  unsigned char counter=0;
  TRISB = 0x00; 
  PORTB = 0x00; 
    
    while(1)
    {
        PORTB = segments_code[counter];
        __delay_ms(700);
        counter++;
        if(counter==10)
        counter=0;
                
    }
    
    
    return;
}
