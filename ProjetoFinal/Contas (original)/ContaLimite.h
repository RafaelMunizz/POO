#ifndef CONTA_LIMITE_H
#define CONTA_LIMITE_H

#include "Conta.h"

#include <iostream>
using std::cout; using std::endl;

class ContaLimite : public Conta
{
public:
  ContaLimite(int conta, string nome, double limite = 200.0, double saldo = 0.0) : Conta(conta, nome, saldo),limite(limite) {}
  
  virtual ~ContaLimite(){}

  //sobrescrevendo método virtual retirada
  virtual bool retirada(string data, double valor, string descricao)
  {
    if (valor > saldo + limite)
      return false;

    OPERACAO operacao = {data, valor, descricao};
    op[tTransacoes++] = operacao;
    saldo -= valor;

    return true;
  }

  //sobrescrevendo método virtual puro extrato
  virtual void extrato()
  {
    cout << "CONTA: " << conta << endl;
    cout << "CLIENTE: " << nome << endl;
    cout << "LIMITE: " << limite << endl;
    cout << "Transações: " << endl;
    for (int i = 0 ; i < tTransacoes ; i++)
      cout << op[i].data << " " << op[i].valor << " " << op[i].descricao << endl;
    cout << "------------------------------" << endl;
    cout << "Saldo: R$ " << saldo << endl;
  }

private:
  double limite;
};

#endif