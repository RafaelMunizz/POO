#include "Cupom.h"

int main() {

    Cupom cupomTest1("01", "Compra1", 5, 2.50);
    Cupom cupomTest2("02", "Compra2", 10, 7.50);

    cout << '\n'
         << "Cupom Teste1: \n" 
         << "ID: " << cupomTest1.getId() << '\n'
         << "Description: " << cupomTest1.getDescription() << '\n'
         << "Amount: " << cupomTest1.getAmount() << '\n'
         << "Price: " << cupomTest1.getPrice() << '\n'
         << "Total: " << cupomTest1.calculaCupom() << endl;

    cout << '\n'
         << "Cupom Teste2: \n" 
         << "ID: " << cupomTest2.getId() << '\n'
         << "Description: " << cupomTest2.getDescription() << '\n'
         << "Amount: " << cupomTest2.getAmount() << '\n'
         << "Price: " << cupomTest2.getPrice() << '\n'
         << "Total: " << cupomTest2.calculaCupom() << endl;

    return 0;
}