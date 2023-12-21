/*
 * f2806x_gpio.h
 *
 *  Created on: Dec 17, 2023
 *      Author: darren
 */

#ifndef __F2806X_GPIO_H__
#define __F2806X_GPIO_H__

#include "F2806x_Device.h"
#include "F2806x_Gpio.h"
#include "tms320f2806x.h"
#include "tms320f2806x_pin_map.h"

/* GPIO mode definitions */
#define GPIO_PIN_PULLUP_ENABLE          0x0000U
#define GPIO_PIN_PULLUP_DISABLE         0x0001U

typedef enum
{
    GPIO_DIR_MODE_IN,                   //!< Pin is a GPIO input
    GPIO_DIR_MODE_OUT                   //!< Pin is a GPIO output
} GPIO_Direction;

/* GPIO pin definitions */
#define GPIO_PIN0                       ~BITS(0,1)                    /*!< GPIO0 */
#define GPIO_PIN1                       ~BITS(2,3)                    /*!< GPIO1 */
#define GPIO_PIN2                       ~BITS(4,5)                    /*!< GPIO2 */
#define GPIO_PIN3                       ~BITS(6,7)                    /*!< GPIO3 */
#define GPIO_PIN4                       ~BITS(8,9)                    /*!< GPIO4 */
#define GPIO_PIN5                       ~BITS(10,11)                  /*!< GPIO5 */
#define GPIO_PIN6                       ~BITS(12,13)                  /*!< GPIO6 */
#define GPIO_PIN7                       ~BITS(14,15)                  /*!< GPIO7 */
#define GPIO_PIN8                       ~BITS(16,17)                  /*!< GPIO8 */
#define GPIO_PIN9                       ~BITS(18,19)                  /*!< GPIO9 */
#define GPIO_PIN10                      ~BITS(20,21)                  /*!< GPIO10 */
#define GPIO_PIN11                      ~BITS(22,23)                  /*!< GPIO11 */
#define GPIO_PIN12                      ~BITS(24,25)                  /*!< GPIO12 */
#define GPIO_PIN13                      ~BITS(26,27)                  /*!< GPIO13 */
#define GPIO_PIN14                      ~BITS(28,29)                  /*!< GPIO14 */
#define GPIO_PIN15                      ~BITS(30,31)                  /*!< GPIO15 */
//
#define GPIO_PIN16                      ~BITS(0,1)                    /*!< GPIO16 */
#define GPIO_PIN17                      ~BITS(2,3)                    /*!< GPIO17 */
#define GPIO_PIN18                      ~BITS(4,5)                    /*!< GPIO18 */
#define GPIO_PIN19                      ~BITS(6,7)                    /*!< GPIO19 */
#define GPIO_PIN20                      ~BITS(8,9)                    /*!< GPIO20 */
#define GPIO_PIN21                      ~BITS(10,11)                  /*!< GPIO21 */
#define GPIO_PIN22                      ~BITS(12,13)                  /*!< GPIO22 */
#define GPIO_PIN23                      ~BITS(14,15)                  /*!< GPIO23 */
#define GPIO_PIN24                      ~BITS(16,17)                  /*!< GPIO24 */
#define GPIO_PIN25                      ~BITS(18,19)                  /*!< GPIO25 */
#define GPIO_PIN26                      ~BITS(20,21)                  /*!< GPIO26 */
#define GPIO_PIN27                      ~BITS(22,23)                  /*!< GPIO27 */
#define GPIO_PIN28                      ~BITS(24,25)                  /*!< GPIO28 */
#define GPIO_PIN29                      ~BITS(26,27)                  /*!< GPIO29 */
#define GPIO_PIN30                      ~BITS(28,29)                  /*!< GPIO30 */
#define GPIO_PIN31                      ~BITS(30,31)                  /*!< GPIO31 */
//
#define GPIO_PIN32                      ~BITS(0,1)                    /*!< GPIO32 */
#define GPIO_PIN33                      ~BITS(2,3)                    /*!< GPIO33 */
#define GPIO_PIN34                      ~BITS(4,5)                    /*!< GPIO34 */
#define GPIO_PIN35                      ~BITS(6,7)                    /*!< GPIO35 */
#define GPIO_PIN36                      ~BITS(8,9)                    /*!< GPIO36 */
#define GPIO_PIN37                      ~BITS(10,11)                  /*!< GPIO37 */
#define GPIO_PIN38                      ~BITS(12,13)                  /*!< GPIO38 */
#define GPIO_PIN39                      ~BITS(14,15)                  /*!< GPIO39 */
#define GPIO_PIN40                      ~BITS(16,17)                  /*!< GPIO40 */
#define GPIO_PIN41                      ~BITS(18,19)                  /*!< GPIO41 */
#define GPIO_PIN42                      ~BITS(20,21)                  /*!< GPIO42 */
#define GPIO_PIN43                      ~BITS(22,23)                  /*!< GPIO43 */
#define GPIO_PIN44                      ~BITS(24,25)                  /*!< GPIO44 */
#define GPIO_PIN45                      ~BITS(26,27)                  /*!< GPIO45 */
#define GPIO_PIN46                      ~BITS(28,29)                  /*!< GPIO46 */
#define GPIO_PIN47                      ~BITS(30,31)                  /*!< GPIO47 */
//
#define GPIO_PIN48                      ~BITS(0,1)                    /*!< GPIO48 */
#define GPIO_PIN49                      ~BITS(2,3)                    /*!< GPIO49 */
#define GPIO_PIN50                      ~BITS(4,5)                    /*!< GPIO50 */
#define GPIO_PIN51                      ~BITS(6,7)                    /*!< GPIO51 */
#define GPIO_PIN52                      ~BITS(8,9)                    /*!< GPIO52 */
#define GPIO_PIN53                      ~BITS(10,11)                  /*!< GPIO53 */
#define GPIO_PIN54                      ~BITS(12,13)                  /*!< GPIO54 */
#define GPIO_PIN55                      ~BITS(14,15)                  /*!< GPIO55 */
#define GPIO_PIN56                      ~BITS(16,17)                  /*!< GPIO56 */
#define GPIO_PIN57                      ~BITS(18,19)                  /*!< GPIO57 */
#define GPIO_PIN58                      ~BITS(20,21)                  /*!< GPIO58 */

