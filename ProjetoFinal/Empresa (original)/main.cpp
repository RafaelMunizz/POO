#include <iostream>
using std::cout; using std::endl;

#include "Empresa.h"
#include "Cliente.h"
#include "Funcionario.h"

int main() {
  Empresa ficticia("Fictícia","000.000.000/1234-00","Fictícia S.A.");

  ficticia.addCliente(Cliente("C1","CPF1","3316-2321"));
  ficticia.addCliente(Cliente("C2","CPF2","1234-4321"));
  ficticia.addCliente(Cliente("C2","CPF1","4567-9746"));

  ficticia.addFuncionario(Funcionario("F1","CPF4","2001001",3000.0,160,160));
  ficticia.addFuncionario(Funcionario("F2","CPF5","2001002",4000.0,180,160));
  ficticia.addFuncionario(Funcionario("F3","CPF6","2001003",6000.0,200,180));

  ficticia.exibirClientes();
  ficticia.exibirFuncionarios();

  cout << "Total folha de pagamento: " << ficticia.calcularFolhaDePagamento() << endl;

  return 0;
}