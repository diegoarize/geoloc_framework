#ifndef SISTEMA_MAPA_H

#define SISTEMA_MAPA_H
#include <string>
#include <iostream>
#include <list>

using namespace std;

class SistemaMapa {
public :
	//TODO: Criar um metodo main pra ser o inicializador da aplicação(talvez numa classe main)
	//e isso instancia o Singleton e faz chamadas de input
	static SistemaMapa instance; //Singleton
    list<Pin>  &listarPins();
	Pin  buscarPin(const std::string &id) const;
	void  cadastrarPin(const FormularioDoPin &formulario);
	void  criarFormulario(usuario us);
	void  exibirRelatorio();
    FormularioDoPin gerarFormulario();
    string getIp() const  { return ip;}
    void setIp(const string &nIp) { ip = nIp;}
private:
    ValidadorDoPin    validador;
    Mapa              mapa;
    Relatorio         relatorio;
    bool  			  validadorDoPin(const FormularioDoPin &formulario);
	string			  ip;
     		  
}

#endif