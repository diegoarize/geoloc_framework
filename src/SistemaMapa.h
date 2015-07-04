#ifndef SISTEMA_MAPA_H

#define SISTEMA_MAPA_H
#include <string>
#include <iostream>
#include <list>
#include "ValidadorDoPin.h"
#include "Pin.h"
#include "Usuario.h"
#include "Relatorio.h"
#include "Mapa.h"

using namespace std;

class SistemaMapa {
    
    public :
    list<Pin>  listarPins();
    void  adicionarUsuario(const Usuario &u);
    bool  cadastrarPin(const Pin &pin);
    void  exibirRelatorio();
    Mapa getMapa() const { return mapa;}
    list<Usuario> &getUsuarios() { return listaUsuario; }
    // sigleton
    static SistemaMapa& getInstance()
    {
        static SistemaMapa  instance;
        return instance;
    }
    
    //inicializadores
    void setValidador(ValidadorDoPin *v);
    void setRelatorio(Relatorio *r);
	int	 pinIdGenerator();

	const Pin* buscarPin(string id);
    
private:
    SistemaMapa() {};
   // SistemaMapa(SistemaMapa const&);     // Nao implementa
   // void operator=(SistemaMapa const&); //Nao implementa
    
    std::list<Usuario>     listaUsuario;
    ValidadorDoPin    *validador;
    Mapa              mapa;
    Relatorio         *relatorio;
    bool  			  validadorDoPin(const Pin &formulario);
	int				 pinCounter = 0;
};

#endif