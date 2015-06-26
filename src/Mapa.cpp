#include "Mapa.h"

void Mapa::inserirPin(const Pin &pin)
{
    pinList.push_back(pin);
}


std::list<Pin>::const_iterator Mapa::getPin(const std::string &pinId) const
{
    std::list<Pin>::const_iterator lb, le;
    
    for (lb = pinList.cbegin(), le = pinList.cend(); lb != le && lb -> getId() != pinId; ++lb)
        ;
    return lb;
    
}