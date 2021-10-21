/*
 * DIO.h
 *
 * Created: 10/21/2021 1:37:29 PM
 *  Author: OMAR
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_HW.h"
#include "Bit_Math.h"

typedef enum registers{
	PORTA,
	PORTB,
	PORTC,
	PORTD
}register_t;

typedef enum direction{
	input,
	output
}direction_t;

typedef enum status{
	high,
	low
}status_t;

void DIO_setPinDir(register_t port, uint8_t pinNum, direction_t dir);
void setPortDir(register_t port, direction_t dir);
void DIO_write(register_t port, uint8_t pinNum, status_t stat);
uint8_t DIO_read(register_t port, uint8_t pinNum);







#endif /* DIO_H_ */