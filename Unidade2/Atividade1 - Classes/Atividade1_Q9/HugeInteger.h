#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
#include <string>

using namespace::std;

class HugeInteger {

public:

    int input (string numero);
    void output (int numero);
    int add (int numero1, int numero2);

    bool isEqualTo (int numero1, int numero2);
    bool isNotEqualTo (int numero1, int numero2); 
    bool isGreaterThan (int numero1, int numero2);
    bool isLessThan (int numero1, int numero2);
    bool isGreaterThanOrIqual (int numero1, int numero2); 
    bool isLessThanOrIqual (int numero1, int numero2);

private:
    string array[40];
};

#endif

int HugeInteger::input (string numero) {
    array[40] = numero;
     
}

void HugeInteger::output (int numero) {

}

int HugeInteger::add (int numero1, int numero2) {

}
