#ifndef USUARIO_H

#define USUARIO_H
#include <string>
#include "Pin.h"
#include <list>

class Usuario {
public :
    Usuario() = default;
    Usuario(std::string usip, double lat, double lon) :
            ip(usip), latitude(lat), longitude(lon) {}
    std::string getIp()   const  {return  ip;}
    double      getLat()  const  {return  latitude;}
    double      getLon()  const  {return  longitude;}
    std::list<Pin>   getPins() const  {return  pins;}
    void        adicionarPin(Pin p);
    
private :
    std::string ip;
    double      latitude   =  0.0;
    double      longitude  =  0.0;
    std::list<Pin>   pins;
};

#endif