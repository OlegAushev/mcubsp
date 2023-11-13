#include "crd300.h"


#ifdef CRD300


namespace crd300 {


const emb::array<mcu::GpioConfig, 3> Controller::PSDIS_PINS_CONFIG =
{
	mcu::GpioConfig(131, GPIO_131_GPIO131, mcu::PIN_OUTPUT, emb::ACTIVE_LOW, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(66, GPIO_66_GPIO66, mcu::PIN_OUTPUT, emb::ACTIVE_LOW, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(14, GPIO_14_GPIO14, mcu::PIN_OUTPUT, emb::ACTIVE_LOW, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
};


const emb::array<mcu::GpioConfig, 3> Controller::LEN_PINS_CONFIG =
{
	mcu::GpioConfig(27, GPIO_27_GPIO27, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(64, GPIO_64_GPIO64, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(130, GPIO_130_GPIO130, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
};


const emb::array<mcu::GpioConfig, 3> Controller::OCEN_PINS_CONFIG =
{
	mcu::GpioConfig(25, GPIO_25_GPIO25, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(26, GPIO_26_GPIO26, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
	mcu::GpioConfig(63, GPIO_63_GPIO63, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1),
};


const emb::array<mcu::GpioConfig, 3> Controller::FAULT_PINS_CONFIG =
{
	mcu::GpioConfig(6, GPIO_6_GPIO6, mcu::PIN_INPUT, emb::ACTIVE_LOW, mcu::PIN_PULLUP, mcu::PIN_QUAL_ASYNC, 1),
	mcu::GpioConfig(7, GPIO_7_GPIO7, mcu::PIN_INPUT, emb::ACTIVE_LOW, mcu::PIN_PULLUP, mcu::PIN_QUAL_ASYNC, 1),
	mcu::GpioConfig(8, GPIO_8_GPIO8, mcu::PIN_INPUT, emb::ACTIVE_LOW, mcu::PIN_PULLUP, mcu::PIN_QUAL_ASYNC, 1),
};


const mcu::GpioConfig Controller::SHUTDOWN_POS15V_PIN_CONFIG =
	mcu::GpioConfig(124, GPIO_124_GPIO124, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1);
const mcu::GpioConfig Controller::SHUTDOWN_NEG15V_PIN_CONFIG =
	mcu::GpioConfig(125, GPIO_125_GPIO125, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_SYNC, 1);


const emb::array<mcu::GpioConfig, 4> Controller::LED_PINS_CONFIG =
{
	mcu::GpioConfig(65, GPIO_65_GPIO65, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1),
	mcu::GpioConfig(52, GPIO_52_GPIO52, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1),
	mcu::GpioConfig(41, GPIO_41_GPIO41, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1),
	mcu::GpioConfig(10, GPIO_10_GPIO10, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1),
};


const mcu::GpioConfig Controller::PROFILER_PIN_P22_CONFIG =
	mcu::GpioConfig(22, GPIO_22_GPIO22, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1);
const mcu::GpioConfig Controller::PROFILER_PIN_P111_CONFIG =
	mcu::GpioConfig(111, GPIO_111_GPIO111, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1);
const mcu::GpioConfig Controller::PROFILER_PIN_P56_CONFIG =
	mcu::GpioConfig(56, GPIO_56_GPIO56, mcu::PIN_OUTPUT, emb::ACTIVE_HIGH, mcu::PIN_STD, mcu::PIN_QUAL_ASYNC, 1);


///
///
///
Controller::Controller()
	: emb::c28x::Singleton<Controller>(this)
{
	for (uint32_t i = 0; i < 3; ++i)
	{
		psdisPins[i].init(PSDIS_PINS_CONFIG[i]);
		lenPins[i].init(LEN_PINS_CONFIG[i]);
		ocenPins[i].init(OCEN_PINS_CONFIG[i]);
		faultPins[i].init(FAULT_PINS_CONFIG[i]);
	}

	shutdownPos15VPin.init(SHUTDOWN_POS15V_PIN_CONFIG);
	shutdownNeg15VPin.init(SHUTDOWN_NEG15V_PIN_CONFIG);

#ifndef CRD300_LEDS_NOT_AVAILABLE
	for (int i = 0; i < 4; ++i)
	{
		ledPins[i].init(LED_PINS_CONFIG[i]);
	}
#endif

#ifdef USE_LAUNCHXL_PINS_FOR_PROFILING
	profilerPinP22.init(PROFILER_PIN_P22_CONFIG);
	profilerPinP111.init(PROFILER_PIN_P111_CONFIG);
	profilerPinP56.init(PROFILER_PIN_P56_CONFIG);
#endif
}


///
///
///
void Controller::resetDrivers()
{
	for (int i = 0; i < PHASE_COUNT; ++i)
	{
		ocenPins[i].set(emb::PIN_ACTIVE);
	}
	mcu::delay_us(100);
	for (int i = 0; i < PHASE_COUNT; ++i)
	{
		ocenPins[i].set(emb::PIN_INACTIVE);
	}
	mcu::delay_us(10000);
}


} // namespace crd300


#endif // #ifdef CRD300


