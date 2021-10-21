/*
 * App.c
 *
 * Created: 10/21/2021 1:47:12 PM
 *  Author: OMAR
 */ 


#include "App.h"

void App_init()
{	
	LED_init(PORTC, 2);
	LED_init(PORTA, 3);
}

void App()
{
	LED_on(PORTC, 2);
	delay_ms(1000);
	LED_off(PORTC, 2);
	delay_ms(1000);
	LED_on(PORTA, 3);
}