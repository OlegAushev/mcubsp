#pragma once


#ifdef STM32H743_NUCLEO


// USART2
#define CN9_USART_B_RX_PORT	GPIOD
#define CN9_USART_B_RX_PIN	GPIO_PIN_6
#define CN9_USART_B_RX_AF	GPIO_AF7_USART2

#define CN9_USART_B_TX_PORT	GPIOD
#define CN9_USART_B_TX_PIN	GPIO_PIN_5
#define CN9_USART_B_TX_AF	GPIO_AF7_USART2

// CAN1
#define CN9_CAN1_RX_PORT	GPIOD
#define CN9_CAN1_RX_PIN		GPIO_PIN_0
#define CN9_CAN1_RX_AF		GPIO_AF9_FDCAN1

#define CN9_CAN1_TX_PORT	GPIOD
#define CN9_CAN1_TX_PIN		GPIO_PIN_1
#define CN9_CAN1_TX_AF		GPIO_AF9_FDCAN1

// CAN2
#define CN12_CAN2_RX_PORT	GPIOB
#define CN12_CAN2_RX_PIN	GPIO_PIN_5
#define CN12_CAN2_RX_AF		GPIO_AF9_FDCAN2

#define CN12_CAN2_TX_PORT	GPIOB
#define CN12_CAN2_TX_PIN	GPIO_PIN_6
#define CN12_CAN2_TX_AF		GPIO_AF9_FDCAN2

// TIM4 OUTPUTS
#define CN12_TIM4_CH1_PORT	GPIOD
#define CN12_TIM4_CH2_PORT	GPIOD
#define CN12_TIM4_CH3_PORT	GPIOD
#define CN12_TIM4_CH4_PORT	GPIOD

#define CN12_TIM4_CH1_PIN	GPIO_PIN_12
#define CN12_TIM4_CH2_PIN	GPIO_PIN_13
#define CN12_TIM4_CH3_PIN	GPIO_PIN_14
#define CN12_TIM4_CH4_PIN	GPIO_PIN_15

#define CN12_TIM4_CH1_AF	GPIO_AF2_TIM4
#define CN12_TIM4_CH2_AF	GPIO_AF2_TIM4
#define CN12_TIM4_CH3_AF	GPIO_AF2_TIM4
#define CN12_TIM4_CH4_AF	GPIO_AF2_TIM4

#endif

