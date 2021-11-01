#ifndef CARRO_H
#define CARRO_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Interface
class Carro
{

public:

  Carro(string nome, int cAno);

  void setMarca(string nome);
  void setAno(int cAno);

  string getMarca();
  int getAno();

  void displayMessage();

private:
  string marca;
  int ano;
};

#endif

//Implementação

Carro::Carro(string nome, int cAno)
{ //modificação 1
  setMarca(nome);
  setAno(cAno);
}

void Carro::setMarca(string nome)
{ //modificação 2
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

  void Carro::setAno(int cAno)
  {
      if (cAno < 0)
        ano = 0;
    else if ( cAno > 2021)
        ano = 2021;
    else
        ano = cAno;

  }

string Carro::getMarca()
{
  return marca;
}

int Carro::getAno()
{
  return ano;
}

void Carro::displayMessage()
{
  std::cout << "Olá, eu sou um carro da marca " << getMarca() << "e do ano " << getAno() << endl;
}
