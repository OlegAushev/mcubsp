#pragma once


#ifdef MCUDRV_STM32
#ifdef STM32F446_NUCLEO


// USART2
#define CN9_4_USART_B_RX_PORT       GPIOD
#define CN9_4_USART_B_RX_PIN        GPIO_PIN_6
#define CN9_4_USART_B_RX_AF         GPIO_AF7_USART2

#define CN9_6_USART_B_TX_PORT       GPIOD
#define CN9_6_USART_B_TX_PIN        GPIO_PIN_5
#define CN9_6_USART_B_TX_AF         GPIO_AF7_USART2


// CAN1
#define CN9_25_CAN1_RX_PORT         GPIOD
#define CN9_25_CAN1_RX_PIN          GPIO_PIN_0
#define CN9_25_CAN1_RX_AF           GPIO_AF9_CAN1

#define CN9_27_CAN1_TX_PORT         GPIOD
#define CN9_27_CAN1_TX_PIN          GPIO_PIN_1
#define CN9_27_CAN1_TX_AF           GPIO_AF9_CAN1


#define CN7_2_CAN1_RX_PORT          GPIOB
#define CN7_2_CAN1_RX_PIN           GPIO_PIN_8
#define CN7_2_CAN1_RX_AF            GPIO_AF9_CAN1

#define CN7_4_CAN1_TX_PORT          GPIOB
#define CN7_4_CAN1_TX_PIN           GPIO_PIN_9
#define CN7_4_CAN1_TX_AF            GPIO_AF9_CAN1


// CAN2
#define CN12_29_CAN2_RX_PORT        GPIOB
#define CN12_29_CAN2_RX_PIN         GPIO_PIN_5
#define CN12_29_CAN2_RX_AF          GPIO_AF9_CAN2

#define CN12_17_CAN2_TX_PORT        GPIOB
#define CN12_17_CAN2_TX_PIN         GPIO_PIN_6
#define CN12_17_CAN2_TX_AF          GPIO_AF9_CAN2


// TIM1
#define CN10_4_TIM1_CH1_PORT        GPIOE
#define CN10_4_TIM1_CH1_PIN         GPIO_PIN_9
#define CN10_4_TIM1_CH1_AF          GPIO_AF1_TIM1

#define CN10_6_TIM1_CH2_PORT        GPIOE
#define CN10_6_TIM1_CH2_PIN         GPIO_PIN_11
#define CN10_6_TIM1_CH2_AF          GPIO_AF1_TIM1

#define CN10_10_TIM1_CH3_PORT       GPIOE
#define CN10_10_TIM1_CH3_PIN        GPIO_PIN_13
#define CN10_10_TIM1_CH3_AF         GPIO_AF1_TIM1

#define CN10_18_TIM1_CH1N_PORT      GPIOE
#define CN10_18_TIM1_CH1N_PIN       GPIO_PIN_8
#define CN10_18_TIM1_CH1N_AF        GPIO_AF1_TIM1

#define CN10_24_TIM1_CH2N_PORT      GPIOE
#define CN10_24_TIM1_CH2N_PIN       GPIO_PIN_10
#define CN10_24_TIM1_CH2N_AF        GPIO_AF1_TIM1

#define CN10_26_TIM1_CH3N_PORT      GPIOE
#define CN10_26_TIM1_CH3N_PIN       GPIO_PIN_12
#define CN10_26_TIM1_CH3N_AF        GPIO_AF1_TIM1

#define CN10_30_TIM1_BKIN_PORT      GPIOE
#define CN10_30_TIM1_BKIN_PIN       GPIO_PIN_15
#define CN10_30_TIM1_BKIN_AF        GPIO_AF1_TIM1


#endif
#endif