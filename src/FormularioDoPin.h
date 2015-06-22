#ifndef  FORMULATIO_DO_PIN_H
#include "Usuario.h"
#include "Pin.h"

#define  FORMULATIO_DO_PIN_H
class FormularioDoPin {
public :
    virtual Pin  criarPin(const Usuario &u) ;
}

#endif