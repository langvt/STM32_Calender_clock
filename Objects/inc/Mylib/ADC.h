/*
 * File: ADC.h
 * Author: Lang Van Toan
 * Description: This header file contains the definitions and declarations necessary for configuring and using 
 *              the ADC (Analog-to-Digital Converter) on an STM32F10x microcontroller. It defines the ADC and GPIO 
 *              configurations and provides a function prototype for initializing the ADC.
 */
#ifndef ADC_H
#define ADC_H
/** Includes ---------------------------------------------------------------- */
#include "main.h"
#include "stm32f10x_adc.h"


/** Defines ----------------------------------------------------------------- */
#define ADCx					ADC1
#define ADC_RCC			RCC_APB2Periph_ADC1
#define ADC_GPIO			GPIOA
#define ADC_GPIO_RCC	RCC_APB2Periph_GPIOA
#define ADC_GPIO_PIN	GPIO_Pin_1

/** Public function prototypes ---------------------------------------------- */
void ADC_Config(void);


#endif
