#include "SistemaMapa.h"

using namespace std;

void SistemaMapa::adicionarUsuario(const Usuario &u)
{
    listaUsuario.push_front(u);//insere na frente pra o usuario atual ser o do inicio de lista
}

bool SistemaMapa::cadastrarPin(const Pin &pin)
{
    //TODO: Implementar parte pr? valida??o
#ifndef NDEBUG
    cerr << "Em cadastrarPin recebendo Pin " + pin.getConteudo() << endl;
#endif
    if(validador -> validarPin(pin)) {
        
        // aqui precisamos das informacoes do usuario que cadastrou este pin!
        //TODO: Mostrar id do pin cadastrado
		cout << "Pin cadastrado" << endl;
        return true;
    }
    else {
		//TODO: Mostrar id do pin cadastrado
		cout << "Pin nao cadastrado" << endl;
        //TODO: Caso contr?rio retornar erro.
        return false;
    }
}

bool SistemaMapa::validadorDoPin(const Pin &pin)
{
    return validador -> validarPin(pin);
}

void SistemaMapa::setValidador(ValidadorDoPin *v)
{
    delete validador;
    validador = v;
}

void SistemaMapa::setRelatorio(Relatorio *r)
{
    delete relatorio;
    relatorio = r;
}

int SistemaMapa::pinIdGenerator()
{
	return ++pinCounter;
}