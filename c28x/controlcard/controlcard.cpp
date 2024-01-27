#ifdef MCUDRV_C28X
#ifdef CONTROLCARD


#include "controlcard.h"


namespace bsp {


mcu::gpio::OutputPin controlcard::led_red;
const mcu::gpio::Config controlcard::led_red_config(
    34,
    GPIO_34_GPIO34,
    mcu::gpio::Direction::output,
    emb::gpio::active_pin_state::low,
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
#endif
