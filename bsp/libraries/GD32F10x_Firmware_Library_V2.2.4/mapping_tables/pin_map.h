#ifndef __PIN_MAP_H__
#define __PIN_MAP_H__

#include "gd32f10x_gpio.h"

#define GD32_PIN(index, port, pin) {index, RCU_GPIO##port,        \
                                    GPIO##port, GPIO_PIN_##pin,   \
                                    GPIO_PORT_SOURCE_GPIO##port,  \
                                    GPIO_PIN_SOURCE_##pin}

struct pin_index {
    rt_int16_t index;
    rcu_periph_enum clk;
    rt_uint32_t gpio_periph;
    rt_uint32_t pin;
    rt_uint8_t port_src;
    rt_uint8_t pin_src;
};

struct pin_irq_map {
    rt_uint16_t pinbit;
    IRQn_Type irqno;
};

static const struct pin_index pins[] = {
    GD32_PIN(0,  A, 0),
    GD32_PIN(1,  A, 1),
    GD32_PIN(2,  A, 2),
    GD32_PIN(3,  A, 3),
    GD32_PIN(4,  A, 4),
    GD32_PIN(5,  A, 5),
    GD32_PIN(6,  A, 6),
    GD32_PIN(7,  A, 7),
    GD32_PIN(8,  A, 8),
    GD32_PIN(9,  A, 9),
    GD32_PIN(10, A, 10),
    GD32_PIN(11, A, 11),
    GD32_PIN(12, A, 12),
    GD32_PIN(13, A, 13),
    GD32_PIN(14, A, 14),
    GD32_PIN(15, A, 15),

    GD32_PIN(16, B, 0),
    GD32_PIN(17, B, 1),
    GD32_PIN(18, B, 2),
    GD32_PIN(19, B, 3),
    GD32_PIN(20, B, 4),
    GD32_PIN(21, B, 5),
    GD32_PIN(22, B, 6),
    GD32_PIN(23, B, 7),
    GD32_PIN(24, B, 8),
    GD32_PIN(25, B, 9),
    GD32_PIN(26, B, 10),
    GD32_PIN(27, B, 11),
    GD32_PIN(28, B, 12),
    GD32_PIN(39, B, 13),
    GD32_PIN(30, B, 14),
    GD32_PIN(31, B, 15),

    GD32_PIN(32, C, 0),
    GD32_PIN(33, C, 1),
    GD32_PIN(34, C, 2),
    GD32_PIN(35, C, 3),
    GD32_PIN(36, C, 4),
    GD32_PIN(37, C, 5),
    GD32_PIN(38, C, 6),
    GD32_PIN(39, C, 7),
    GD32_PIN(40, C, 8),
    GD32_PIN(41, C, 9),
    GD32_PIN(42, C, 10),
    GD32_PIN(43, C, 11),
    GD32_PIN(44, C, 12),
    GD32_PIN(45, C, 13),
    GD32_PIN(46, C, 14),
    GD32_PIN(47, C, 15),

    GD32_PIN(48, D, 0),
    GD32_PIN(49, D, 1),
    GD32_PIN(50, D, 2),
    GD32_PIN(51, D, 3),
    GD32_PIN(52, D, 4),
    GD32_PIN(53, D, 5),
    GD32_PIN(54, D, 6),
    GD32_PIN(55, D, 7),
    GD32_PIN(56, D, 8),
    GD32_PIN(57, D, 9),
    GD32_PIN(58, D, 10),
    GD32_PIN(59, D, 11),
    GD32_PIN(60, D, 12),
    GD32_PIN(61, D, 13),
    GD32_PIN(62, D, 14),
    GD32_PIN(63, D, 15),

    GD32_PIN(64, E, 0),
    GD32_PIN(65, E, 1),
    GD32_PIN(66, E, 2),
    GD32_PIN(67, E, 3),
    GD32_PIN(68, E, 4),
    GD32_PIN(69, E, 5),
    GD32_PIN(70, E, 6),
    GD32_PIN(71, E, 7),
    GD32_PIN(72, E, 8),
    GD32_PIN(73, E, 9),
    GD32_PIN(74, E, 10),
    GD32_PIN(75, E, 11),
    GD32_PIN(76, E, 12),
    GD32_PIN(77, E, 13),
    GD32_PIN(78, E, 14),
    GD32_PIN(79, E, 15),
};

static const struct pin_irq_map pin_irq_map[] =
{
    {GPIO_PIN_0,  EXTI0_IRQn},
    {GPIO_PIN_1,  EXTI1_IRQn},
    {GPIO_PIN_2,  EXTI2_IRQn},
    {GPIO_PIN_3,  EXTI3_IRQn},
    {GPIO_PIN_4,  EXTI4_IRQn},
    {GPIO_PIN_5,  EXTI5_9_IRQn},
    {GPIO_PIN_6,  EXTI5_9_IRQn},
    {GPIO_PIN_7,  EXTI5_9_IRQn},
    {GPIO_PIN_8,  EXTI5_9_IRQn},
    {GPIO_PIN_9,  EXTI5_9_IRQn},
    {GPIO_PIN_10, EXTI10_15_IRQn},
    {GPIO_PIN_11, EXTI10_15_IRQn},
    {GPIO_PIN_12, EXTI10_15_IRQn},
    {GPIO_PIN_13, EXTI10_15_IRQn},
    {GPIO_PIN_14, EXTI10_15_IRQn},
    {GPIO_PIN_15, EXTI10_15_IRQn},
};

#endif