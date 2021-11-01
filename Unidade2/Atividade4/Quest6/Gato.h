#ifndef GATO_H
#define GATO_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Gato: public Animal {
  
public:
    
    Gato(string, string);

    void mia() {cout << "O Gato " << getNome() << " da raça " << getRaca() << " mia" << endl;}

};

#endif