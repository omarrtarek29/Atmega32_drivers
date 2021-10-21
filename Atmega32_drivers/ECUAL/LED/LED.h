/*
 * LED.h
 *
 * Created: 10/21/2021 1:44:47 PM
 *  Author: OMAR
 */ 


#ifndef LED_H_
#define LED_H_


#include "DIO.h"

void LED_init(register_t port, uint8_t pinNum);
void LED_on(register_t port, uint8_t pinNum);
void LED_off(register_t port, uint8_t pinNum);
void LED_toggle(register_t port, uint8_t pinNum);


#endif /* LED_H_ */