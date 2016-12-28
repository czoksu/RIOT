/*
 * Copyright (C) 2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @defgroup    boards_stm32f429discovery STM32F429Discovery
 * @ingroup     boards
 * @brief       Board specific files for the STM32F429Discovery board
 * @{
 *
 * @file
 * @brief       Board specific definitions for the STM32F429Discovery evaluation board
 *
 * @author      Dawid Manikowski <ciekacz@gmail.com>
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "cpu.h"
#include "periph_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name xtimer configuration
 * @{
 */
#define XTIMER_DEV          TIMER_DEV(0)
#define XTIMER_CHAN         (0)
#define XTIMER_OVERHEAD     (6)
#define XTIMER_BACKOFF      (10)
/** @} */

/**
 * @name LED pin definitions
 * @{
 */
/** @} */

/**
 * @name Macros for controlling the on-board LEDs.
 * @{
 */
#define LED0_PIN            GPIO_PIN(PORT_G, 13)
#define LED1_PIN            GPIO_PIN(PORT_G, 14)

#define LED_PORT            GPIOG
#define LED0_MASK           (1 << 13)
#define LED1_MASK           (1 << 14)

#define LED0_ON             (LED_PORT->BSRRL = LED0_MASK)
#define LED0_OFF            (LED_PORT->BSRRH = LED0_MASK)
#define LED0_TOGGLE         (LED_PORT->ODR  ^= LED0_MASK)

#define LED1_ON             (LED_PORT->BSRRL = LED1_MASK)
#define LED1_OFF            (LED_PORT->BSRRH = LED1_MASK)
#define LED1_TOGGLE         (LED_PORT->ODR  ^= LED1_MASK)

/** @} */

/**
 * @brief User button
 */
#define BTN_B1_PIN          GPIO_PIN(PORT_A, 0)

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */
/** @} */
