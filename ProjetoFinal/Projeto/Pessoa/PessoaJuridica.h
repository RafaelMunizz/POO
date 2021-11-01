#ifndef PESSOA_JURIDICA_H
#define PESSOA_JURIDICA_H 

#include "./Pessoa/Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica : public Pessoa {
  
public:

  PessoaJuridica(string n, string cnpj) : Pessoa(n), cnpj(cnpj) {}
  ~PessoaJuridica() {}

  PessoaJuridica &setCNPJ(string c) {cnpj = c; return *this;}
  string getCNPJ() const {return cnpj;}

private:
  string cnpj;
};

#endif