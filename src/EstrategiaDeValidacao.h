#ifndef ESTRATEGIA_DE_VALIDACAO
#include "ValidadorDoPin.h"
/**
 * Classe da Aplicação.
 * Implementa a interface Validador do Pin para dar seguimento ao strategy.
 */
class EstrategiaDeValidacao: public ValidadorDoPin{
public:
    virtual void validarPin(FormularioDoPin formPin);
}

#endif