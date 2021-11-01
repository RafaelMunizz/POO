#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
using namespace std;

#include <iostream>

class Imovel {
  
public:
    Imovel(string, float);

    Imovel &setEndereco(string endereco) {this->endereco = endereco; return *this;}
    Imovel &setPreco(float preco) {this->preco = preco; return *this;}
    
    string getEndereco() const {return endereco;}
    float getPreco() const {return preco;}

//membros protected podem ser acessados pelas classes derivadas
protected:
    string endereco;
    float preco;
};

#endif