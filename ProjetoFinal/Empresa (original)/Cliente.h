#ifndef CLIENTE_H
#define CLIENTE_H 

#include "PessoaFisica.h"

#include <iostream>
using std::ostream;

#include <string>
using std::string;

class Cliente : public PessoaFisica
{
  friend ostream &operator<<(ostream &, const Cliente &);
public:
  Cliente(string n, string cpf, string tel = "N/I", string end = "N/I") : PessoaFisica(n,cpf),telefone(tel),endereco(end) {}

  Cliente &setTelefone(string t) {telefone = t; return *this;}
  string getTelefone() const {return telefone;}

  Cliente &setEndereco(string e) {endereco = e; return *this;}
  string getEndereco() const {return endereco;}
  
private:
  string telefone;
  string endereco;
};

#endif