enum gpio_pins{
    gpio0=0, gpio1, gpio2, gpio3, gpio4, gpio5, gpio6, gpio7, gpio8, gpio9,
    gpio10,gpio11,gpio12,gpio13,gpio14,gpio15,gpio16,gpio17,gpio18,gpio19,
    gpio20,gpio21,gpio22,gpio23,gpio24,gpio25,gpio26,gpio27,gpio28,gpio29,
    gpio30,gpio31,gpio32,gpio33,gpio34,gpio35,gpio36,gpio37,gpio38,gpio39,
    gpio40,gpio41,gpio42,gpio43,gpio44,gpio45,gpio46,gpio47,gpio48,gpio49,
    gpio50,gpio51,gpio52,gpio53,gpio54,gpio55,gpio56,gpio57,gpio58,gpio59,
    gpio60,gpio61,gpio62,gpio63
};

enum gpio_port{
    GPA1,GPA2,GPB1,GPB2
};


#ifdef __cplusplus
extern "C" {
#endif

/* GPIO parameter initialization */
void f2806x_set_gpio_function(enum gpio_port gpio_port, Uint32 pin_function);
void f2806x_set_gpio_direction(enum gpio_port port, enum gpio_pins pin_num, Uint8 direction);
void f2806x_gpio_init(enum gpio_pins pin_num, Uint32 mode);


void GPIO_setPinConfig(Uint32 pinConfig);
void GPIO_setPadConfig(Uint32 pin, Uint32 pinType);
void GPIO_setDirectionMode(Uint32 pin, GPIO_Direction pinIO);
void GPIO_writePin(Uint32 pin, Uint32 outVal);

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* __F2806X_GPIO_H__ */
