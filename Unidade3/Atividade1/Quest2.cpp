#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <iomanip>
using std::setprecision;

int main() {

  double valor = 100.453627;
  
  cout << endl;

  for ( int i = 4; i < 8; i++)
    cout << setprecision(i) << "Valor = " << valor << endl;

  cout << endl;

  return 0;
}