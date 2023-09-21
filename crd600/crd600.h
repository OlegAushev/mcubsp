#pragma once


#ifdef CRD600
#define USE_SD_PINS_FOR_PROFILING


#include <mculib_c28x/f2837xd/system/system.h>
#include <mculib_c28x/f2837xd/gpio/gpio.h>
#include <emblib/core.h>
#include <emblib/array.h>
#include <math.h>


namespace bsp {

class crd600
{
public:
    static const int phase_count = 6;

    SCOPED_ENUM_UT_DECLARE_BEGIN(Phase, uint32_t) {
        u,
        v,
        w,
        x,
        y,
        z
    } SCOPED_ENUM_DECLARE_END(Phase)
private:
    static const emb::array<mcu::gpio::Config, phase_count> psdis_pins_configs;
    static const emb::array<mcu::gpio::Config, phase_count> len_pins_configs;
    static const emb::array<mcu::gpio::Config, phase_count> ocen_pins_configs;
    static const emb::array<mcu::gpio::Config, phase_count> fault_pins_configs;
    static const mcu::gpio::Config fault_uvw_pin_config;
    static const mcu::gpio::Config fault_xyz_pin_config;
    static const mcu::gpio::Config fault_all_pin_config;
    static const mcu::gpio::Config shutdown_pos15v_pin_config;

    #ifdef USE_SD_PINS_FOR_PROFILING
    static const mcu::gpio::Config profiler_pin_c1_config;
    static const mcu::gpio::Config profiler_pin_c2_config;
    static const mcu::gpio::Config profiler_pin_c3_config;
    static const mcu::gpio::Config profiler_pin_d1_config;
    static const mcu::gpio::Config profiler_pin_d2_config;
    static const mcu::gpio::Config profiler_pin_d3_config;
    #endif

    static emb::array<mcu::gpio::Output, phase_count> psdis_pins;
    static emb::array<mcu::gpio::Output, phase_count> len_pins;
    static emb::array<mcu::gpio::Output, phase_count> ocen_pins;
    static mcu::gpio::Output shutdownPos15VPin;
public:
    static emb::array<mcu::gpio::Input, phase_count> fault_pins;
    static mcu::gpio::Input fault_uvw_pin;
    static mcu::gpio::Input fault_xyz_pin;
    static mcu::gpio::Input fault_all_pin;

    static const mcu::gpio::Config led_red_config;
    static const mcu::gpio::Config led_yellow_config;
    static const mcu::gpio::Config led_green_config;

    static mcu::gpio::Output led_red;
    static mcu::gpio::Output led_yellow;
    static mcu::gpio::Output led_green;

#ifdef USE_SD_PINS_FOR_PROFILING
    static mcu::gpio::Output profiler_pin_c1;
    static mcu::gpio::Output profiler_pin_c2;
    static mcu::gpio::Output profiler_pin_c3;
    static mcu::gpio::Output profiler_pin_d1;
    static mcu::gpio::Output profiler_pin_d2;
    static mcu::gpio::Output profiler_pin_d3;
#endif

    static void init();
    static void enable_driver_power_supply(Phase phase) { psdis_pins[phase.underlying_value()].reset(); }
    static void enable_driver_power_supply() {
        enable_driver_power_supply(Phase::u);
        enable_driver_power_supply(Phase::v);
        enable_driver_power_supply(Phase::w);
        enable_driver_power_supply(Phase::x);
        enable_driver_power_supply(Phase::y);
        enable_driver_power_supply(Phase::z);
    }

    static void disable_driver_power_supply(Phase phase) { psdis_pins[phase.underlying_value()].set(); }
    static void disable_driver_power_supply() {
        disable_driver_power_supply(Phase::u);
        disable_driver_power_supply(Phase::v);
        disable_driver_power_supply(Phase::w);
        disable_driver_power_supply(Phase::x);
        disable_driver_power_supply(Phase::y);
        disable_driver_power_supply(Phase::z);
    }

    static void enable_driver_logic(Phase phase) { len_pins[phase.underlying_value()].set(); }
    static void enable_driver_logic() {
        enable_driver_logic(Phase::u);
        enable_driver_logic(Phase::v);
        enable_driver_logic(Phase::w);
        enable_driver_logic(Phase::x);
        enable_driver_logic(Phase::y);
        enable_driver_logic(Phase::z);
    }

    static void disable_driver_logic(Phase phase) { len_pins[phase.underlying_value()].reset(); }
    static void disable_driver_logic() {
        disable_driver_logic(Phase::u);
        disable_driver_logic(Phase::v);
        disable_driver_logic(Phase::w);
        disable_driver_logic(Phase::x);
        disable_driver_logic(Phase::y);
        disable_driver_logic(Phase::z);
    }

    static void reset_all_drivers();
    static bool has_driver_fault(Phase phase) {
        if (GPIO_readPin(fault_pins[phase.underlying_value()].no()) == 0) {
            return true;
        }
        return false;
    }

    static void enable_pos_15v() { shutdownPos15VPin.reset(); }
    static void disable_pos_15v() { shutdownPos15VPin.set(); }
};

} // namespace crd600


#endif


