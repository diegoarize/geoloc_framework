#ifndef VALIDADOR_DO_PIN_H
#define VALIDADOR_DO_PIN_H
#include "Pin.h"
//Interface Validador do Pin
//Interface do pattern strategy
class  ValidadorDoPin {
public:
    virtual bool validarPin(const Pin &pin) = 0;//pure-virtual
};
#endif