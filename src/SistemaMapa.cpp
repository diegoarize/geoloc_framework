#include "SistemaMapa.h"

using namespace std;

void SistemaMapa::adicionarUsuario(const Usuario &u)
{
    listaUsuario.push_back(u);
}

void SistemaMapa::cadastrarPin(Pin &pin)
{
	//TODO: Implementar parte pr� valida��o
#ifndef NDEBUG
    cerr << "Em cadastrarPin recebendo Pin " + pin.getConteudo() << endl;
#endif
	if(validador.validarPin(pin)) {
        
        // aqui precisamos das informacoes do usuario que cadastrou este pin!
        //TODO: Finalizar cadastro se v�lido
	}
    else {
		cout <<
        //TODO: Caso contr�rio retornar erro.
	}
}

bool SistemaMapa::validadorDoPin(const FormularioDoPin &formulario)
{
	return validador.validarPin(formulario);
}

