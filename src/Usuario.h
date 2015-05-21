#ifndef USUARIO_H

#define USUARIO_H
#include <string>

class Usuario {
public :
    Usuario() = default;
    Usuario(std::string usip, double lat, double lon) :
            ip(usip), latitude(lat), longitude(lon) {}
    std::string getIp()   const  {return  ip;}
    double      getLat()  const  {return  latitude;}
    double      getLon()  const  {return  longitude;}

private :
    std::string ip;
    double      latitude   =  0.0;
    double      longitude  =  0.0;
}

#endif