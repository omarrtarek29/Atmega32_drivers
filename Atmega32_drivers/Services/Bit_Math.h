/*
 * Bit_Math.h
 *
 * Created: 10/21/2021 1:40:29 PM
 *  Author: OMAR
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(Reg, BitNum)		(Reg |= (1 << BitNum))
#define CLEAR_BIT(Reg, BitNum)		(Reg &= ~(1 << BitNum))
#define TOGGLE_BIT(Reg, BitNum)		(Reg ^= (1 << BitNum))
#define GET_BIT(Reg, BitNum)		(Reg & (1 << BitNum))


#endif /* BIT_MATH_H_ */