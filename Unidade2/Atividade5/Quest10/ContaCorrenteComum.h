#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H 

//classe abstrata
#include <string>
#include "Conta.h"

using namespace std;

class ContaCorrenteComum : public Conta 
{
public:
  Conta(int numConta, float saldo, string nome) : numConta(numConta), numSaldo(numSaldo), nome(nome) { }

  //método virtual puro
  virtual int conta() = 0;
  virtual string correntista() = 0;
  virtual float saldo() = 0;

private:
  int numConta;
  float numSaldo;
  string nome;
};

#endif