#ifdef MCUDRV_C28X
#ifdef _LAUNCHXL_F28379D


#include "launchpad.h"


namespace bsp {


mcu::c28x::gpio::OutputPin launchpad::led_blue;
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


mcu::c28x::gpio::OutputPin launchpad::led_red;
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


void launchpad::init_led_blue(mcu::c28x::gpio::MasterCore core) {
    led_blue.init(led_blue_config);
    led_blue.set_master_core(core);
}


void launchpad::init_led_red(mcu::c28x::gpio::MasterCore core) {
    led_red.init(led_red_config);
    led_red.set_master_core(core);
}


} // namespace bsp


#endif
#endif
