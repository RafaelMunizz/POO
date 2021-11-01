#ifndef CONTA_H
#define CONTA_H

#include "./Pessoa/Pessoa.h"
#include "./Pessoa/PessoaFisica.h"
#include "./Pessoa/PessoaJuridica.h"
#include <string>
#include <time.h>

using std::string; using std::to_string;

class Conta {

public:

  Conta(int conta, Pessoa *nome, double saldo = 0.0): conta(conta), nome(nome), saldo(saldo) {}
  
  virtual ~Conta() {}

  virtual bool operator << (double &valor) = 0;
  virtual bool operator >>(double &valor) = 0;
  virtual void extrato() = 0;
  virtual bool transferencia(double valor, Conta &) = 0;

  string Data() {

    string data;
    time_t mytime;

    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    data += to_string(tm.tm_mday) +"/"+ "0" + to_string(tm.tm_mon+1) +"/"+ to_string(tm.tm_year + 1900);
    return data;
  }

  void setSaldo (double &saldo) { this -> saldo = saldo; }

  double getSaldo() const { return saldo; }
  int getConta() const { return conta; }
  string getNome(){ return nome -> getNome(); }

protected:
  int conta;
  Pessoa *nome;
  double saldo;
};

#endif