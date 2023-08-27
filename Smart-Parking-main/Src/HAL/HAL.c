/*************************************************************************/
/* Author        : Amr khaled	                   	 	                		 */
/* Project       : Smart_Car_Parking_STM32F103	  	                     */
/* File          : app_states.c	 					          	                   */
/* Version       : V1                                                    */
/*************************************************************************/

#include "HAL/Alarm.h"
#include "HAL/KPAD.h"
#include "HAL/PIR.h"
#include "HAL/Servo_Motor.h"
#include "HAL/LCD.h"
#include "HAL/RFID.h"

void HAL_init(void)
{
	Alarm_init();
	KPAD_init();
	PIR_init();

	Servo1_Entry_Gate_Init();
	Servo2_Exit_Gate_Init();

	LCD_init(&LCD_admin);
	LCD_init(&LCD_user);

	RFID_init();
}
