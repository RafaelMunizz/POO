#ifndef INDICE_H
#define INDICE_H

#include <stdexcept>

class Indice : public std::runtime_error
{
public:
  Indice(const char *e="A lista apenas tem indices de 0 a 4. Escolha um novo indice: "): runtime_error(e) {}
};

#endif