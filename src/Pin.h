
#ifndef PIN_H
#define PIN_H
#include <iterator>
#include <string>

class Pin {
public :
    Pin() = default;
    Pin(double lat, double lon, int tam, int dur) :
        latitude(lat), longitude(lon), tamanho(tam), duracao(dur) {}
	Pin(std::string id) { pinId = id; }
    std::string  getConteudo()  const  {  return conteudo;  }
    std::string  getId()        const  {  return pinId;     }
    double       getLatitude()  const  {  return latitude;  }
    double       getLongitude() const  {  return longitude; }
    int          getTamanho()   const  {  return tamanho;   }
    int          getDuracao()   const  {  return duracao;   }
    int         *getCor()        {  return std::begin(cor); }
    
    void      setConteudo(const std::string &c) { conteudo  =  c ;}
    void      setLatitude(double lat)           { latitude  = lat; }
    void      setLongitude(double lon)          { longitude = lon; }

	void	  setUserIp(std::string ip) { userIp = ip; }
	std::string getUserIp() { return userIp; }
    
private :
    std::string pinId;
    std::string conteudo;
    double      latitude   =  0.0;
    double      longitude  =  0.0;
    int         cor[3];
    int         tamanho    =  0;
    int         duracao    =  0;

	std::string userIp;
};


#endif