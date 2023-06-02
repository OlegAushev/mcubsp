#pragma once


#ifdef STM32H7xx_Nucleo

#include <mculib_stm32/h7/gpio/gpio.h>


namespace bsp {

namespace nucleo {

extern mcu::gpio::Output led_green;
extern const mcu::gpio::Config led_green_config;

extern mcu::gpio::Output led_blue;
extern const mcu::gpio::Config led_blue_config;

extern mcu::gpio::Output led_red;
extern const mcu::gpio::Config led_red_config;


void init_led_green();
void init_led_blue();
void init_led_red();

} // namespace nucleo

} // namespace bsp

#endif

