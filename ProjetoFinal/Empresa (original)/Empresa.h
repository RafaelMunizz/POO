#ifndef EMPRESA_H
#define EMPRESA_H 

#include "PessoaJuridica.h"
#include "Cliente.h"
#include "Funcionario.h"

#include <string>
using std::string;

class Empresa: public PessoaJuridica
{
public:
  Empresa(string n, string cnpj, string rS);
  ~Empresa();

  bool addCliente(const Cliente &);
  bool addFuncionario(const Funcionario &);

  void exibirClientes() const;
  void exibirFuncionarios() const;

  double calcularFolhaDePagamento() const;

private:
  //C++ oferece uma forma melhor de lidar com uma lista/sequência de dados. Veremos em aulas futuras
  Cliente *clientes[100];
  unsigned tClientes;

  Funcionario *funcionarios[100];
  unsigned tFuncionarios;
};

#endif