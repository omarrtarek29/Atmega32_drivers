/*
 * DIO_HW.h
 *
 * Created: 10/21/2021 1:38:20 PM
 *  Author: OMAR
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#include "StdTypes.h"


/* ....................... PORTS REGISTERS & BITS ....................... */


//PORTA_MACROS
#define PORTA_DATA		*((volatile uint8_t *)(0x3B))
#define PORTA_DIR		*((volatile uint8_t *)(0x3A))
#define PORTA_STATUS	*((volatile uint8_t *)(0x39))
#define PA0				0
#define PA1				1
#define PA2				2
#define PA3				3
#define PA4				4
#define PA5				5
#define PA6				6
#define PA7				7

//PORTB_MACROS
#define PORTB_DATA		*((volatile uint8_t *)(0x38))
#define PORTB_DIR		*((volatile uint8_t *)(0x37))
#define PORTB_STATUS	*((volatile uint8_t *)(0x36))
#define PB0				0
#define PB1				1
#define PB2				2
#define PB3				3
#define PB4				4
#define PB5				5
#define PB6				6
#define PB7				7

//PORTC_MACROS
#define PORTC_DATA		*((volatile uint8_t *)(0x35))
#define PORTC_DIR		*((volatile uint8_t *)(0x34))
#define PORTC_STATUS	*((volatile uint8_t *)(0x33))
#define PC0				0
#define PC1				1
#define PC2				2
#define PC3				3
#define PC4				4
#define PC5				5
#define PC6				6
#define PC7				7

//PORTD_MACROS
#define PORTD_DATA		*((volatile uint8_t *)(0x32))
#define PORTD_DIR		*((volatile uint8_t *)(0x31))
#define PORTD_STATUS	*((volatile uint8_t *)(0x30))
#define PD0				0
#define PD1				1
#define PD2				2
#define PD3				3
#define PD4				4
#define PD5				5
#define PD6				6
#define PD7				7





#endif /* DIO_HW_H_ */