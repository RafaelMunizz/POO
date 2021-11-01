#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include <string>
#include <iostream>
#include "Imovel.h"
using namespace std;

class ImovelNovo : public Imovel {
  
public:
    ImovelNovo(string, float, float);

    void setAdicional(float adicional) {this->adicional = adicional;}
    float getAdicional () {return preco + adicional;}
    
    //Sobrescrevendo método getPreco
    float getPreco() {return getAdicional();}

//membros protected podem ser acessados pelas classes derivadas
protected:
    float adicional;
};

#endif