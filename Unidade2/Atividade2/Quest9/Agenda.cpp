#include <iostream>
#include <string>

#include "Agenda.h"

using namespace std;

int static tam = 0;

Agenda::Agenda() {}

void Agenda::armazenaPessoa(string nome, int idade, float altura) {
    pessoas[tam].setNome(nome);
    pessoas[tam].setIdade(idade);
    pessoas[tam].setAltura(altura);
    tam++;
}

void Agenda::armazenaPessoa(const Pessoa &p) {
    pessoas[tam] = p;
    tam++;
}

void Agenda::removePessoa(string nome) {
    
    for (int j = 0; j < tam; j++){
        if (pessoas[j].getNome() == nome){

            if (pessoas[j+1].getIdade() < 150 && pessoas[j+1].getIdade() > 0){

                while (pessoas[j+1].getIdade() < 150 && pessoas[j+1].getIdade() > 0) {
                    pessoas[j].setNome(pessoas[j+1].getNome());
                    pessoas[j].setIdade(pessoas[j+1].getIdade());
                    pessoas[j].setAltura(pessoas[j+1].getAltura());
                }
            }
            tam--;
        }
    }
}

int Agenda::buscaPessoa(string nome) const {
    for (int j = 0; j < tam; j++){
        if (pessoas[j].getNome() == nome){
            return j;
        }
    }
}

void Agenda::imprimePovo() const {
    for (int j = 0; j < tam; j++){
        
        cout << '\n' <<
        "Nome: " << pessoas[j].getNome() << '\n' <<
        "Idade: " << pessoas[j].getIdade() << '\n' <<
        "Altura: " << pessoas[j].getAltura() << endl;
    }
}

void Agenda::imprimePessoa(int i) const {
    cout << '\n' <<
    "Nome: " << pessoas[i].getNome() << '\n' <<
    "Idade: " << pessoas[i].getIdade() << '\n' <<
    "Altura: " << pessoas[i].getAltura() << endl;
}
