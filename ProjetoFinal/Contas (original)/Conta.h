#ifndef CONTA_H
#define CONTA_H

#include <string>
using std::string;

class Conta {
public:
  Conta(int conta, string nome, double saldo = 0.0): conta(conta),nome(nome),saldo(saldo) { tTransacoes = 0; }
  
  virtual ~Conta() {}

  //é igual nos 3 tipos de conta. Não precisa ser virtual
  void deposito(string data, double valor, string descricao)
  {
    OPERACAO operacao = {data, valor, descricao};
    op[tTransacoes++] = operacao;
    saldo += valor;
  }

  //é virtual. Não precisa ser puro. Mas deve ser sobrescrito na classe ContaLimite
  virtual bool retirada(string data, double valor, string descricao)
  {
    if (valor > saldo)
      return false;

    OPERACAO operacao = {data, valor, descricao};
    op[tTransacoes++] = operacao;
    saldo -= valor;

    return true;
  }

  //deve ser virtual puro porque cada classe derivada deve implementar do seu jeito. A classe se torna abstrata porque este método é virtual puro
  virtual void extrato() = 0;

protected:
  int conta;
  string nome;
  double saldo;

  //definição de um registro restrito à classe e derivadas
  struct OPERACAO {
    string data;
    double valor;
    string descricao;
  };

  //Por questões de simplificação, definimos a "lista" de transações como um array de 200 elementos
  OPERACAO op[200];
  int tTransacoes;

};

#endif