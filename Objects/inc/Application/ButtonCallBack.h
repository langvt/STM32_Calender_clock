/*
 * File: ButtonCallBack.h
 * Author: Lang Van Toan
 * Description: This header file declares functions for initializing and handling button callbacks 
 *              on an STM32F10x microcontroller. It includes the necessary includes and function prototypes 
 *              for setting up and managing button press events.
 */
#ifndef BUTTONCALLBACK_H
#define BUTTONCALLBACK_H
#include "main.h"
#include "ClockHandle.h"

void buttonCallBackInit(void);
void buttonCallBackHandle(void);
#endif
