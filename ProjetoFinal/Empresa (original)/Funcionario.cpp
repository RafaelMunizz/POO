#include "Funcionario.h"

#include <iostream>
using std::ostream; using std::endl;

Funcionario &Funcionario::setCHTrabalhada(int chT)
{
  if (chT >= 0 && chT <= chMensal)
    chTrabalhada = chT;
  
  return *this;
}

ostream &operator<<(ostream &out, const Funcionario &f)
{
  out << "Nome: " << f.getNome() << endl;
  out << "CPF: " << f.getCPF() << endl;
  out << "Matricula: " << f.getMatricula() << endl;
  out << "Salario Base: " << f.salarioBase << endl;
  out << "CH Mensal: " << f.chMensal << endl;
  out << "CH Trabalhada: " << f.chTrabalhada << endl;
  return out;
}