#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

class Retangulo {

public:

    Retangulo(float, float);

    inline void setAltura(float pAltura){altura = (pAltura > 0 && pAltura < 20) ? pAltura : 1;}
    inline void setLargura(float pLargura){largura = (pLargura > 0 && pLargura < 20) ? pLargura : 1;}

    inline float getAltura() const {return altura;}
    inline float getLargura() const {return largura;}

    inline float perimetroRetangulo(){return 2*(getAltura() + getLargura());}
    inline float areaRetangulo(){return getAltura() * getLargura();}

private:
    float altura, largura;
};

#endif
