#include <iostream>
#include <string>

using namespace std;

#include "HugeInteger.h"

int main() {

    string number = "1200000000", test[40];

    int length = sizeof(test)/sizeof(test[0]);

    //for (int i = 0; i < number.size(); i++) cout << number.at(i) << endl;

    for (int i = 0; i < number.size(); i++) test[i] = number.at(i);

    for (string j : test) cout << j;

    cout << '\n';

    return 0;
}