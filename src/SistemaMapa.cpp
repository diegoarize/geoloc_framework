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
	//TODO: Implementar parte pré validação

	//TODO: Validar o pin

	//TODO: Finalizar cadastro se válido

	//TODO: Caso contrário retornar erro.
}