#ifndef SISTEMA_MAPA_H

#define SISTEMA_MAPA_H
#include <string>
#include <iostream>
#include <list>

using namespace std;

class Sistema_Mapa { 
public :
	static Sistema_Mapa instance; //Singleton
    list<Pin>  &listarPins();
	Pin  buscarPin(const std::string &id) const;
	void  cadastrarPin(const FormularioDoPin &formulario);
	void  criarFormulario(usuario us);
	void  exibirRelatorio();
    FormularioDoPin gerarFormulario();
	string getIp();
	void setIp(string ip);
private:
    ValidadorDoPin    validador;
    SistemaMapa       sistMapa;
    Mapa              mapa;
    Relatorio         relatorio;
    bool  			  validadorDoPin(const FormularioDoPin &formulario);
	string			  ip;
     		  
}

#endif