/*
 * _7_SEG.h
 *
 * Created: 10/23/2021 1:36:46 PM
 *  Author: OMAR
 */ 


#ifndef SEVEN_SEG_H_
#define SEVEN_SEG_H_

#include "DIO.h"
#include "StdTypes.h"


// 7 seg prototype functions

void Seven_SEG_init(register_t port, uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3);
void Seven_SEG_write(register_t port, uint8_t num);

#endif /* SEVEN_SEG_H_ */