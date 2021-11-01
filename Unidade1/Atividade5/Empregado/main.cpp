#include "Empregado.h"

int main() {

    Empregado empregado1("Luiz", "Henrique", -10);
    Empregado empregado2("Rafael", "Victor", 1550.80);
    Empregado empregado3("Ana", "Vitoria", 2000);

    cout << '\n' << "Salario de " << empregado1.getName() << " " << empregado1.getSurname() << " eh de " << empregado1.getSalary() << endl;
    cout << "Salario de " << empregado2.getName() << " " << empregado2.getSurname() << " eh de " << empregado2.getSalary() << endl;
    cout << "Salario de " << empregado3.getName() << " " << empregado3.getSurname() << " eh de " << empregado3.getSalary() << endl;

    empregado2.rise(10);
    empregado3.rise(10);

    cout << '\n' << "Salario de " << empregado2.getName() << " " << empregado2.getSurname() << " eh de " << empregado2.getSalary() << endl;
    cout << "Salario de " << empregado3.getName() << " " << empregado3.getSurname() << " eh de " << empregado3.getSalary() << endl;

    return 0;
}