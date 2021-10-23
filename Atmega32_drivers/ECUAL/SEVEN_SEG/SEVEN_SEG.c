/*
 * _7_SEG.c
 *
 * Created: 10/23/2021 1:36:31 PM
 *  Author: OMAR
 */ 

#include "SEVEN_SEG.h"

// Initializing 7 seg pins as output
void Seven_SEG_init(register_t port, uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3)
{
	DIO_setPinDir(port, pin0, output);
	DIO_setPinDir(port, pin1, output);
	DIO_setPinDir(port, pin2, output);
	DIO_setPinDir(port, pin3, output);
}

// Giving 7 seg a decimal num 0-9 to write it on
void Seven_SEG_write(register_t port, uint8_t num)
{
	if(num >= 0 && num <= 9){
		DIO_writePort(port, num);
	}
	else{
		DIO_clearPort(port);
	}
}