#include <iostream>

int main() {
    
    char nome[10];
    float nota1, nota2, nota3;

    std::cout << "Insira seu nome:";
    std::cin >> nome;
    std::cout << "Insira suas 3 notas separadas por espaço:";
    std::cin >> nota1 >> nota2 >> nota3;

    float resultado = ((nota1*3) + (nota2*4) + (nota3*5))/12;

    std::cout << "O aluno " << nome << " obteve media " << resultado << std::endl;

    return 0;
}