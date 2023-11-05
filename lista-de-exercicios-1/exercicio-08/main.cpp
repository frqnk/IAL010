#include <iostream>

using namespace std;

int main() {
    unsigned long long int graos_no_quadro, graos_no_tabuleiro;
    // curiosamente o resultado deste exercício é igual a ULLONG_MAX

    for(int quadro = 1; quadro <= 64; quadro++) {
        if(quadro == 1) {
            graos_no_quadro = 1;
            graos_no_tabuleiro = graos_no_quadro;
        }
        else {
            graos_no_quadro *= 2;
            graos_no_tabuleiro += graos_no_quadro;
        }
    }

    cout << graos_no_tabuleiro << endl;
    system("pause");

    return 0;
}