#pragma once


#ifdef MCUDRV_STM32
#ifdef STM32F446_NUCLEO


#include <mcudrv/stm32/f4/gpio/gpio.h>


namespace bsp {


namespace nucleo {


extern mcu::gpio::OutputPin led_green;
extern const mcu::gpio::PinConfig led_green_config;

extern mcu::gpio::OutputPin led_blue;
extern const mcu::gpio::PinConfig led_blue_config;

extern mcu::gpio::OutputPin led_red;
extern const mcu::gpio::PinConfig led_red_config;


void init_led_green();
void init_led_blue();
void init_led_red();


} // namespace nucleo


} // namespace bsp


#endif
#endif
