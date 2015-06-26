#include <iostream>
#include <string>
#include "application.h"
#include "PinApp.h"
#include "Relatorio.h"
#include "RelatorioApp.h"
#include "EstrategiaDeValidacao.h"
#include "SistemaMapa.h"
#include "Usuario.h"


int main()
{
    SistemaMapa sistema  =   SistemaMapa::getInstance();
    Usuario usuario("2000.128.60.8", 150.0, 60.0);
    
    sistema.adicionarUsuario(usuario);
    
    menu(*sistema.getUsuarios().begin());
}


void menu(Usuario &usuario)
{
    int op = 0;
    SistemaMapa sist =   SistemaMapa::getInstance();
    
    cout << "== Menu == " << endl;
    cout << "1. Inserir Pin ";
    while (cin >> op) {
        switch (op) {
            case 1: {
                PinApp p;
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
    SistemaMapa sistema  =   SistemaMapa::getInstance();
    sistema.setValidador(new EstrategiaDeValidacao());
    sistema.setRelatorio(new RelatorioApp());
}

