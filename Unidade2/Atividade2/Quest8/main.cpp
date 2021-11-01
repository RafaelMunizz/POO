#include "Pessoa.h"

using namespace std;

int main() {

    Pessoa fulano("Gabriel", 18, 1.80);
    Pessoa ciclano("Mateus", 20, 1.75);

    fulano.printPessoa();
    ciclano.printPessoa();

    return 0;
}