#ifndef APPLICATION_H
#define APPLICATION_H
#include "Usuario.h"
#include "ValidadorDoPin.h"
#include "Relatorio.h"
#include "PinApp.h"
#include "util.h"

void menu(Usuario &usuario);
void inicializador();
void inserirDadosDoPin(Pin *p);
#endif