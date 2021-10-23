/*
 * App.c
 *
 * Created: 10/21/2021 1:47:12 PM
 *  Author: OMAR
 */ 


#include "App.h"

uint8_t num = 0;

void App_init()
{	
	Seven_SEG_init(PORTC, 0, 1, 2, 3);
	BUTTON_init(PORTD, 0);
	BUTTON_init(PORTD, 1);
	Seven_SEG_write(PORTC, 0);
}

void App()
{
	Seven_SEG_write(PORTC, 0);
	delay_ms(1000);
	for (int i = 1; i < 10; i++)
	{
		Seven_SEG_write(PORTC, i);
		delay_ms(1000);
		DIO_clearPort(PORTC);
}
	
}