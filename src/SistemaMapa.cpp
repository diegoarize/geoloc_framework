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
	//TODO: Implementar parte pr� valida��o

	if(validadorDoPin(formulario)) {
		//TODO: Finalizar cadastro se v�lido
	} else {
		//TODO: Caso contr�rio retornar erro.
	}

	

	
}

bool SistemaMapa::validadorDoPin(const FormularioDoPin &formulario)
{
	return validador.validarPin(formulario);
}