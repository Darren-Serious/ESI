/*
 * f2806x_gpio.c
 *
 *  Created on: Dec 17, 2023
 *      Author: darren
 */
#include "tms320f2806x_gpio.h"


static enum gpio_port get_gpio_port(enum gpio_pins pin_num) {
    enum gpio_port port;
    if (pin_num <= 31) {
        if (pin_num <= 15)
            port = GPA1;
        else
            port = GPA2;
    } else {
        if (pin_num <= 47)
            port = GPB1;
        else
            port = GPB2;
    }
    return port;
}

void f2806x_set_gpio_function(enum gpio_port port, Uint32 pin_function) {
    switch (port) {
        case GPA1:
            GpioCtrlRegs.GPAMUX1.all &= pin_function;
            break;
        case GPA2:
            GpioCtrlRegs.GPAMUX2.all &= pin_function;
            break;
        case GPB1:
            GpioCtrlRegs.GPBMUX1.all &= pin_function;
            break;
        case GPB2:
            GpioCtrlRegs.GPBMUX2.all &= pin_function;
            break;
        default:
            break;
    }
}

void f2806x_set_gpio_direction(enum gpio_port port, enum gpio_pins pin_num, Uint8 direction) {
    switch (port) {
        case GPA1:
        case GPA2:
            if (direction == 1) // output
                GpioCtrlRegs.GPADIR.all |= BIT(pin_num); // write 1
            else   // input
                GpioCtrlRegs.GPADIR.all &= ~BIT(pin_num); // write 0
            break;
        case GPB1:
        case GPB2:
            if (direction == 1) // output
                GpioCtrlRegs.GPBDIR.all |= BIT(pin_num - 32); // write 1
            else    // input
                GpioCtrlRegs.GPBDIR.all &= ~BIT(pin_num - 32); // write 0
            break;
        default:
            break;
    }
}

void f2806x_set_bit(enum gpio_port port, enum gpio_pins pin_num, Uint8 data) {
    switch (port) {
        case GPA1:
        case GPA2:
            if (data == 1) // output high
                GpioDataRegs.GPADAT.all |= BIT(pin_num); // write 1
            else    // output low
                GpioDataRegs.GPADAT.all &= ~BIT(pin_num); // write 0
            break;
        case GPB1:
        case GPB2:
            if (data == 1) // output high
                GpioDataRegs.GPBDAT.all |= BIT(pin_num - 32); // write 1
            else    // output low
                GpioDataRegs.GPBDAT.all &= ~BIT(pin_num - 32); // write 0
            break;
        default:
            break;
    }
}

void f2806x_gpio_init(enum gpio_pins pin_num, Uint32 pin_function) {

    EALLOW;
    enum gpio_port port = get_gpio_port(pin_num);
    f2806x_set_gpio_function(port, pin_function);
    f2806x_set_gpio_direction(port, pin_num,1);
    f2806x_set_bit(port, pin_num, 0);
    // set GPIO direction

    EDIS;
}

void GPIO_setPinConfig(Uint32 pinConfig) {

    Uint32 muxReg, pinMask, shiftAmt;

    muxReg = (pinConfig & (Uint32)0x0CU) >> 2;
    shiftAmt = ((pinConfig >> 8) & (Uint32)0xFFU);
    pinMask = (Uint32)0x3U << shiftAmt;

    EALLOW;

    if (muxReg == 0) {
        GpioCtrlRegs.GPAMUX1.all &= ~pinMask; // Clear fields in MUX register first to avoid glitches
        GpioCtrlRegs.GPAMUX1.all |= ((pinConfig & (Uint32)0x3U) << shiftAmt);   // Write value into MUX register
    } else if (muxReg == 1) {
        GpioCtrlRegs.GPAMUX2.all &= ~pinMask;
        GpioCtrlRegs.GPAMUX2.all |= ((pinConfig & (Uint32)0x3U) << shiftAmt);
    } else if (muxReg == 2) {
        GpioCtrlRegs.GPBMUX1.all &= ~pinMask;
        GpioCtrlRegs.GPBMUX1.all |= ((pinConfig & (Uint32)0x3U) << shiftAmt);
    } else if (muxReg == 3) {
        GpioCtrlRegs.GPBMUX2.all &= ~pinMask;
        GpioCtrlRegs.GPBMUX2.all |= ((pinConfig & (Uint32)0x3U) << shiftAmt);
    }

    EDIS;
}

void GPIO_setPadConfig(Uint32 pin, Uint32 pinType) {

    Uint32 pinMask, Gmux;

    //
    // Check the arguments.
    //
    // ASSERT(GPIO_isPinValid(pin));

    pinMask = (Uint32)1U << (pin % 32U);
    Gmux = pin / 32U;

    EALLOW;

    //
    // Enable pull-up if necessary
    //
    if ((pinType & GPIO_PIN_PULLUP_ENABLE) != 0U) {
        if (Gmux == 0) // GPA
            GpioCtrlRegs.GPAPUD.all &= ~pinMask;
        else
            GpioCtrlRegs.GPBPUD.all &= ~pinMask;
    } else {
        if (Gmux == 0) // GPA
            GpioCtrlRegs.GPAPUD.all |= pinMask;
        else
            GpioCtrlRegs.GPBPUD.all |= pinMask;
    }

    EDIS;
}

void GPIO_setDirectionMode(Uint32 pin, GPIO_Direction pinIO) {

    Uint32 pinMask, Gmux;

    //
    // Check the arguments.
    //
    //ASSERT(GPIO_isPinValid(pin));

    pinMask = (Uint32)1U << (pin % 32U);
    Gmux = pin / 32U;

    EALLOW;

    //
    // Set the data direction
    //
    if (pinIO == GPIO_DIR_MODE_OUT) {
        if (Gmux == 0) // GPA
            GpioCtrlRegs.GPADIR.all |= pinMask;
        else
            GpioCtrlRegs.GPBDIR.all |= pinMask;
    } else {
        if (Gmux == 0) // GPA
            GpioCtrlRegs.GPADIR.all &= ~pinMask;
        else
            GpioCtrlRegs.GPBDIR.all &= ~pinMask;
    }

    EDIS;
}

void GPIO_writePin(Uint32 pin, Uint32 outVal) {

    Uint32 pinMask, Gmux;

    //
    // Check the arguments.
    //
    //ASSERT(GPIO_isPinValid(pin));


    pinMask = (Uint32)1U << (pin % 32U);
    Gmux = pin / 32U;

    if(outVal == 0U)
    {
        if (Gmux == 0) // GPA
            GpioDataRegs.GPACLEAR.all = pinMask;
        else
            GpioDataRegs.GPBCLEAR.all = pinMask;
    }
    else
    {
        if (Gmux == 0) // GPA
            GpioDataRegs.GPASET.all = pinMask;
        else
            GpioDataRegs.GPBSET.all = pinMask;
    }
}
