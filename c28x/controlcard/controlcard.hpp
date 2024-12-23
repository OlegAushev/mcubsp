#pragma once


#ifdef MCUDRV_C28X
#ifdef CONTROLCARD


#include <mcudrv/c28x/f2837xd/gpio/gpio.hpp>


namespace bsp {


class controlcard {
private:
    static const mcu::gpio::Config led_red_config;
public:
    static void init_led_red(mcu::gpio::MasterCore core = mcu::gpio::MasterCore::cpu1);
    static mcu::gpio::OutputPin led_red;

    static const uint32_t cana_rx_pin = 30;
    static const uint32_t cana_rx_pinmux = GPIO_30_CANRXA;
    static const uint32_t cana_tx_pin = 31;
    static const uint32_t cana_tx_pinmux = GPIO_31_CANTXA;
};


} // namespace bsp


#endif
#endif
