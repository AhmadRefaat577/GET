/*
 * TIMER_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      
 */

#include "Type.h"
#include "Macros.h"
#include "TIMER_interface.h"
#include "TIMER_private.h"
#include<avr/io.h>


void TIMER_vidInit(void)
{
	CLEAR_BIT(TCCR0,7);
	CLEAR_BIT(TCCR0,6);
	CLEAR_BIT(TCCR0,5);
	CLEAR_BIT(TCCR0,4);
	CLEAR_BIT(TCCR0,3);
	CLEAR_BIT(TCCR0,2);
	CLEAR_BIT(TCCR0,1);
	SET_BIT(TCCR0,0);

	TCNT0=192;

	SET_BIT(TIMSK,0);

	SET_BIT(SREG,7);

}

