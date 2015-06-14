#include "EstrategiaDeValidacao.h"

//Implementação da classe
bool EstrategiaDeValidacao::validarPin(FormularioDoPin formPin)
{
	//TODO: Validar Pin somente se o numero de inserções for <=5 em um dia, verificando log.
	if (contadorPinsDia < 5)
	{
		//TODO: transformar em função do util get date
		time_t     now = time(0);
		struct tm  tstruct;
		char       buf[80];
		tstruct = *localtime(&now);

		strftime(buf, sizeof(buf), "%F", &tstruct); //yyyy-mm-dd
		//TODO: transformar em função do util
		string str = buf;
		size_t index= str.find_last_of("-");
		string anoMes = str.substr(0,index);
		string dia = str.substr(index+1);

		for(list<string>::iterator it; it != logList.end(); it++) {
			size_t found = it->find(anoMes);
			if (found!=string::npos) {
				//se encontrou verifica o dia
				size_t i= str.find_last_of("-");
				if(dia.compare(it->substr(i+1)) == 0) {
					contadorPinsDia++;
				}
			}
		}

		//TODO: Salvar em arquivo de log o timestamp da inserção de numero 1 até a ultima (fazer isso no após cadastro do pin).
		logList.push_front(str);
		return true;
	}
	return false;
}