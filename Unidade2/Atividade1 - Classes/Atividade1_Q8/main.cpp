#include <iostream>

using namespace std;

#include "Retangulo.h"

int main() {

    Retangulo test1(2, 3), test2(44, -9);

    cout << '\n' << test1.areaRetangulo() << endl;
    cout << test1.perimetroRetangulo() << endl;

    cout << '\n' << test2.areaRetangulo() << endl;
    cout << test2.perimetroRetangulo() << endl;

    return 0;
}