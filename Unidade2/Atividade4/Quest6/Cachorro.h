#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Cachorro: public Animal {
  
public:
    
    Cachorro(string, string);

    void late() {cout << "O cachorro " << getNome() << " da raça " << getRaca() << " late" << endl;}

};

#endif