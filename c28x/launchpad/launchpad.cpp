#include "launchpad.h"


#ifdef _LAUNCHXL_F28379D


namespace bsp {

mcu::gpio::Output launchpad::led_blue;
const mcu::gpio::Config launchpad::led_blue_config(
    31,
    GPIO_31_GPIO31,
    mcu::gpio::Direction::output,
    emb::gpio::ActiveState::low,
    mcu::gpio::Type::std,
    mcu::gpio::QualMode::sync,
    1
);


mcu::gpio::Output launchpad::led_red;
const mcu::gpio::Config launchpad::led_red_config(
    34,
    GPIO_34_GPIO34,
    mcu::gpio::Direction::output,
    emb::gpio::ActiveState::low,
    mcu::gpio::Type::std,
    mcu::gpio::QualMode::sync,
    1
);


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

