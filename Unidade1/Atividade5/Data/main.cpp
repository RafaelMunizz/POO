#include "Data.h"

int main() {

    Data dataTest1(01, 11, 50);
    Data dataTest2(10, 33, 99);

    dataTest1.mostrarData();
    dataTest2.mostrarData();

    cout << "\nDias de Março: " << endl;
    for (int i = 1; i < 32; i++) {
        Data Ex(i, 03, 21);
        Ex.mostrarData();
    }
}