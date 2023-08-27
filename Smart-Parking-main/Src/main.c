/*************************************************************************/
/* Author        : Amr khaled	                   	 	                		 */
/* Project       : Smart_Car_Parking_STM32F103	  	                     */
/* File          : app_states.c	 					          	                   */
/* Version       : V1                                                    */
/*************************************************************************/

#include "MCAL/MCAL.h"
#include "HAL/HAL.h"
#include "APP/SmartParking.h"

int main(void)
{
	MCAL_init();
	HAL_init();
	SmartParking_init();
	SmartParking_main();
}
