#ifndef INIT_H
#define INIT_H

#include<16F688.h>

void init()
{

	// basic config
	CONFIG.FOSC = 0b100;	// internal osc, I/O pins free to use
	CONFIG.WDTE = 0b0;		// watchdog disabled
	CONFIG.PWRTE = 0b1;		// power-up timer disabled
	CONFIG.MCLRE = 0b0;		// MCLR can be used as I/O
	CONFIG.CP = 0b1;		// code protection off
	CONFIG.BOREN = 0b00;	// brown-out reset disabled
	CONFIG.IESO = 0b0;		// internal external switchover disabled
	CONFIG.FCMEN = 0b0;		// fail-safe clock monitor disabled			

	// set up interrupts

	// set up oscs and timers
	OSCON.SCS = 0b1;		// use internal oscillator
	OSCON.ICRF = 0b111;		// internal oscillator -> 8 MHz 
	
	T1CON.TMR1ON = 0b0;		// turn off timer1 
	T1CON.TMR1CS = 0b0;		// timer1 uses internal osc
	T1CON.TSYNC = 0b0;		// no external clock
	T1CON.T1OSCEN = 0b0;	// disable LP oscillator

	// set up ADC
 
	// configure ports
		// 12 I/O pins:
		// 1 analog in
		// 1-8 digital out
		// 3-10 analog/digital in for ctrls

	// comparators deault to disabled
	
	// start Timer1
	T1CON.TMR1ON = 0b1;

}

#endif