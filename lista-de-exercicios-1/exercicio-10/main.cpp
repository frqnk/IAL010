#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n;

    cout << "Dê o número de elementos do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "Dê os elementos do vetor: ";
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // Bogosort, afinal, por que não?

    long double n_tentativas = 0;
    for(bool condicao_de_saida = false; condicao_de_saida != true; n_tentativas++) {
        for(int i = 0; i < n-1; i++) {
            if(vetor[i] > vetor[i+1]) {
                break;
            }
            if(i == n-2) {
                condicao_de_saida = true;
            }
        }
        if(condicao_de_saida != true) {
            int posicao_aleatoria;
            for(int i = 0; i < n; i++) {
                posicao_aleatoria = rand() % n;
                swap(vetor[i], vetor[posicao_aleatoria]);
            }
        }
    }

    cout << "Depois de " << n_tentativas << " tentativas:" << endl;

    cout << "vetor[" << n << "] = {";
    for(int i = 0; i < n; i++) {
        cout << vetor[i];
        if(i != n-1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    system("pause");

    return 0;
}
