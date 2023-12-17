#include "pin.h"

int main() {
    
    CPin led("A.4", OUT_PP);
    led.write(HIGH);

    return 0;
}