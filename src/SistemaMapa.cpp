#include "SistemaMapa.h"

using namespace std;

string SistemaMapa::getIp()
{
	return ip;
}

void SistemaMapa::setIp(string ip)
{
	SistemaMapa::ip = ip;
}

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