#include <iostream>

int main() {

   char pontuacoes[4] = {' ','.',',',';'};
   std::string frase;

   getline(std::cin, frase);

   for(int i = 0; i < 4; i++)
      for (int j = 0; j < frase.length(); j++)
         if (frase[j] == pontuacoes[i]) {
            frase.erase(j,1);
            j--;
            }
   
   std::cout << frase << std::endl;

   return 0;
}

