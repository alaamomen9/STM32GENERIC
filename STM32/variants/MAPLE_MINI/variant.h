#ifndef VARIANT_H
#define VARIANT_H

#define LED_BUILTIN PB1

#define MOSI PA7
#define MISO PA6
#define SCK PA5
#define SS PA4

#define SDA PB7
#define SCL PB6

#define VARIANT_PIN_LIST \
    PIN(B,11), \
    PIN(B,10), \
    PIN(B,2), \
    PIN(B,0), \
    PIN(A,7), \
    PIN(A,6), \
    PIN(A,5), \
    PIN(A,4), \
    PIN(A,3), \
    PIN(A,2), \
    PIN(A,1), \
    PIN(A,0), \
    PIN(C,15), \
    PIN(C,14), \
    PIN(C,13), \
    PIN(B,7), \
    PIN(B,6), \
    PIN(B,5), \
    PIN(B,4), \
    PIN(B,3), \
    PIN(A,15), \
    PIN(A,14), \
    PIN(A,13), \
    PIN(A,12), \
    PIN(A,11), \
    PIN(A,10), \
    PIN(A,9), \
    PIN(A,8), \
    PIN(B,15), \
    PIN(B,14), \
    PIN(B,13), \
    PIN(B,12), \
    PIN(B,8), \
    PIN(B,1), \
    PIN(B,9), \
    PIN(D,0), \
    PIN(D,1),
    
#define PIN(a, b) P ## a ## b

enum {
    VARIANT_PIN_LIST
    NUM_PINS,
};
#undef PIN

#endif
