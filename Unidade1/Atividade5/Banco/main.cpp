#include "ContaBanco.h"

int main() {

    ContaBanco contaTest(15000);
    ContaBanco contaTest2(-5000);

    cout << '\n' << contaTest.getSaldo() << endl;
    contaTest.creditar(5000);
    cout << contaTest.getSaldo() << endl;
    contaTest.debitar(10000);
    cout << contaTest.getSaldo() << endl;
    contaTest.debitar(50000);

    cout << '\n' << contaTest2.getSaldo() << endl;
    contaTest2.creditar(5000);
    cout << contaTest2.getSaldo() << endl;

    return 0;
}