#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include "Pilha.h"

int main() {
    //Pilha de inteiros
    Pilha<int> pi;
    int popEli;
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    pi.push(10);
    //pi.pop(popEli);
    

    pi.imprimir();
  return 0;
}