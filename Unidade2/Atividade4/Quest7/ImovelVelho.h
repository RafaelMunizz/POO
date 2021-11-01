#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include <string>
#include <iostream>
#include "Imovel.h"
using namespace std;

class ImovelVelho : public Imovel {
  
public:
    ImovelVelho(string, float, float);

    void setDesconto(float desconto) {this->desconto = desconto;}
    float getDesconto () {return preco - desconto;}
    
    //Sobrescrevendo método getPreco
    float getPreco() {return getDesconto();}

//membros protected podem ser acessados pelas classes derivadas
protected:
    float desconto;
};

#endif