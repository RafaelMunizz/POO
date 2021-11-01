#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main() {
    
    int a = 5, b = 10;
    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}

void swap(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}