#pragma once


#ifdef MCUDRV_STM32
#ifdef STM32H743_NUCLEO


#include <mcudrv/stm32/h7/gpio/gpio.h>


namespace bsp {


namespace nucleo {


extern mcu::gpio::OutputPin led_green;
extern const mcu::gpio::Config led_green_config;

extern mcu::gpio::OutputPin led_blue;
extern const mcu::gpio::Config led_blue_config;

extern mcu::gpio::OutputPin led_red;
extern const mcu::gpio::Config led_red_config;


void init_led_green();
void init_led_blue();
void init_led_red();


} // namespace nucleo


} // namespace bsp


#endif
#endif
