#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
#include <math.h>

using namespace std;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo(float base, float altura) : FormaBidimensional(3) {setBase(base); setAltura(altura);}

  virtual void desenhar() {
    cout << "  .   " << endl;
    cout << " / \\ " << endl;
    cout << "/   \\" << endl;
    cout << "~~~~~ " << endl;
  }

  void setBase(float base) {this->base = base;}
  float getBase() const {return base;}

  void setAltura(float altura) {this->altura = altura;}
  float getAltura() const {return altura;}

  virtual float calcularArea() {
        float area = (getBase() * getAltura()) / 2;
        return area;
  }
  
  virtual float calcularPerimetro() {
      float perimetro = 3 * getBase();
      return perimetro;
  }

private:
    float base, altura;
};

#endif