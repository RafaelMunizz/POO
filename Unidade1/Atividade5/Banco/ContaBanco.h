#ifndef BANCO_H
#define BANCO_H

#include <string>
#include <iostream>

using namespace std;

// Interface
class ContaBanco
{

public:

  ContaBanco(double saldoInicial);

  void creditar(double quantiaCred);
  void debitar(double quantiaDeb);
  double getSaldo();

private:
  double saldoConta;
};

#endif

// Implementação

ContaBanco::ContaBanco(double saldoInicial){
    if (saldoInicial < 0)
        saldoConta = 0;
    else
        saldoConta = saldoInicial;
}

void ContaBanco::creditar(double quantiaCred){
    saldoConta += quantiaCred;
}

void ContaBanco::debitar(double quantiaDeb) {
    if (quantiaDeb > saldoConta)
        cout << "Debito invalido: Quantia a ser retirada maior que saldo atual" << endl;
    else
        saldoConta = saldoConta - quantiaDeb;
}

double ContaBanco::getSaldo() {
    return saldoConta;
}
