#include <iostream>

#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

using namespace std;

int main() {
  //FormaBidimensional fd(2); // ERRO!!!!

  FormaBidimensional *formas[] = {new Quadrado(3), new Circulo(3), new Triangulo(3, 3)};
  
  formas[0]->desenhar();
  cout << "\nArea do Quadrado: " <<formas[0]->calcularArea() << endl;
  cout << "Perimetro do Quadrado: " <<formas[0]->calcularPerimetro() << endl;

  formas[1]->desenhar();
  cout << "Area do Circulo: " <<formas[1]->calcularArea() << endl;
  cout << "Perimetro do Circulo: " <<formas[1]->calcularPerimetro() << endl;

  formas[2]->desenhar();
  cout << "Area do Triangulo: " <<formas[2]->calcularArea() << endl;
  cout << "Perimetro do Triangulo: " <<formas[2]->calcularPerimetro() << "\n" << endl;

  for (int i = 0 ; i < 3 ; i++) {
    delete formas[i];
  }

  return 0;
}