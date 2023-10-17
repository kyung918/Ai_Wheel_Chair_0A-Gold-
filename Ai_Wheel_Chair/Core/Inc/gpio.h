/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define OPER					HAL_GPIO_TogglePin(LED_OPER_GPIO_Port, LED_OPER_Pin)

#define MOTOR_RS485_DIR_TXD		HAL_GPIO_WritePin(MOTOR_RS485_DIR_GPIO_Port, MOTOR_RS485_DIR_Pin, GPIO_PIN_SET)
#define MOTOR_RS485_DIR_RXD		HAL_GPIO_WritePin(MOTOR_RS485_DIR_GPIO_Port, MOTOR_RS485_DIR_Pin, GPIO_PIN_RESET)
#define PC_RS485_DIR_TXD		HAL_GPIO_WritePin(PC_RS485_DIR_GPIO_Port, PC_RS485_DIR_Pin, GPIO_PIN_SET)
#define PC_RS485_DIR_RXD		HAL_GPIO_WritePin(PC_RS485_DIR_GPIO_Port, PC_RS485_DIR_Pin, GPIO_PIN_RESET)
#define EMERGENCY_EN			HAL_GPIO_WritePin(Emergency_En_GPIO_Port, Emergency_En_Pin, GPIO_PIN_SET)
#define EMERGENCY_DIS			HAL_GPIO_WritePin(Emergency_En_GPIO_Port, Emergency_En_Pin, GPIO_PIN_RESET)

//SW On = false / SW Off = true -> Normal True
#define INPUT_MODE0				HAL_GPIO_ReadPin(MODE0_GPIO_Port, MODE0_Pin)
#define INPUT_MODE1				HAL_GPIO_ReadPin(MODE1_GPIO_Port, MODE1_Pin)
#define INPUT_MODE2				HAL_GPIO_ReadPin(MODE2_GPIO_Port, MODE2_Pin)
#define INPUT_MODE3				HAL_GPIO_ReadPin(MODE3_GPIO_Port, MODE3_Pin)

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

