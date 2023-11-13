#include "controlcard.h"


#ifdef CONTROLCARD


namespace bsp {

mcu::gpio::Output controlcard::led_red;
const mcu::gpio::Config controlcard::led_red_config(
    34,
    GPIO_34_GPIO34,
    mcu::gpio::Direction::output,
    emb::gpio::ActiveState::low,
    mcu::gpio::Type::std,
    mcu::gpio::QualMode::sync,
    1
);


void controlcard::init_led_red(mcu::gpio::MasterCore core) {
    led_red.init(led_red_config);
    led_red.set_master_core(core);
}

} // namespace bsp


#endif

