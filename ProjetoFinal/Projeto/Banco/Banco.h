#ifndef BANCO_H
#define BANCO_H 

#include <string>
#include "./Pessoa/PessoaJuridica.h"
#include "./Pessoa/PessoaFisica.h"
#include "./Conta/ContaComum.h"
#include "./Conta/ContaLimite.h"
#include "./Conta/ContaPoupanca.h"

using namespace std;

class Banco : public PessoaJuridica {

public:

  Banco();
  ~Banco();
  bool Correntista();
  bool CadastrarConta();
  bool RemoverConta(int conta) const;
  bool ConsultarConta(int conta) const;
  bool AtualizarConta(int conta) const;

protected:
  string nome;
  int quant_correntistas = 0, quant_contas = 0;
  Pessoa *correntistas[100];
  Conta *listaContas[100];
};

#endif