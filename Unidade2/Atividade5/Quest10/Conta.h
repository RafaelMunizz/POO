#ifndef CONTA_H
#define CONTA_H 

//classe abstrata
#include <string>
using namespace std;

class Conta 
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