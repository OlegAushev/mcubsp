#ifdef MCUDRV_C28X
#ifdef _LAUNCHXL_F28379D

#include "launchpad.hpp"

namespace bsp {

const mcu::c28x::gpio::PinConfig launchpad::led_blue_config = {
    31,
    GPIO_31_GPIO31,
    mcu::c28x::gpio::Direction::output,
    mcu::gpio::active_state::low,
    mcu::c28x::gpio::Type::std,
    mcu::c28x::gpio::QualMode::sync,
    1,
    mcu::c28x::gpio::MasterCore::cpu1
};

const mcu::c28x::gpio::PinConfig launchpad::led_red_config = {
    34,
    GPIO_34_GPIO34,
    mcu::c28x::gpio::Direction::output,
    mcu::gpio::active_state::low,
    mcu::c28x::gpio::Type::std,
    mcu::c28x::gpio::QualMode::sync,
    1,
    mcu::c28x::gpio::MasterCore::cpu1
};

} // namespace bsp

#endif
#endif
