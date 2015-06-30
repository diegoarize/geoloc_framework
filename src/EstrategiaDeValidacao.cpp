#include "EstrategiaDeValidacao.h"
#include "Pin.h"

//Implementação da classe
bool EstrategiaDeValidacao::validarPin(const Pin &pin)
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
		string dia = buf;
		

		if (!logList.empty())
		{
			for (auto const& it : logList) { 
				if (dia.compare(it) == 0) {
					contadorPinsDia++;
				}
				else {
					contadorPinsDia = 1;
				}
			}
		}
		else {
			contadorPinsDia = 1;
		}

		//TODO: Salvar em arquivo de log o timestamp da inserção de numero 1 até a ultima (fazer isso no após cadastro do pin).
		logList.push_front(dia);
		return true;
	}
	return false;
}