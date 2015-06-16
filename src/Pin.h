
#ifndef PIN_H
#define PIN_H
#include <iterator>

class Pin {
public :
    Pin() = default;
    Pin(double lat, double lon, int red, int green, int blue, int tam, int dur) :
        latitude(lat), longitude(lon), cor[0](red), cor[1](green), cor[2](blue),
        tamanho(tam), duracao(dur) {}
    int       getId()        const  {  return pinId;     }
    double    getLatitude()  const  {  return latitude;  }
    double    getLongitude() const  {  return longitude; }
    int       getTamanho()   const  {  return tamanho;   }
    int       getDuracao()   const  {  return duracao;   }
    const int *getCor()      const  {  return std::cbegin(cor); }
    
private :
    int     pinId      =  0;
    double  latitude   =  0.0;
    double  longitude  =  0.0;
    int     cor[3];
    int     tamanho    =  0;
    int     duracao    =  0;
}


#endif