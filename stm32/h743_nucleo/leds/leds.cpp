#ifdef MCUDRV_STM32
#ifdef STM32H743_NUCLEO


#include "leds.h"


namespace bsp {


namespace nucleo {


mcu::gpio::Output led_green;
const mcu::gpio::Config led_green_config = {	
    .port = GPIOB,
    .pin = {
        .Pin = GPIO_PIN_0,
        .Mode = GPIO_MODE_OUTPUT_PP,
        .Pull = GPIO_NOPULL,
        .Speed = GPIO_SPEED_FREQ_LOW,
        .Alternate = 0
    },
    .active_state = emb::gpio::ActiveState::high
};


mcu::gpio::Output led_blue;
const mcu::gpio::Config led_blue_config = {	
    .port = GPIOB,
    .pin = {
        .Pin = GPIO_PIN_7,
        .Mode = GPIO_MODE_OUTPUT_PP,
        .Pull = GPIO_NOPULL,
        .Speed = GPIO_SPEED_FREQ_LOW,
        .Alternate = 0
    },
    .active_state = emb::gpio::ActiveState::high
};


mcu::gpio::Output led_red;
const mcu::gpio::Config led_red_config = {
    .port = GPIOB,
    .pin = {
        .Pin = GPIO_PIN_14,
        .Mode = GPIO_MODE_OUTPUT_PP,
        .Pull = GPIO_NOPULL,
        .Speed = GPIO_SPEED_FREQ_LOW,
        .Alternate = 0
    },
    .active_state = emb::gpio::ActiveState::high
};


void init_led_green() {
    led_green.init(led_green_config);
}


void init_led_blue() {
    led_blue.init(led_blue_config);
}


void init_led_red() {
    led_red.init(led_red_config);
}


} // namespace nucleo


} // namespace bsp


#endif
#endif
