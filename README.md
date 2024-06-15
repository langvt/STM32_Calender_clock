# STM32_Calender_clock

![image](https://github.com/langvt/STM32_Calender_clock/blob/main/block_diagram.jpg?raw=true)

[Watch the video](https://youtu.be/8Gw6CeKGfP0)

## Project Overview

### Description:
This project implements count real-time (seconds, minutes, hours, day of the week, date, month, year), measure temperature, set alarm mode to control servo and led by using STM32 and the DS3231 module, then display it on an LCD screen like a clock. 
We can adjust the time by pressing the button, including 2 modes: alarm time adjustment mode and normal time adjustment mode.
- In alarm time setting mode, we adjust the set hour and minute before the timer, the word "alarm" will be displayed on the screen, then the servo will rotate and the LED light will flash for one minute.
- In normal adjustment mode, we can adjust the time points to increase or decrease as desired
In addition, the servo rotation angle can be adjusted when in normal mode via the potentiometer module

### Components Used:
- STM32F103 Microcontroller
- DS3231 module
- Servo Sg90
- Potentiometer
- led
- LCD 20x4 module
- Button(3 pieces)
- I2C Communication, TIM, PWM and ADC on to STM32

### Features:
- Utilization of PWM with STM32 for precise servo sg90 control.
- Detailed I2C communication between components
- DS3231 module to count real-time (seconds, minutes, hours, day of the week, date, month, year), measure temperature, set alarm mode to control servo and led
- Buttons are used to adjust the time settings and enter the time adjustment mode in both the regular time setting mode and the alarm time setting mode. There are three buttons: one button to increase the time settings, one button to decrease the time settings, and one button to enter and exit the adjustment mode.
- LCD to display information such as seconds, minutes, hours, day of the week, date, month, year, temperature, and other information.
- Potentiometer To manually control the servo's rotation angle by using ADC
25/2