#include "SistemaMapa.h"

using namespace std;

void SistemaMapa::cadastrarPin(const FormularioDoPin &formulario)
{
	//TODO: Implementar parte pré validação

	if(validadorDoPin(formulario)) {
		//TODO: Finalizar cadastro se válido
	} else {
		//TODO: Caso contrário retornar erro.
	}
}

bool SistemaMapa::validadorDoPin(const FormularioDoPin &formulario)
{
	return validador.validarPin(formulario);
}

Pin SistemaMapa::buscarPin(const string &id) const
{
    list<Pin> pins  =  mapa.getPins();
    list<Pin>::const_iterator lb, le;
    
    for (lb = pins.cbegin(), le = pins.cend(); lb != le && lb.getId() != id; ++lb)
        ;
    if (lb == le){
        return 
    }

}