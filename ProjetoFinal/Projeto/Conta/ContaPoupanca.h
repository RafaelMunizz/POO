#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "./Conta/Conta.h"
#include <vector>
#include <iostream>
using std::cout; using std::endl;

class ContaPoupanca : public Conta {

public:
  ContaPoupanca(int conta, Pessoa *nome, string aniversaio, double saldo = 0.0) : Conta(conta, nome, saldo),aniversario(aniversaio) {}
  
  virtual ~ContaPoupanca(){}

  bool operator <<(double &valor);
  bool operator >>(double &valor);
  bool transferencia(double valor, Conta &) {}

  virtual void extrato() {}

private:
  string aniversario;
  vector <string> data;
  vector <string> descricao;
  vector <string> valores;
};

#endif