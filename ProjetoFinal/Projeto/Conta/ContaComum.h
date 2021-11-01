#ifndef CONTA_COMUM_H
#define CONTA_COMUM_H

#include "./Conta/Conta.h"
#include <vector>
#include <iostream>
using std::cout; using std::endl;

class ContaComum : public Conta {

public:
  ContaComum(int conta, Pessoa *nome, double saldo = 0.0) : Conta(conta, nome, saldo) {}
  
  virtual ~ContaComum() {}

  bool operator <<(double &valor);
  bool operator >>(double &valor);
  bool transferencia(double valor, Conta &) {}

  virtual void extrato() {}

private:
  vector <string> data;
  vector <string> descricao;
  vector <string> valores;


};

#endif