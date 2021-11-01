#include "Empresa.h"

#include <iostream>
using std::cout; using std::endl;

Empresa::Empresa(string n, string cnpj, string rS) : PessoaJuridica(n,cnpj,rS)
{
  tClientes = tFuncionarios = 0;
}

Empresa::~Empresa()
{
  for (int i = 0 ; i < tClientes ; i++)
    delete clientes[i];

  for (int i = 0 ; i < tFuncionarios ; i++)
    delete funcionarios[i];
}


bool Empresa::addCliente(const Cliente &c)
{
  if (tClientes < 100)
  {
    //criando objeto Cliente como copia de c
    clientes[tClientes++] = new Cliente(c);
    
    //tudo certo com a adição
    return true;
  }

  //lista de clientes cheia
  return false;
}


bool Empresa::addFuncionario(const Funcionario &f)
{
  if (tFuncionarios < 100)
  {
    //criando objeto Funcionario como copia de c
    funcionarios[tFuncionarios++] = new Funcionario(f);
    
    //tudo certo com a adição
    return true;
  }

  //lista de clientes cheia
  return false;
}

void Empresa::exibirClientes() const
{
  for (int i = 0 ; i < tClientes ; i++)
    cout << *clientes[i] << endl;
}
  
void Empresa::exibirFuncionarios() const
{
  for (int i = 0 ; i < tFuncionarios ; i++)
    cout << *funcionarios[i] << endl;
}

double Empresa::calcularFolhaDePagamento() const
{
  double totalFolhaPag = 0.0;
  for (int i = 0 ; i < tFuncionarios ; i++)
    totalFolhaPag += funcionarios[i]->calculaSalarioBruto();
  
  return totalFolhaPag;
}