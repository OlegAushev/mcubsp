#ifdef MCUDRV_STM32
#ifdef STM32H743_NUCLEO


#include "button.h"


namespace bsp {


namespace nucleo {


mcu::gpio::InputPin button;
const mcu::gpio::Config button_config = {
    .port = GPIOC,
    .pin = {
        .Pin = GPIO_PIN_13,
        .Mode = GPIO_MODE_IT_RISING_FALLING,
        .Pull = GPIO_NOPULL,
        .Speed = GPIO_SPEED_FREQ_LOW,
        .Alternate = 0
    },
    .actstate = emb::gpio::active_pin_state::high
};


void init_button() {
    button.init(button_config);
}


__attribute__((weak)) void on_button_interrupt() {
    /* DO NOTHING */
}


} // namespace nucleo


} // namespace bsp


#endif
#endif
