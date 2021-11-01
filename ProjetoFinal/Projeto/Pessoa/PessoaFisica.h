#ifndef PESSOA_FISICA_H
#define PESSOA_FISICA_H 

#include "./Pessoa/Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa {
  
public:

  PessoaFisica(string n, string cpf) : Pessoa(n),cpf(cpf) {}
  ~PessoaFisica(){}

  PessoaFisica &setCPF(string c) {cpf = c; return *this;}
  string getCPF() const {return cpf;}
  
private:
  string cpf;
};

#endif