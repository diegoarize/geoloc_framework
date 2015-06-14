#ifndef ESTRATEGIA_DE_VALIDACAO
#include "ValidadorDoPin.h"
#include <string>
#include <fstream>
#include <streambuf>
#include <list>
#include <time.h>

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
    virtual bool validarPin(FormularioDoPin formPin);

private:
	list<string> logList; //cada item da lista: "yyyy-mm-dd"
	int contadorPinsDia;
};

#endif