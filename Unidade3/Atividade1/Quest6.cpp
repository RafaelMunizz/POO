#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::fixed; using std::defaultfloat;
using std::left; using std::right;

#include <iomanip>
using std::setw; using std::setprecision;

#include <fstream>
using std::ofstream; using std::ifstream;

struct BYTES {
  char nome[25];
  int tamanho;
};

BYTES dados[18] = {
  {"short_int", sizeof(short int)},
  {"signed_int", sizeof(signed int)},
  {"signed_short_int", sizeof(signed short int)},
  {"unsigned_short_int", sizeof(unsigned short int)},
  {"int", sizeof(int)},
  {"long_int", sizeof(long int)},
  {"signed_long_int", sizeof(signed long int)},
  {"unsigned_int", sizeof(unsigned int)},
  {"unsigned_long_int", sizeof(unsigned long int)},
  {"char", sizeof(char)},
  {"signed_char", sizeof(signed char)},
  {"unsigned_char", sizeof(unsigned char)},
  {"bool", sizeof(bool)},
  {"float", sizeof(float)},
  {"double", sizeof(double)},
  {"long_double", sizeof(long double)},
  {"long_long_int", sizeof(long long int)},
  {"unsigned_long_long_int", sizeof(unsigned long long int)}
};

bool salvar_dados(BYTES c[], int n)
{
  ofstream fout("dados.dat", std::ios::out);

  if (!fout)
    return false;
  
  for (int i = 0 ; i < n ; i++)
    fout << c[i].nome  << ' ' << c[i].tamanho << endl;

  fout.close(); // opcional

  return true;
}

bool listar_todos()
{
  ifstream fin("dados.dat", std::ios::in);

  if (!fin)
    return false;
  
  BYTES c;

  cout << "         NOME "  << "         TAMANHO  " << endl;
  
  cout << fixed;
  while (fin >> c.nome >> c.tamanho)
  {   
    cout << setw(25) << left << c.nome <<  ' ' << setw(7) << c.tamanho <<endl;
  }
  cout << defaultfloat;

  fin.close(); //opcional

  return true;
}

int main() {

    salvar_dados(dados, 18);
    listar_todos();

    return 0;
}