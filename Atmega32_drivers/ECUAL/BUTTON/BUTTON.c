/*
 * BUTTON.c
 *
 * Created: 10/21/2021 1:44:35 PM
 *  Author: OMAR
 */ 


#include "BUTTON.h"

void BUTTON_init(register_t port, uint8_t pinNum){
	DIO_setPinDir(port, pinNum, input);
}

uint8_t BUTTON_read(register_t port, uint8_t pinNum){
	return DIO_read(port, pinNum);
}