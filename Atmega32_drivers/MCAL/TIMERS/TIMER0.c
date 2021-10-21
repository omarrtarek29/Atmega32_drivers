/*
 * TIMER0.c
 *
 * Created: 10/21/2021 4:48:05 PM
 *  Author: OMAR
 */ 


#include "TIMER0.h"

void TIMER0_init()
{
	
	#if(TIMER0_SELECTOR == TIMER0_NORMAL)
	// Clearing timer
	TCNT0 = 0x00;
	CLEAR_BIT(TCCR0, FOC0);
	
	// Enable Timer0 interrupt
	SET_BIT(TIMSK, TOIE0);
	
	#endif
}

void TIMER0_start()
{
	
	// Enabling clk/1024 prescaler
	SET_BIT(TCCR0, CS00);
	SET_BIT(TCCR0, CS02);
}

void TIMER0_stop()
{
	
	// Stoping timer0 by clearing clock source bits
	// CS_Bits == 000 ----> No clock ----> Timer not working
	CLEAR_BIT(TCCR0, CS00);
	CLEAR_BIT(TCCR0, CS01);
	CLEAR_BIT(TCCR0, CS02);
}

uint8_t TIMER0_read()
{
	// Reading the value of timer0
	return TCNT0;
}

uint8_t TIMER0_readOVF()
{
	// Reading timer0 overflow bit (TOV0)
	return GET_BIT(TIFR, TOV0);
}

void TIMER0_clearOVF()
{
	// Clearing timer0 overflow bit (TOV0)
	SET_BIT(TIFR, TOV0);
}
