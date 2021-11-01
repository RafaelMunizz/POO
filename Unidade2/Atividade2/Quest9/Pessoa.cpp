// Implementação
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa() {}

Pessoa::Pessoa(string nome, int idade, float altura){
    setNome(nome);
    setIdade(idade);
    setAltura(altura);
}

void Pessoa::printPessoa() const {
    cout << '\n' <<
    "Nome: " << getNome() << '\n' <<
    "Idade: " << getIdade() << '\n' <<
    "Altura: " << getAltura() << endl;
}