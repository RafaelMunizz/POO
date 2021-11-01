#ifndef PESSOA_H
#define PESSOA_H 

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Pessoa {

public:

  Pessoa(string n) : nome(n) {}
  virtual ~Pessoa() {}

  Pessoa &setNome(string n) { nome = n; return *this; }
  string getNome() const { return nome; }

protected:
  string nome;
};

#endif