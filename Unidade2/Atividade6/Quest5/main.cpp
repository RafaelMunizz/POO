#include <iostream>
#include <string>

using namespace std;

template < class T >
T comparar(const T &a1, const T &a2) {
    if (a1 == a2) return 1;
    return 0;
}

template <>
string comparar(const string &a1, const string &a2) {
    if (a1 == a2) return "1";
    return "0";
}

int main() {

  cout << comparar<int>(5, 5) << endl;
  cout << comparar<float>(5.5, 5.4) << endl;
  cout << comparar<string>("Ele", "Ele") << endl;

  return 0;
}