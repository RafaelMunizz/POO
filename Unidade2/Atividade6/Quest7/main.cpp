#include <iostream>
#include <string>

using namespace std;

#include "Fila.h"

int main() {
    //Fila de inteiros
    Fila<int> pi;
    int popEli;
    pi.push(1);
    pi.push(2);
    pi.push(3);
    pi.push(4);
    pi.push(5);
    pi.push(6);
    pi.push(7);
    pi.imprimir();

    pi.pop(popEli);
    pi.pop(popEli);
    pi.pop(popEli);
    
    pi.imprimir();

    return 0;
}
