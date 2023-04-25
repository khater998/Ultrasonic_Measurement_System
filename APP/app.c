/******************************************************************************
 *
 * Module: APP
 *
 * File Name: app.c
 *
 * Description: Source file for the application
 *
 * Author: Mohamed Ibrahim
 *
 *******************************************************************************/
#include "app.h"
#include "../HAL/LCD/lcd.h"
#include "../HAL/ULTRASONIC/ultrasonic.h"
#include <avr/io.h>
#include <avr/delay.h>
uint16 distance = 0; 	/* to store Ultrasonic reading */

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/*
 * Description :
 * This function is responsible for initializing the peripherals used
 */
void APP_init(void)
{
	/* Enable Global Interrupt */
	SREG |= (1<<7);

	/* initialize ultrasonic && LCD */
	Ultrasonic_init();
	LCD_init();


	LCD_displayStringRowColumn(0, 0, "Distance= ");


}
/*
 * Description : This Function gets ultrasonic reading and prints it on LCD
 */

void APP_start(void)
{

	/* get distance from ultrasonic */
	distance = Ultrasonic_readDistance();

	/* display distance on LCD */
	LCD_moveCursor(0, 10);

	if(distance < 10)
	{
		LCD_intgerToString(distance);
		LCD_displayString("cm  ");
	}
	else if (distance < 100)
	{
		LCD_intgerToString(distance);
		LCD_displayString("cm ");
	}
	else
	{
		LCD_intgerToString(distance);
		LCD_displayString("cm");

	}

	_delay_ms(10);

}
