#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <iomanip>
using std::setw;

int main() {

    char a = 33;

    cout << endl;
    cout << "| Decimal | Caracter |" << endl;
    for (a; a < 127; a++)
        cout << "|   " << setw(3) << int(a) << 
        "   |   " << setw(3) << a << "    |" << endl;
    cout << endl;
    
    return 0;
}