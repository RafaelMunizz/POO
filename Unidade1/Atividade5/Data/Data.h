#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

// Interface

class Data {

public:

    Data(int pDia, int pMes, int pAno); // p = parameter

    void setDia(int pDia);
    void setMes(int pMes);
    void setAno(int pAno);

    int getDia ();
    int getMes ();
    int getAno ();

    void mostrarData();

private:
    int dia;
    int mes;
    int ano;
};

#endif

// Implementacao

Data::Data(int pDia, int pMes, int pAno) {

    setDia(pDia);
    setMes(pMes);
    setAno(pAno);
}

void Data::setDia(int pDia){
    dia = pDia;
}

void Data::setMes(int pMes){
    if ( pMes < 1 || pMes > 12)
        mes = 1;
    else
        mes = pMes;
}

void Data::setAno(int pAno){
    ano = pAno;
}

int Data::getDia () {
    return dia;
}

int Data::getMes () {
    return mes;
}

int Data::getAno () {
    return ano;
}

void Data::mostrarData(){
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}


