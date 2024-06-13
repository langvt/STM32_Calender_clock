/*
 * File: TIM.h
 * Author: Lang Van Toan
 * Description: This file contains the definitions and declarations necessary for configuring and initializing 
 *              Timer 2 (TIM2) and PWM (Pulse Width Modulation) on an STM32F10x microcontroller. 
 *              It includes macro definitions for timer and GPIO configuration, and function prototypes for 
 *              initializing the timer and PWM functionality.
 */
#ifndef TIM_H
#define TIM_H
/** Includes ---------------------------------------------------------------- */
#include "stm32f10x_tim.h"
#include "main.h"
/** Defines ----------------------------------------------------------------- */
#define TIMx					TIM2
#define TIM_RCC			RCC_APB1Periph_TIM2
#define PWM_GPIO			GPIOA
#define PWM_GPIO_RCC	RCC_APB2Periph_GPIOA
#define PWM_GPIO_PIN	GPIO_Pin_0

/** Public function prototypes ---------------------------------------------- */
void TIM_Config(void);
void PWM_Config(void);
void TIMER_Init(void);
#endif
