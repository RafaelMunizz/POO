#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

// Interface

class Empregado {

public:

    Empregado(string pName, string pSurname, double pSalary); // p = parameter

    void setName(string pName);
    void setSurname(string pSurname);
    void setSalary(double pSalary);

    string getName();
    string getSurname();
    double getSalary();
    void rise(float perc);

private:
    string name; 
    string surname; 
    double salary;
};

#endif

// Implementação

Empregado::Empregado(string pName, string pSurname, double pSalary) {
    setName(pName);
    setSurname(pSurname);
    setSalary(pSalary);
}

void Empregado::setName(string pName) {
    name = pName;
}

void Empregado::setSurname(string pSurname) {
    surname = pSurname;
}

void Empregado::setSalary(double pSalary) {
    if (pSalary < 0)
        salary = 0;
    else
        salary = pSalary;
}

string Empregado::getName() {
    return name;
}

string Empregado::getSurname() {
    return surname;
}

double Empregado::getSalary() {
    return salary;
}

void Empregado::rise(float perc){
    salary += salary * (perc/100.0);
}
