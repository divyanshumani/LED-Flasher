/*
Title: LED_Flashing.c
Author: Divyanshu Mani
Date Created: 04/07/19
Purpose: This is a for loop that blinks an LED on PORTC
*/
//set your clock speed
#define F_CPU 4000000UL
//these are the include files. They are outside the project folder
#include <avr/io.h>
#include <avr/delay.h>
//this include is in your project folder

int main (void)
{
//Set PORTC to all outputs
DDRC = 0xFF;
//create an infinite loop
while(1) {
//this turns pin C0 on and off
//turns C0 HIGH
PORTC |=(1<<0);
//PAUSE 250 miliseconds
delay_ms(250);
//turns C0 LOW
PORTC &= ~(1 << 0);
//PAUSE 250 miliseconds
delay_ms(250);
};
}