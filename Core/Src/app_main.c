/*
 * app_main.c
 *
 *  Created on: Apr 7, 2023
 *      Author: Wels
 */
#include "app_main.h"

void app_main(void){
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	HAL_Delay(500);
}

void app_read(void){
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, RESET);
	HAL_Delay(250);
}
