#include <iostream>
#include <string>
#include "application.h"
#include "Relatorio.h"
#include "RelatorioApp.h"
#include "EstrategiaDeValidacao.h"
#include "SistemaMapa.h"
#include "Usuario.h"


int main()
{
    SistemaMapa &sistema  =   SistemaMapa::getInstance();
    Usuario usuario("200.128.60.8", 150.0, 60.0);
	inicializador();
    sistema.adicionarUsuario(usuario);
    
    menu(*sistema.getUsuarios().begin());
}


void menu(Usuario &usuario)
{
    int op = 0;
    SistemaMapa &sist =   SistemaMapa::getInstance();
    
    cout << "== Menu == " << endl;
    cout << "1. Inserir Pin ";
    while (cin >> op) {
        switch (op) {
            case 1: {
                PinApp p(""+sist.pinIdGenerator);//gerando o id do pin
                sist.cadastrarPin(p);
                break;
                
            }
            default:  {
                std::cout << "Invalid input" << std::endl;
                break;
            }
        }
    }
    
    
}

void inicializador()
{
    SistemaMapa &sistema  =   SistemaMapa::getInstance();
    sistema.setValidador(new EstrategiaDeValidacao());
    sistema.setRelatorio(new RelatorioApp());
}

void inserirDadosDoPin(PinApp *p, Usuario &u) {
	double longitude, latitude;
	int op;
	std::string conteudo;
	cout << "longitude: " << endl;
	cin >> longitude;
	cout << "Latitude: " << endl;
	cin >> latitude;

	cout << "Tipo de crime: " << endl;
	cout << "1 - ASSALTO" << endl;
	cout << "2 - ARROMBAMENTO_VEICULAR" << endl;
	cout << "3 - SAIDINHA_BANCARIA" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
		p->setTipoDeCrime(PinApp::ASSALTO);
		break;
	case 2:
		p->setTipoDeCrime(PinApp::ARROMBAMENTO_VEICULAR);
		break;
	case 3:
		p->setTipoDeCrime(PinApp::SAIDINHA_BANCARIA);
		break;
	default:
		break;
	}

	cout << "Conteudo: " << endl;
	cin >> conteudo;
	p->setUserIp(u.getIp);
	p->setLongitude(longitude);
	p->setLatitude(latitude);
	p->setConteudo(conteudo);
	p->setDataDoCrime()
}

