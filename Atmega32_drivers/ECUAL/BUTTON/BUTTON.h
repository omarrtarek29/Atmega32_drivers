/*
 * BUTTON.h
 *
 * Created: 10/21/2021 1:45:01 PM
 *  Author: OMAR
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "DIO.h"


void BUTTON_init(register_t port, uint8_t pinNum);
uint8_t BUTTON_read(register_t port, uint8_t pinNum);




#endif /* BUTTON_H_ */