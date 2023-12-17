#ifndef __HAL_PIN_H__
#define __HAL_PIN_H__

#include "pin_map.h"

class CPin {

private:
    const char *pin_name; 

public:
    CPin(const char* name);
    ~CPin();
    
    void set_mode(uint8_t mode);
    int get_status();
    void set_status();
    void attach_irq();
    void detach_irq();
    void enable_irq();
};

#endif