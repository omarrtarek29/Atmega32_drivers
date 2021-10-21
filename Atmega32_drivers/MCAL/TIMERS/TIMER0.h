/*
 * TIMER0.h
 *
 * Created: 10/21/2021 4:47:07 PM
 *  Author: OMAR
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_

#include "TIMERS_HW.h"
#include "Bit_Math.h"
#include "StdTypes.h"

/* -------------------- TIMER0 SELECTOR ---------------------------------------*/
#define TIMER0_SELECTOR			0

#define TIMER0_NORMAL			0
#define TIMER0_CTC				1
/* ----------------------------------------------------------------------------*/




/* -------------------- TIMER0 Functions' prototypes --------------------------*/
void TIMER0_init();
void TIMER0_start();
void TIMER0_stop();
uint8_t TIMER0_read();
uint8_t TIMER0_readOVF();
void TIMER0_clearOVF();
/* ----------------------------------------------------------------------------*/



#endif /* TIMER0_H_ */