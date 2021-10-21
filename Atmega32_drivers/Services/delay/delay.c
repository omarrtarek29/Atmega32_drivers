/*
 * delay.c
 *
 * Created: 10/21/2021 4:53:51 PM
 *  Author: OMAR
 */ 

#include "delay.h"

// Global variable counting overflows
uint8_t overflowCounter;


// CPU frequency = 1 MHz
#define F_CPU		1000000ul


void delay_256()
{
	// To delay 256ms we need 250 ticks on timer0 with prescaler 1024
	// So we set the timer to value 5 at the beginning until it overflows
	
	TIMER0_init();
	TCNT0 = 0x05;
	TIMER0_start();
	
	for(;;){
		// Break the dummy loop when the timer overflows
		if(TIMER0_readOVF() == 1){
			TIMER0_stop();
			break;
		}
	}
}

void delay_ms(uint16_t timeDelay)
{
	// Resolution = prescaler / FCPU
	// Resolution value in seconds so, multiplying it to 1000 to convert it to milliseconds would make it easier
	//float32_t resolution = (1024 / F_CPU) * 1000;
	
	// Calculating how many ticks needed
	float32_t ticksNum = timeDelay / 1.024;
	
	// Calculating how many overflows needed
	overflowCounter = ticksNum / 256;
	
	// Calculating how many ticks remained after the last overflow
	uint16_t remainedTicks = ticksNum - (overflowCounter * 256);
	
	TIMER0_init();
	TIMER0_start();
	
	for (uint8_t iterator = 0; iterator < overflowCounter; iterator++)
	{
		// Stick on the loop until the overflow flag becomes 1 then clear it
		// Repeat it with the same count of overflow counter
		while(TIMER0_readOVF() == 0);
		TIMER0_clearOVF();
	}
	
	// Stay on the loop until it finishes the remained ticks
	while(1)
	{
		if(TIMER0_read() == remainedTicks){
			TIMER0_stop();
			break;
		}
	}
}