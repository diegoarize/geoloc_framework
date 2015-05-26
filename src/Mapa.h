#ifndef MAPA_H

#define MAPA_H
#include <list>

class Mapa {
public  :
    Mapa() = default;
    Mapa(int tit, double cLat, double cLong, int z, list<Pin> pl) :
        titulo(tit), centerLatitude(cLat), centerLatitude(cLong),
        zoom(z), pinList(pl) {}
    
    int     getTitulo()     const { return titulo; }
    double  getCLatitude()  const { return centerLatitude; }
    double  getCLongitude() const { return centerLongitude; }
    int     getZoom()       const { return zoom; }
    
private :
    int        titulo = 0;
    double     centerLatitude  = 0.0;
    double     centerLongitude = 0.0;
    int        zoom = 0;
    list<Pin>  pinList;
}

#endif