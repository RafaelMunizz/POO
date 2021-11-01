#ifndef CONTA_LIMITE_H
#define CONTA_LIMITE_H

#include "./Conta/Conta.h"
#include <vector>
#include <iostream>
using std::cout; using std::endl;

class ContaLimite : public Conta {

public:
  ContaLimite(int conta, Pessoa *nome, double limite = 200.0, double saldo = 0.0) : Conta(conta, nome, saldo), limite(limite) {}
  
  virtual ~ContaLimite() {}

  bool operator <<(double &valor);
  bool operator >>(double &valor);
  bool transferencia(double valor, Conta &) {}

  virtual void extrato() {}

private:
  double limite;
  vector <string> data;
  vector <string> descricao;
  vector <string> valores;
};

#endif