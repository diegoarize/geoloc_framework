
#ifndef MAPA_H

#define MAPA_H
#include <list>
#include "Pin.h"

class Mapa {
public  :
    Mapa() = default;
    Mapa(int tit, double cLat, double cLong, int z, std::list<Pin> pl) :
        titulo(tit), centerLatitude(cLat), centerLongitude(cLong),
        zoom(z), pinList(pl) {}
    
    void      inserirPin(const Pin &pin);
    int       getTitulo()     const { return titulo; }
    double    getCLatitude()  const { return centerLatitude; }
    double    getCLongitude() const { return centerLongitude; }
    int       getZoom()       const { return zoom; }
    std::list<Pin> getListaPins()  const { return pinList; }
    std::list<Pin>::const_iterator  _getPin(const std::string &pinId) const;

	const Pin*	  getPin(const std::string &pinId);
    
private :
    int        titulo = 0;
    double     centerLatitude  = 0.0;
    double     centerLongitude = 0.0;
    int        zoom = 0;
    std::list<Pin>  pinList;
};

#endif