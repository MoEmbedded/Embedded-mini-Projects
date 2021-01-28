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
    
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 1;
    
    PORTBbits.RB0 = 0;
    
    while(1)
    {
        while(    PORTBbits.RB1 )
        {
            PORTBbits.RB0 = 1;
            __delay_ms(250);
            PORTBbits.RB0 = 0;
            __delay_ms(250);

            
            
        }
                
    }
    
    
    return;
}
