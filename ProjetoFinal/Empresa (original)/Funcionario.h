#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H 

#include "PessoaFisica.h"

#include <iostream>
using std::ostream;

#include <string>
using std::string;

class Funcionario : public PessoaFisica
{
  friend ostream &operator<<(ostream &, const Funcionario &);
public:
  Funcionario(string n, string cpf, string mat, double salB, int chM, int chT = 0) : PessoaFisica(n,cpf),matricula(mat),salarioBase(salB),chMensal(chM) {setCHTrabalhada(chT);}

  Funcionario &setMatricula(string m) {matricula = m; return *this;}
  string getMatricula() const {return matricula;}

  Funcionario &setSalarioBase(double salB) {salarioBase = salB; return *this;}
  double getSalarioBase() const {return salarioBase;}

  Funcionario &setCHMensal(int chM) {chMensal = chM; return *this;}
  int getCHMensal() const {return chMensal;}

  Funcionario &setCHTrabalhada(int chT);
  int getCHTrabalhada() const {return chTrabalhada;}

  double calculaSalarioBruto() const {return salarioBase * (static_cast<double> (chTrabalhada)/chMensal);}
  
private:
  string matricula;
  double salarioBase;
  int chMensal;
  int chTrabalhada;
};

#endif