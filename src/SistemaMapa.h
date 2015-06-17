#ifndef SISTEMA_MAPA_H

#define SISTEMA_MAPA_H
#include <string>
#include <iostream>
#include <list>
#include "FormularioDoPin.h"
#include "ValidadorDoPin.h"
#include "Pin.h"

using namespace std;

class SistemaMapa {

public :
	//TODO: Criar um metodo main pra ser o inicializador da aplicação(talvez numa classe main)
	//e isso instancia o Singleton e faz chamadas de input
    list<Pin>  &listarPins();
	void  cadastrarPin(const FormularioDoPin &formulario);
	void  criarFormulario(usuario us);
	void  exibirRelatorio();
    FormularioDoPin gerarFormulario();
    string getIp() const  { return ip;}
    void setIp(const string &nIp) { ip = nIp;}

    // sigleton
    static SistemaMapa& getInstance()
    {
        static SistemaMapa  instance;
        return instance;
    }
private:
    SistemaMapa() {}
    SistemaMapa(SistemaMapa const&);     // Nao implementa
    void operator=(SistemaMapa const&); //Nao implementa
    
    ValidadorDoPin    validador;
    Mapa              mapa;
    Relatorio         relatorio;
    bool  			  validadorDoPin(const FormularioDoPin &formulario);
	string			  ip;
     		  
}

#endif