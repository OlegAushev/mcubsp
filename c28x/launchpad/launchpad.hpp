#pragma once

#ifdef MCUDRV_C28X
#ifdef _LAUNCHXL_F28379D

#include <mcudrv/c28x/f2837xd/gpio/gpio.hpp>

namespace bsp {

class launchpad {
public:
    static const mcu::c28x::gpio::PinConfig led_blue_config;
    static const mcu::c28x::gpio::PinConfig led_red_config;

    static const uint32_t j1_scib_rx_pin = 19;
    static const uint32_t j1_scib_rx_pinmux = GPIO_19_SCIRXDB;
    static const uint32_t j1_scib_tx_pin = 18;
    static const uint32_t j1_scib_tx_pinmux = GPIO_18_SCITXDB;

    static const uint32_t j12_canb_rx_pin = 17;
    static const uint32_t j12_canb_rx_pinmux = GPIO_17_CANRXB;
    static const uint32_t j12_canb_tx_pin = 12;
    static const uint32_t j12_canb_tx_pinmux = GPIO_12_CANTXB;

    static const uint32_t j5_i2cb_scl_pin = 41;
    static const uint32_t j5_i2cb_scl_pinmux = GPIO_41_SCLB;
    static const uint32_t j5_i2cb_sda_pin = 40;
    static const uint32_t j5_i2cb_sda_pinmux = GPIO_40_SDAB;
};

} // namespace bsp

#endif
#endif
