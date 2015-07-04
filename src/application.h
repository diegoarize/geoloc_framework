#ifndef APPLICATION_H
#define APPLICATION_H
#include "Usuario.h"
#include "ValidadorDoPin.h"
#include "Relatorio.h"
#include "PinApp.h"
#include "util.h"
#include <list>

using namespace std;

void menu(Usuario &usuario);
void inicializador();
void inserirDadosDoPin(PinApp *p);
void listarPins(list<Pin> &pins);
#endif