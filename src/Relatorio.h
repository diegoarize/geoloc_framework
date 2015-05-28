#ifndef RELATORIO_H
#define RELATORIO_H
#include <list>

class Relatorio {
public :
    Relatorio() = default;
    std::string gerarRelatorio()    const ;
    virtual void exibirRelatorio()  const;
private :
    list<ExibidorDeRel> filtros;

}


#endif