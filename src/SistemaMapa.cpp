#include "SistemaMapa.h"



list<Pin> SistemaMapa::listarPins()
{
	return mapa.getListaPins();
}

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

		cout << pin.getId() +"Pin cadastrado" << endl;
		//inserir pin no Mapa.
		mapa.inserirPin(pin);
        return true;
    }
    else {
		cout << pin.getId() + "Pin nao cadastrado" << endl;
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

const Pin * SistemaMapa::buscarPin(string id)
{
	return mapa.getPin(id);
}
