#ifdef MCUDRV_C28X
#ifdef _LAUNCHXL_F28379D


#include "launchpad.h"


namespace bsp {


mcu::gpio::OutputPin launchpad::led_blue;
const mcu::gpio::PinConfig launchpad::led_blue_config = {
    31,
    GPIO_31_GPIO31,
    mcu::gpio::Direction::output,
    emb::gpio::active_state::low,
    mcu::gpio::Type::std,
    mcu::gpio::QualMode::sync,
    1,
    mcu::gpio::MasterCore::cpu1
};


mcu::gpio::OutputPin launchpad::led_red;
const mcu::gpio::PinConfig launchpad::led_red_config = {
    34,
    GPIO_34_GPIO34,
    mcu::gpio::Direction::output,
    emb::gpio::active_state::low,
    mcu::gpio::Type::std,
    mcu::gpio::QualMode::sync,
    1,
    mcu::gpio::MasterCore::cpu1
};


void launchpad::init_led_blue(mcu::gpio::MasterCore core) {
    led_blue.init(led_blue_config);
    led_blue.set_master_core(core);
}


void launchpad::init_led_red(mcu::gpio::MasterCore core) {
    led_red.init(led_red_config);
    led_red.set_master_core(core);
}


} // namespace bsp


#endif
#endif
