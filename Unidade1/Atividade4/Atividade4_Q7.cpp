#include <iostream>
#include <string>

using namespace std;

void upperString(string &phrase);

int main() {
    
    string phrase;
    getline(cin, phrase);

    upperString(phrase);
    cout << phrase << endl;

    return 0;
}

void upperString(string &phrase){

    int i = 0;
    while (phrase[i]) {
        if (isupper(phrase[i])) phrase[i] = tolower(phrase[i]); 
        i++;
    }
}