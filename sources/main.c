/**
 * @file main.c
 * @brief An aplication code that uses a push button as an input and a LED as an output in a STM23 
 * 
 *
 * @authors David Mijares
 *
 */
#include <stdint.h>
#include "LED.h"

void _init(void) { }
void _fini(void) { }
void delay(volatile uint32_t count); 

int main()
{
    // 1. Initialize the button and the led
        led_init(); 
        led_off(); // When the led turns off the program is ready to execute
    while (1)
    {
        led_on(); 
        delay(1000000); 
        led_off(); 
        delay(1000000); 

    }
    return 0; 
}





void delay(volatile uint32_t count)
{
    for (volatile uint32_t i = 0; i < count; i++);
}