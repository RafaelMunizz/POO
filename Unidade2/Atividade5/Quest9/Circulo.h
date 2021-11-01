#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
#include <math.h>

using namespace std;

class Circulo : public FormaBidimensional
{
public:
  Circulo(float raio) : FormaBidimensional(99999) {setRaio(raio);}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  ~ " << endl;
  }

  void setRaio(float raio) {this->raio = raio;}
  float getRaio() const {return raio;}

  virtual float calcularArea() {
        float area = 3.14 * pow(getRaio(), 2);
        return area;
  }
  
  virtual float calcularPerimetro() {
      float perimetro = 2 * 3.14 * getRaio();
      return perimetro;
  }

private:
    float raio;
};

#endif