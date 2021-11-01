#include <iostream>

using namespace std;

int function(){
    static int i = 0;
    return i++;
}

int main() {
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;

    return 0;
}