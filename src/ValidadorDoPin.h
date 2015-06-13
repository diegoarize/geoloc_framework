#ifndef VALIDADOR_DO_PIN_H
#include "FormularioDoPin.h"
//Interface Validador do Pin
//Interface do pattern strategy
class  ValidadorDoPin {
public:
    virtual void validarPin(FormularioDoPin formPin) = 0;//pure-virtual
};
#endif