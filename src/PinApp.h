#ifndef  PIN_APP_H

#define PIN_APP_H
#include "Pin.h"
class PinApp : public  Pin  {
public :
    enum tipoDoCrime { ASSALTO, ARROMBAMENTO_VEICULAR, SAIDINHA_BANCARIA };
    void setTipoDeCrime(tipoDoCrime c )           { crime  =  c;}
    void setDataDoCrime(const std::string  data) { dataDoCrime  = data; }
	void setCidade(std::string c) { cidade = c; }
    
    
    tipoDoCrime  getTipoDeCrime() const { return crime;      }
    std::string  getDataDoCrime() const { return dataDoCrime;}
	std::string  getCidade()	  const { return cidade; }
private :
    tipoDoCrime  crime;
    std::string  dataDoCrime;
	std::string  cidade;
    
    
};


#endif