#include "Cliente.h"

#include <iostream>
using std::ostream; using std::endl;

ostream &operator<<(ostream &out, const Cliente &c)
{
  out << "Nome: " << c.getNome() << endl;
  out << "CPF: " << c.getCPF() << endl;
  out << "Telefone: " << c.telefone << endl;
  out << "Endereco: " << c.endereco << endl;
  return out;
}