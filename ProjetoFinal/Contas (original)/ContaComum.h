#ifndef CONTA_COMUM_H
#define CONTA_COMUM_H

#include "Conta.h"

#include <iostream>
using std::cout; using std::endl;

class ContaComum : public Conta
{
public:
  ContaComum(int conta, string nome, double saldo = 0.0) : Conta(conta, nome, saldo) {}
  
  virtual ~ContaComum(){}

  //sobrescrevendo método virtual puro extrato
  virtual void extrato()
  {
    cout << "CONTA: " << conta << endl;
    cout << "CLIENTE: " << nome << endl;
    cout << "Transações: " << endl;
    for (int i = 0 ; i < tTransacoes ; i++)
      cout << op[i].data << " " << op[i].valor << " " << op[i].descricao << endl;
    cout << "------------------------------" << endl;
    cout << "Saldo: R$ " << saldo << endl;
  }
};

#endif