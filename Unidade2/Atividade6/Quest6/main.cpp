#include <iostream>

using namespace std;

#include "Array.h"

int main() {
  Array<int> a1(7);  //array de 7 elementos
  Array<int> a2;     //array de 10 elementos

  cin >> a1;    //lendo array 

  cout << a1;   //escrevendo array

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array<int> a3(a1);

  a3[5] = 100; 

  cout << "a3[5] == " << a3[5] << endl; 

  a2 = a3;

  cout << "a2[5] == " << a3[5] << endl;

  a2[100] = 50;

  return 0;
}