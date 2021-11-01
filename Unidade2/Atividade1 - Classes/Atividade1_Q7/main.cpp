#include <iostream>

using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t;

    t.printUniversal(); // 24h

    t.printStandard(); // AM/PM
  
  return 0;
}
