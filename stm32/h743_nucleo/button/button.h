#pragma once


#ifdef MCUDRV_STM32
#ifdef STM32H743_NUCLEO


#include <mcudrv/stm32/h7/gpio/gpio.h>


namespace bsp {


namespace nucleo {


extern mcu::gpio::InputPin button;
extern const mcu::gpio::Config button_config;
void initialize_button();
void on_button_interrupt();


} // namespace nucleo


} // namespace bsp


#endif
#endif
