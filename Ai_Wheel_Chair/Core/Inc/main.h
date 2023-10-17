/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_OPER_Pin GPIO_PIN_13
#define LED_OPER_GPIO_Port GPIOC
#define MODE3_Pin GPIO_PIN_4
#define MODE3_GPIO_Port GPIOA
#define MODE2_Pin GPIO_PIN_5
#define MODE2_GPIO_Port GPIOA
#define MODE1_Pin GPIO_PIN_6
#define MODE1_GPIO_Port GPIOA
#define MODE0_Pin GPIO_PIN_7
#define MODE0_GPIO_Port GPIOA
#define SBUS_RXD_Pin GPIO_PIN_11
#define SBUS_RXD_GPIO_Port GPIOB
#define DebugTxd_Pin GPIO_PIN_9
#define DebugTxd_GPIO_Port GPIOA
#define DebugRxd_Pin GPIO_PIN_10
#define DebugRxd_GPIO_Port GPIOA
#define MotorRs485Txd_Pin GPIO_PIN_10
#define MotorRs485Txd_GPIO_Port GPIOC
#define MotorRs485Rxd_Pin GPIO_PIN_11
#define MotorRs485Rxd_GPIO_Port GPIOC
#define PcRs485Txd_Pin GPIO_PIN_12
#define PcRs485Txd_GPIO_Port GPIOC
#define PcRs485Rxd_Pin GPIO_PIN_2
#define PcRs485Rxd_GPIO_Port GPIOD
#define MOTOR_RS485_DIR_Pin GPIO_PIN_5
#define MOTOR_RS485_DIR_GPIO_Port GPIOB
#define PC_RS485_DIR_Pin GPIO_PIN_6
#define PC_RS485_DIR_GPIO_Port GPIOB
#define Emergency_En_Pin GPIO_PIN_9
#define Emergency_En_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
typedef struct {

	bool bSerialType;

} SerialType;

extern SerialType serialtype;

typedef struct {

	bool bRemoteType;

} RemoteType;

extern RemoteType remotetype;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
