#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "D� o n�mero de elementos do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "D� os elementos do vetor: ";
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // "ICan'tBelieveItCanSort", afinal, por que n�o?
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(vetor[i] < vetor[j]) {
                swap(vetor[i], vetor[j]);
            }
        }
    }

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
