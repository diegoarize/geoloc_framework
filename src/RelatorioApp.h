#ifndef RELATORIO_APP_H

#define RELATORIO_APP_H
#include <string>
#include "Relatorio.h"

class RelatorioApp : public Relatorio {
public :
    void exibirRelatorio() const { std::cout << "RANKING " << std::endl <<  "1.Salvador" << std::endl
                                       << "Rio" << std::endl << "São Paulo" << std::endl; }
};

#endif