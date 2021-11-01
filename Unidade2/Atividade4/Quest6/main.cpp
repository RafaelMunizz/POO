#include <iostream>
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

using namespace std;

int main() {

    Animal Cavalo("Tornado", "Shire");
    Cachorro cachorro1("Rex", "Boxer");
    Gato gato1("Branquinho", "Siames");

    cachorro1.late();
    gato1.mia();
    gato1.caminha();    

    return 0;
}