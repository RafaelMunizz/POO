#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
#include <math.h>

using namespace std;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado(float lado) : FormaBidimensional(4) {setLado(lado);}

  virtual void desenhar() {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }

  void setLado(float lado) {this->lado = lado;}
  float getLado() const {return lado;}

  virtual float calcularArea() {
        float area = pow(getLado(), 2);
        return area;
  }
  
  virtual float calcularPerimetro() {
      float perimetro = 4 * getLado();
      return perimetro;
  }

private:
    float lado;
};

#endif