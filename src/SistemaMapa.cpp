#include "SistemaMapa.h"

using namespace std;

Pin SistemaMapa::buscarPin(const string &id) const
{
    list<Pin> pins  =  mapa.getPins();
    list<Pin>::const_iterator lb, le;
    
    for (lb = pins.cbegin(), le = pins.cend(); lb != le && lb.getId() != id; ++lb)
        ;
    if (lb == le){
        return 
    }
}