#ifndef ESTRATEGIA_DE_VALIDACAO
#include "ValidadorDoPin.h"
#include "Pin.h"
#include <string>
#include <list>
#include "util.h"

using namespace std;
/**
 * Classe da Aplicação.
 * Implementa a interface Validador do Pin para dar seguimento ao strategy.
 */
class EstrategiaDeValidacao: public ValidadorDoPin{
public:
	EstrategiaDeValidacao() {
		contadorPinsDia = 0;
	}
    virtual bool validarPin(const Pin &pin);

private:
	list<string> logList; //cada item da lista: "yyyy-mm-dd"
	int contadorPinsDia;
};

#endif