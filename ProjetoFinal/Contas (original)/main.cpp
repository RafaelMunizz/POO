#include <iostream>
using std::cout; using std::endl;

#include "ContaComum.h"
#include "ContaPoupanca.h"
#include "ContaLimite.h"

int main() {
  char nomeC[3][100] = {"Comum","Poupanca","Limite"};
  Conta *contas[3] = {new ContaComum(100,"Fulano"),new ContaPoupanca(200,"Sicrano","22/03/1988"), new ContaLimite(300,"Beltrano")};

  for (int i = 0 ; i < 3 ; i++)
  {
    cout << "Operando conta " << nomeC[i] << ": " << endl;
    contas[i]->deposito("27/04/2021",500,"Deposito");

    if (!contas[i]->retirada("27/04/2021",100,"Saque"))
      cout << "Problema com retirada" << endl;
    
    if (!contas[i]->retirada("27/04/2021",300,"Saque"))
      cout << "Problema com retirada" << endl;
    
    if (!contas[i]->retirada("27/04/2021",300,"Saque"))
      cout << "Problema com retirada" << endl;
    
    contas[i]->extrato();

    cout << endl << endl;

    delete contas[i];
  }
  return 0;
}