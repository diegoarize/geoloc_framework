#include "Mapa.h"

void Mapa::inserirPin(const Pin &pin)
{
    pinList.push_back(pin);
}


list<Pin>::const_iterator Mapa::getPin(const string &pinId) const
{
    list<Pin>::const_iterator lb, le;
    
    for (lb = pinsList.cbegin(), le = pinsList.cend(); lb != le && lb -> getId() != pinId; ++lb)
        ;
    return lb;
    
}