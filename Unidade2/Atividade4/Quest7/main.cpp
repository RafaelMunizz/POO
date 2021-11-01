#include <iostream>

#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

using namespace std;

int main() {

    Imovel casa1("Rua 1", 150000);
    ImovelNovo casa2("Rua 2", 160000, 550.75);
    ImovelVelho casa3("Rua 3", 200000, 14660.58);

    cout << "A residencia casa1 se localiza em " << casa1.getEndereco() << " e custa " << casa1.getPreco() << endl;
    cout << "A residencia casa2 se localiza em " << casa2.getEndereco() << " e custa " << casa2.getPreco() << endl;
    cout << "A residencia casa3 se localiza em " << casa3.getEndereco() << " e custa " << casa3.getPreco() << endl;
    
    return 0;
}