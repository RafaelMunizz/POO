#include <iostream>
#include <string>

using namespace std;

int main() {

    int list[5], i;

    for(i = 0; i < 5; i++) {
        cin >> list[i];
    }

    int bigger = list[0], smaller = list[0];

    for(i = 0; i < 5; i++){
        if (list[i] > bigger) bigger = list[i];
        if (list[i] < smaller) smaller = list[i];
    }

    cout << "Menor: " << smaller << "\nMaior: " << bigger << endl;    

    return 0;
}