#include <iostream>
#include <string>
#include "application.h"
#include "Relatorio.h"
#include "RelatorioApp.h"
#include "EstrategiaDeValidacao.h"
#include "SistemaMapa.h"


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
    
    while (op != 5) {
		cout << "== Menu == " << endl;
		cout << "1. Inserir Pin " << endl;
		cout << "2. Listar Pins " << endl;
		cout << "3. Buscar Pin  no Mapa" << endl;
		cout << "4. Gerar Relatorio " << endl;
		cout << "5. Sair " << endl;
		cin >> op;
        switch (op) {
            case 1: {
				int pinNumber = sist.pinIdGenerator();
				string id = "#" + to_string(pinNumber);//gerando o id do pin
				PinApp p;
				p.setId(id);
				inserirDadosDoPin(&p);
                sist.cadastrarPin(p);
                break;
            }
			case 2: {
				listarPins(sist.listarPins());
				break;
			}
			case 3: {
				//TODO: Buscar determinado pin no mapa
				//TODO: usar o getPin do Mapa.
				//a busca com o id acho mais facil.
				break;
			}
			case 4: {
				//TODO: Gerar o Relatorio.
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

void inserirDadosDoPin(PinApp *p) {
	double longitude, latitude;
	int op;

	string conteudo, cidade;
	cout << "cidade: " << endl;
	cin >> cidade;
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

	p->setLongitude(longitude);
	p->setLatitude(latitude);
	p->setConteudo(conteudo);
	//preferi abstrair isso do input e ja colocar como se o usuario cadastrasse quando ocorresse o crime.
	p->setDataDoCrime(getDate());
	p->setCidade(cidade);

}

void listarPins(list<Pin> &pins)
{
	if (pins.size() > 0)
	{
		for (auto const& it : pins) {
			cout << it.getId() << endl;
		}
	}
	else {
		cout << "Lista de pins vazia" << endl;
	}
}