#include "SistemaMapa.h"

using namespace std;

string Sistema_Mapa::getIp()
{
	return ip;
}

void Sistema_Mapa::setIp(string ip)
{
	Sistema_Mapa::ip = ip;
}

void Sistema_Mapa::cadastrarPin(const FormularioDoPin &formulario)
{
	//TODO: Implementar parte pr� valida��o

	if(validadorDoPin(formulario)) {
		//TODO: Finalizar cadastro se v�lido
	} else {
		//TODO: Caso contr�rio retornar erro.
	}

	

	
}