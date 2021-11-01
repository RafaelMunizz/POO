#include <iostream>
#include <string.h>

using std::cin; using std::cout; using std::endl;

int main() {

    char frase[100];

    cin.getline(frase, 100);

    cout << "\nO comprimento da frase eh: " << strlen(frase) << endl;

    cout.width(2*strlen(frase));

    cout << frase << endl;

    return 0;
}