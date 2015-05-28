#ifndef SISTEMA_MAPA_H

#define SISTEMA_MAPA_H
#include <string>
#include <iostream>
#include <list>

class Sistema_Mapa { 
public :
    std::list<Pin>  &listarPins();
	Pin  buscarPin(const std::string &id) const;
	void  cadastrarPin(const FormularioDoPin &formulario);
	void  criarFormulario(usuario us);
	void  exibirRelatorio();
    FormularioDoPin gerarFormulario();
private:
    ValidadorDoPin    validador;
    SistemaMapa       sistMapa;
    Mapa              mapa;
    Relatorio         relatorio;
    bool  			  validadorDoPin(const FormularioDoPin &formulario);
     		  
}

#endif