#ifndef PESSOA_JURIDICA_H
#define PESSOA_JURIDICA_H 

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica : public Pessoa
{
public:
  PessoaJuridica(string n, string cnpj, string rS) : Pessoa(n),cnpj(cnpj),razaoSocial(rS) {}

  PessoaJuridica &setCNPJ(string c) {cnpj = c; return *this;}
  
  string getCNPJ() const {return cnpj;}

  PessoaJuridica &setRazaoSocial(string rS) {razaoSocial = rS; return *this;}
  
  string getRazaoSocial() const {return razaoSocial;}
  
private:
  string cnpj;
  string razaoSocial;
};

#endif