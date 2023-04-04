#include "crd600.h"


#ifdef CRD600


namespace bsp {

const emb::array<mcu::gpio::Config, 6> crd600::psdis_pins_configs = {
    mcu::gpio::Config(79, GPIO_79_GPIO79, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(87, GPIO_87_GPIO87, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(133, GPIO_133_GPIO133, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(78, GPIO_78_GPIO78, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(86, GPIO_86_GPIO86, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(94, GPIO_94_GPIO94, mcu::gpio::Direction::output, emb::gpio::ActiveState::low, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1)
};


const emb::array<mcu::gpio::Config, 6> crd600::len_pins_configs = {
    mcu::gpio::Config(77, GPIO_77_GPIO77, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(85, GPIO_85_GPIO85, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(93, GPIO_93_GPIO93, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(76, GPIO_76_GPIO76, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(84, GPIO_84_GPIO84, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(92, GPIO_92_GPIO92, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
};


const emb::array<mcu::gpio::Config, 6> crd600::ocen_pins_configs = {
    mcu::gpio::Config(75, GPIO_75_GPIO75, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(83, GPIO_83_GPIO83, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(91, GPIO_91_GPIO91, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(74, GPIO_74_GPIO74, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(82, GPIO_82_GPIO82, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
    mcu::gpio::Config(90, GPIO_90_GPIO90, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1),
};


const emb::array<mcu::gpio::Config, 6> crd600::fault_pins_configs = {
    mcu::gpio::Config(36, GPIO_36_GPIO36, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
    mcu::gpio::Config(38, GPIO_38_GPIO38, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
    mcu::gpio::Config(61, GPIO_61_GPIO61, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
    mcu::gpio::Config(35, GPIO_35_GPIO35, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
    mcu::gpio::Config(37, GPIO_37_GPIO37, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
    mcu::gpio::Config(60, GPIO_60_GPIO60, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1),
};


const mcu::gpio::Config crd600::fault_uvw_pin_config =
    mcu::gpio::Config(65, GPIO_65_GPIO65, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::fault_xyz_pin_config =
    mcu::gpio::Config(67, GPIO_67_GPIO67, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::fault_all_pin_config=
    mcu::gpio::Config(69, GPIO_69_GPIO69, mcu::gpio::Direction::input, emb::gpio::ActiveState::low, mcu::gpio::Type::pullup, mcu::gpio::QualMode::async, 1);


const mcu::gpio::Config crd600::shutdown_pos15v_pin_config =
    mcu::gpio::Config(88, GPIO_88_GPIO88, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::sync, 1);


const mcu::gpio::Config crd600::led_red_config(64, GPIO_64_GPIO64, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::led_yellow_config(66, GPIO_66_GPIO66, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::led_green_config(68, GPIO_68_GPIO68, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);



#ifdef USE_SD_PINS_FOR_PROFILING
const mcu::gpio::Config crd600::profiler_pin_c1_config =
    mcu::gpio::Config(49, GPIO_49_GPIO49, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::profiler_pin_c2_config =
    mcu::gpio::Config(51, GPIO_51_GPIO51, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::profiler_pin_c3_config =
    mcu::gpio::Config(53, GPIO_53_GPIO53, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::profiler_pin_d1_config =
    mcu::gpio::Config(48, GPIO_48_GPIO48, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::profiler_pin_d2_config =
    mcu::gpio::Config(50, GPIO_50_GPIO50, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
const mcu::gpio::Config crd600::profiler_pin_d3_config =
    mcu::gpio::Config(52, GPIO_52_GPIO52, mcu::gpio::Direction::output, emb::gpio::ActiveState::high, mcu::gpio::Type::std, mcu::gpio::QualMode::async, 1);
#endif


emb::array<mcu::gpio::Output, 6> crd600::psdis_pins;
emb::array<mcu::gpio::Output, 6> crd600::len_pins;
emb::array<mcu::gpio::Output, 6> crd600::ocen_pins;
emb::array<mcu::gpio::Input, 6> crd600::fault_pins;
mcu::gpio::Output crd600::shutdownPos15VPin;

mcu::gpio::Output crd600::led_red;
mcu::gpio::Output crd600::led_yellow;
mcu::gpio::Output crd600::led_green;

mcu::gpio::Input crd600::fault_uvw_pin;
mcu::gpio::Input crd600::fault_xyz_pin;
mcu::gpio::Input crd600::fault_all_pin;
#ifdef USE_SD_PINS_FOR_PROFILING
mcu::gpio::Output crd600::profiler_pin_c1;
mcu::gpio::Output crd600::profiler_pin_c2;
mcu::gpio::Output crd600::profiler_pin_c3;
mcu::gpio::Output crd600::profiler_pin_d1;
mcu::gpio::Output crd600::profiler_pin_d2;
mcu::gpio::Output crd600::profiler_pin_d3;
#endif


void crd600::init() {
    for (size_t i = 0; i < phase_count; ++i) {
        psdis_pins[i].init(psdis_pins_configs[i]);
        len_pins[i].init(len_pins_configs[i]);
        ocen_pins[i].init(ocen_pins_configs[i]);
        fault_pins[i].init(fault_pins_configs[i]);
    }

    fault_uvw_pin.init(fault_uvw_pin_config);
    fault_xyz_pin.init(fault_xyz_pin_config);
    fault_all_pin.init(fault_all_pin_config);
    shutdownPos15VPin.init(shutdown_pos15v_pin_config);

    led_red.init(led_red_config);
    led_yellow.init(led_yellow_config);
    led_green.init(led_green_config);

#ifdef USE_SD_PINS_FOR_PROFILING
    profiler_pin_c1.init(profiler_pin_c1_config);
    profiler_pin_c2.init(profiler_pin_c2_config);
    profiler_pin_c3.init(profiler_pin_c3_config);
    profiler_pin_d1.init(profiler_pin_d1_config);
    profiler_pin_d2.init(profiler_pin_d2_config);
    profiler_pin_d3.init(profiler_pin_d3_config);
#endif
}


void crd600::reset_all_drivers() {
    for (size_t i = 0; i < phase_count; ++i) {
        ocen_pins[i].set();
    }
    mcu::delay(emb::chrono::microseconds(100));
    for (size_t i = 0; i < phase_count; ++i) {
        ocen_pins[i].reset();
    }
    mcu::delay(emb::chrono::milliseconds(10));
}

} // namespace bsp


#endif

