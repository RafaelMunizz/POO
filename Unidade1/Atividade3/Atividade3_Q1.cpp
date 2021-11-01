#include <iostream>
#include <string>


int main () {
    std::string name1, name2;

    std::cin >> name1 >> name2;

    int result = name1.compare(name2);

    if (result == 0) std::cout << "As strings sao iguais" << std::endl;
    else if (result > 0) std::cout << name1 << std::endl;
    else std::cout << name2 << std::endl;

    return 0;
}