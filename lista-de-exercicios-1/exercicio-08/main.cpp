/*
Soma de P.G. = a_1(q^n-1)/(q-1)

Onde:

a_1, a_2, a_3, a_4, ... = 1, 2, 4, 8, ...

q = a_n/a_(n-1) = 2

n = 64

Portanto:

S = 1(2^64-1)/(2-1) = 2^64-1 = 18.446.744.073.709.551.615

Curiosamente esse resultado é igual a ULLONG_MAX
*/

#include <iostream>

using namespace std;

int main() {
    unsigned long long int graos_no_quadro, graos_no_tabuleiro;

    graos_no_quadro = 1;
    graos_no_tabuleiro = graos_no_quadro;

    for(int quadro = 2; quadro <= 64; quadro++) {
        graos_no_quadro *= 2;
        graos_no_tabuleiro += graos_no_quadro;
    }

    cout << graos_no_tabuleiro << endl;
    system("pause");

    return 0;
}