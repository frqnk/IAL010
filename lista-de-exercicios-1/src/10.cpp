#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int n;

    cout << "Defina o número de elementos: ";
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++) {
        cout << "Defina o valor do " << i+1 << "º elemento: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < n - 1; i++) {
        int posicao_do_menor = i;
        for(int j = i + 1; j < n; j++) {
            if(vetor[j] < vetor[posicao_do_menor]) {
                posicao_do_menor = j;
            }
        }
        if(posicao_do_menor != i) {
            swap(vetor[i], vetor[posicao_do_menor]);
        }
    }

    cout << "Elementos ordenados: ";
    for(int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}
