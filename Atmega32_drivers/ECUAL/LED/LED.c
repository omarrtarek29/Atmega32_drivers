/*
 * LED.c
 *
 * Created: 10/21/2021 1:44:11 PM
 *  Author: OMAR
 */ 


#include "LED.h"

void LED_init(register_t port, uint8_t pinNum){
	DIO_setPinDir(port, pinNum, output);
}

void LED_on(register_t port, uint8_t pinNum){
	DIO_write(port, pinNum, high);
}

void LED_off(register_t port, uint8_t pinNum){
	DIO_write(port, pinNum, low);
}

void LED_toggle(register_t port, uint8_t pinNum){
	if(DIO_read(port, pinNum)){		//  if led status was high switch it off
		LED_off(port, pinNum);
	}
	else{							// if led status was low then switch it on
		LED_on(port, pinNum);
	}
}