#include "ImovelVelho.h"

#include <iostream>
#include <string>

using namespace std;

ImovelVelho::ImovelVelho(string endereco, float preco, float desconto) : Imovel(endereco, preco), desconto(desconto) {};
