#include <iostream>
#include <string>

using namespace std;

bool containUppercase(string phrase);

int main() {
    
    string phrase;
    cin >> phrase;

    cout << (containUppercase(phrase) ? "Contem maiusculas" : "Nao contem maiusculas") << endl;
    return 0;
}

bool containUppercase(string phrase){

    int i = 0;
    while (phrase[i]) {
        if (isupper(phrase[i])) return 1; 
        i++;
    }
    return 0;
}