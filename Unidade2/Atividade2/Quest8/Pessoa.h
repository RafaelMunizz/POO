// Interface
#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using namespace std;

class Pessoa {

public:
    Pessoa(string, int, float);

    inline void setNome(string nome) {this->nome = nome;}
    inline void setIdade(int idade) {this->idade = idade;}
    inline void setAltura(float altura) {this->altura = altura;}

    inline string getNome() const {return nome;}
    inline int getIdade() const {return idade;}
    inline float getAltura() const {return altura ;}

    void printPessoa() const;

private:
    string nome;
    int idade;
    float altura;
};

#endif
