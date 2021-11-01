#include "ImovelNovo.h"

#include <iostream>
#include <string>

using namespace std;

ImovelNovo::ImovelNovo(string endereco, float preco, float adicional) : Imovel(endereco, preco), adicional(adicional) {};
