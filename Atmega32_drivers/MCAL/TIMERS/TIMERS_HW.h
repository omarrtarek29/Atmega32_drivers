/*
 * TIMERS_HW.h
 *
 * Created: 10/21/2021 1:41:46 PM
 *  Author: OMAR
 */ 


#ifndef TIMERS_HW_H_
#define TIMERS_HW_H_


#include "StdTypes.h"

/* ....................... TIMER0 REGISTERS & BITS ....................... */


/* ---------------- Timer/Counter Interrupt Mask Register ---------------- */
#define  TIMSK			*((volatile uint8_t*)(0x59))
/* ---------------------- TIMSK BITS --------------------------------------*/
#define  OCIE2          7
#define  TOIE2          6
#define  TICIE1         5
#define  OCIE1A         4
#define  OCIE1B         3
#define  TOIE1          2
#define  OCIE0          1
#define  TOIE0          0

/* ---------------- Timer/Counter Interrupt Flag register ---------------- */
#define TIFR			*((volatile uint8_t*)(0x58))
/* ---------------------- TIFR BITS ---------------------------------------*/
#define	OCF2			7
#define	TOV2			6
#define	ICF1			5
#define	OCF1A			4
#define	OCF1B			3
#define	TOV1			2
#define	OCF0			1
#define	TOV0			0
/* -----------------------------------------------------------------------*/


/* ---------------- Timer/Counter Clock Sources register ---------------- */
#define TCCR0			*((volatile uint8_t*)(0x53))
/* -------------------- TCCR0 BITS ---------------------------------------*/
#define FOC0			7
#define WGM00			6
#define COM01			5
#define COM00			4
#define WGM01			3
#define CS02			2
#define CS01			1
#define CS00			0
/* -----------------------------------------------------------------------*/


/* ----------------------- Timer/Counter0 register ---------------------- */
#define TCNT0			*((volatile uint8_t*)(0x52))

/* ----------------------- Output Compare register ---------------------- */
#define OCR0			*((volatile uint8_t*)(0x5C))



#endif /* TIMERS_HW_H_ */