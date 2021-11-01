#include "Pessoa.h"

ostream &operator<<(ostream &o, const Pessoa &p)
{
  o << p.nome;
  return o;
}