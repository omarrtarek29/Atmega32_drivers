/*
 * DIO.c
 *
 * Created: 10/21/2021 1:37:19 PM
 *  Author: OMAR
 */ 

#include "DIO.h"


void DIO_setPinDir(register_t port, uint8_t pinNum, direction_t dir){
	if(dir == input){		// if the direction is input then set the pin bit to 0
		switch (port){
			case PORTA:
			CLEAR_BIT(PORTA_DIR, pinNum);
			break;
			
			case PORTB:
			CLEAR_BIT(PORTB_DIR, pinNum);
			break;
			
			case PORTC:
			CLEAR_BIT(PORTC_DIR, pinNum);
			break;
			
			case PORTD:
			CLEAR_BIT(PORTD_DIR, pinNum);
			break;
			
			default:
			break;
		}
	}
	else{					// if the direction is output then set the pin bit to 1
		switch (port){
			case PORTA:
			SET_BIT(PORTA_DIR, pinNum);
			break;
			
			case PORTB:
			SET_BIT(PORTB_DIR, pinNum);
			break;
			
			case PORTC:
			SET_BIT(PORTC_DIR, pinNum);
			break;
			
			case PORTD:
			SET_BIT(PORTD_DIR, pinNum);
			break;
			
			default:
			break;
		}
	}
}

void setPortDir(register_t port, direction_t dir){
	if(dir == input){		// if the direction is input the set all port bits to 0
		switch (port){
			case PORTA:
			PORTA_DIR = 0x00;
			break;
			
			case PORTB:
			PORTB_DIR = 0x00;
			break;
			
			case PORTC:
			PORTC_DIR = 0x00;
			break;
			
			case PORTD:
			PORTD_DIR = 0x00;
			break;
			
			default:
			break;
		}
	}
	else{					// if the direction is input the set all port bits to 1
		switch (port){
			case PORTA:
			PORTA_DIR = 0xFF;
			break;
			
			case PORTB:
			PORTB_DIR = 0xFF;
			break;
			
			case PORTC:
			PORTC_DIR = 0xFF;
			break;
			
			case PORTD:
			PORTD_DIR = 0xFF;
			break;
			
			default:
			break;
		}
	}
}

void DIO_write(register_t port, uint8_t pinNum, status_t stat){
	if(stat == high){		// if the output needed is high then set the pin bit to 1
		switch (port){
			case PORTA:
			SET_BIT(PORTA_DATA, pinNum);
			break;
			
			case PORTB:
			SET_BIT(PORTB_DATA, pinNum);
			break;
			
			case PORTC:
			SET_BIT(PORTC_DATA, pinNum);
			break;
			
			case PORTD:
			SET_BIT(PORTD_DATA, pinNum);
			break;
			
			default:
			break;
		}
	}
	else{					// if the output needed is low then set the pin bit to 0
		switch (port){
			case PORTA:
			CLEAR_BIT(PORTA_DATA, pinNum);
			break;
			
			case PORTB:
			CLEAR_BIT(PORTB_DATA, pinNum);
			break;
			
			case PORTC:
			CLEAR_BIT(PORTC_DATA, pinNum);
			break;
			
			case PORTD:
			CLEAR_BIT(PORTD_DATA, pinNum);
			break;
			
			default:
			break;
		}
	}
}

uint8_t DIO_read(register_t port, uint8_t pinNum){
	// switching on the ports and returning the status of the selected pin
	switch (port){
		case PORTA:
		return PORTA_STATUS & (1 << pinNum);
		
		case PORTB:
		return PORTB_STATUS & (1 << pinNum);
		
		case PORTC:
		return PORTC_STATUS & (1 << pinNum);
		
		case PORTD:
		return PORTD_STATUS & (1 << pinNum);
		
		default:
		break;
	}
	return 0;
}