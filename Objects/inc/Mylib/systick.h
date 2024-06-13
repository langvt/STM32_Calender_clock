/*
 * File: systick.h
 * Author: Lang Van Toan
 * Description: This header file contains the declarations for functions and variables related to the SysTick timer on an STM32F10x microcontroller. 
 * It provides function prototypes for initializing the SysTick timer, handling the SysTick interrupt, retrieving the current tick count, and generating delays.
 */
#ifndef __SYSTICK__H
#define __SYSTICK__H

#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "system_stm32f10x.h"

void SystickInit(void);
void SysTick_Handler(void);
uint32_t getTick(void);
void Delay_Ms(int time);


#endif