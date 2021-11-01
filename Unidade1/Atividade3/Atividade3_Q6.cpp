#include <iostream>

using namespace std;

void letraA () {
    string test = "*";
    for (int i = 1; i < 6; i++){
        cout << test << endl;
        test +='*';
    }
}

void letraB () {
    string test = "*****";
    int j = 4;
    for (int i = 0; i < 5; i++) {
        cout << test << endl;
        test[j--] = 0;
    }
}

void letraC () {
    string test = "*****";
    int j = 0;
    for (int i = 0; i < 5; i++) {
        cout << test << endl;
        test[j++] = ' ';
    }
}

void letraD () {
    string test = "    *";
    int j = 3;
    for (int i = 0; i < 5; i++) {
        cout << test << endl;
        test[j--] = '*';
    }
}

void letraE () {
    string test = "  *  ";
    int j = (test.length()/2) + 1;
    int k = (test.length()/2) - 1;

    while (test != "*****") {
        cout << test << endl;
        test[j++] = '*';
        test[k--] = '*';
    }

    cout << test << endl;

    while (test != "  *  ") {
        test[--j] = ' ';
        test[++k] = ' ';
        cout << test << endl;
    }
}

int main() {

    cout << "Entre com a letra que deseja imprimir ou digite sair para parar a execucao: ";
    string word = " ";

    while (word != "sair") {

        cin >> word;
        if ( word == "a") letraA();
        else if (word == "b") letraB();
        else if (word == "c") letraC();
        else if (word == "d") letraD();
        else if (word == "e") letraE();
        if(word != "sair") cout << "Proxima letra: ";
    }
    
    return 0;
}