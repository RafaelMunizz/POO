#ifndef PESSOA_H
#define PESSOA_H 

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Pessoa 
{
  friend ostream &operator<<(ostream &o, const Pessoa &p);
public:
  Pessoa(string n) : nome(n) {}

  Pessoa &setNome(string n) {nome = n; return *this;}
  string getNome() const {return nome;}

protected:
  string nome;
};

#endif