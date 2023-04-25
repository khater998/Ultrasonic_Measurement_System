/******************************************************************************
 *
 * Module: APP
 *
 * File Name: app.h
 *
 * Description: Header file for the application
 *
 * Author: Mohamed IBRAHIM
 *
 *******************************************************************************/

#ifndef APP_H_
#define APP_H_

#include "../std_types.h"

/*******************************************************************************
 *                              Shared Variables                               *
 *******************************************************************************/
extern uint8 temp;

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
/*
 * Description :
 * This function is responsible for initializing the peripherals used
 */
void APP_init(void);

/*
 * Description : This Function gets ultrasonic reading and prints it on LCD
 */
void APP_start(void);

#endif /* APP_H_ */
