#ifndef AGENDA_H 
#define AGENDA_H

#include <string>
#include "Pessoa.h"

using namespace std;

class Agenda {
public:
   Agenda();

   void armazenaPessoa(string nome, int idade, float altura);
   void armazenaPessoa(const Pessoa &p);

   void removePessoa(string nome);

   // informa em que posição da agenda está a pessoa
   int buscaPessoa(string nome) const;
   // imprime todos os dados de todas as pessoas da agenda
   void imprimePovo() const; 
   // imprime os dados da pessoa que está na posição 'i' da agenda
   void imprimePessoa(int i) const; 

private:
   Pessoa pessoas[10];
};

#endif 

