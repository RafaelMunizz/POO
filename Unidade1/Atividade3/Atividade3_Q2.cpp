#include <iostream>
#include <string>

using namespace std;

int main() {

    char i;
    string name;

    getline(cin, name);

    for ( int i = 0; i < name.length(); i++) {
        name[i] = 'X';
    }

    cout << name << endl;

    return 0;
}