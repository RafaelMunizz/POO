#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <iomanip>
using std::setprecision; using std::setw;

int main() {

    int fahrenheit = 0;

    cout << endl;

    for (fahrenheit; fahrenheit < 213; fahrenheit++){

        float Celsius = 5.0 / 9.0 * (fahrenheit - 32);

        cout << "Valor em Fahrenheit: " << setw(3) << fahrenheit <<
        " | Valor em Celsius: " << setw(3) << setprecision(5) << Celsius << endl;
    }
    cout << endl;
    
    return 0;
}