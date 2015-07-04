#include "util.h"

std::string getDate()
{
	//TODO: transformar em função do util get date
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);

	strftime(buf, sizeof(buf), "%F", &tstruct); //yyyy-mm-dd
	return buf;
}