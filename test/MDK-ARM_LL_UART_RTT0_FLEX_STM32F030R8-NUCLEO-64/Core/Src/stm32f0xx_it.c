/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f0xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f0xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "trice.h"
#include "intern/triceInterfaceUART.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/

/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M0 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVC_IRQn 0 */

  /* USER CODE END SVC_IRQn 0 */
  /* USER CODE BEGIN SVC_IRQn 1 */

  /* USER CODE END SVC_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */
    extern int milliSecond;
    milliSecond++;
    if( (milliSecond & 0xFFF) == 0 ){ // every 4096ms
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice0i( id(0), "int:SysTick_Handler" );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice16_1i( id(0), "int:SysTick: %5u\n", SYSTICKVAL16 );
        Trice8_1i( id(0), "int:SysTick: %5d\n", (int8_t)-3 );
        Trice8_2i( id(0), "int:%d %d\n", (int8_t)-1, (int8_t)-2 );
    }
  /* USER CODE END SysTick_IRQn 0 */

  /* USER CODE BEGIN SysTick_IRQn 1 */
    triceTriggerU32WriteU8ReadFifoTransmit();
  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F0xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f0xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles USART2 global interrupt.
  */
void USART2_IRQHandler(void)
{
  /* USER CODE BEGIN USART2_IRQn 0 */

  /* USER CODE END USART2_IRQn 0 */
  /* USER CODE BEGIN USART2_IRQn 1 */
    triceServeU32WriteU8ReadFifoTransmit();
  /* USER CODE END USART2_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/