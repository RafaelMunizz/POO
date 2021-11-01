#include <iostream>
using std::cout; using std::endl; using std::cin;
using std::cerr;

#include "TempoZero.h"
#include "Indice.h"

double velocidade(double d, double t)
{
  if (t == 0)
    throw TempoZero(); //lança erro, mas não trata
  
  return d/t;
}
             
double valorIndice(int lista[], int indice) {
    if (indice < 0 || indice > 4)
        throw Indice();
    
    return lista[indice];
}

int main() {

    int lista[5] = {12, 28, 39, 48, 57}, indice;

    cout << "Escolha um indice de 0 a 4 para saber o valor na lista: ";
        
    while(1) {

        cin >> indice;

        try {

            int valor = valorIndice(lista, indice);
            cout << "O valor armazenado neste indice eh: " << valor << ".\n" << endl;
            break;

        } catch(std::runtime_error &e) {

            cout << "Entrando na basica" << endl;
            cerr << e.what() << endl; 
    
        } catch (const Indice &e) {

            cerr << e.what() << endl; 
        }

    }

    //////////////////////////////////////////////////////////////////////////////////
    double vel, dist, tempo;
    int obj = 1;

    cout << "Calculando a velocidade de 3 objetos: " << endl;

    while (obj <= 3) {
        cout << "Objeto " << obj << ": " << endl;
        cout << " Distancia (m): ";
        cin >> dist;
        cout << " Tempo (s): ";
        cin >> tempo;

        //estamos conscientes de que velocidade pode lançar erros/exceções
        try {

            vel = velocidade(dist,tempo);
            cout << " Velocidade " << vel << " m/s" << endl;

        } catch(std::runtime_error &e) {

            cout << "Entrando na basica" << endl;
            cerr << e.what() << endl; //avisando
            obj--; //tratando para que o programa possa continuar rodando

        } catch(TempoZero &e) {

            cout << "Entrando na derivada" << endl;
            cerr << e.what() << endl; //avisando
            obj--; //tratando para que o programa possa continuar rodando

        }
        obj++;
    }
    return 0;
}