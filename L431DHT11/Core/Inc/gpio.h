/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define  DHT11_SDA_H      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,GPIO_PIN_SET)     //拉高单总线        
#define  DHT11_SDA_L      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,GPIO_PIN_RESET)   //拉低单总线
#define  DHT11_SDA        GPIO_PIN_11                                           //单总线管脚
#define  DHT11_DATA_BIT   HAL_GPIO_ReadPin(GPIOA,DHT11_SDA)                   //读取单总线上的数据
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

