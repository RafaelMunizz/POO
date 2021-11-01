#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#include <iostream>

class Animal {
  
public:
  Animal (string, string);

  Animal &setNome(string nome) { this->nome = nome; return *this;}
  Animal &setRaca(string raca) { this->raca = raca; return *this;}

  string getNome() const {return nome;}
  string getRaca() const {return raca;}

  void caminha() {cout <<  getNome() << " da raça " << getRaca() << " caminha" << endl;}

//membros protected podem ser acessados pelas classes derivadas
protected:
    string nome, raca;

};

#endif