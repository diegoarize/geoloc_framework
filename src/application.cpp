#include <iostream>
#include <string>

int main()
{
    SistemaMapa sistema  =  getInstance();
    Usuario usuario("2000.128.60.8", 150.0, 60.0);
    
    sistema.adicionarUsuario(usuario);
    
    menu(*sistema.getUsuarios().begin());
}


void menu(Usuario &usuario)
{
    int op = 0;
    
    
    cout << "== Menu == " << endl;
    cout << "1. Inserir Pin ";
    while (cin >> op) {
        switch (op) {
            case 1:
                //SistemaMapa.criarFormulario(usuario);
                FormularioApp formulario;
                SistemaMapa::getInstance().cadastrarPin(formulario);
                
                break;
                
            default:
                break;
        }
    }
    
    
}

