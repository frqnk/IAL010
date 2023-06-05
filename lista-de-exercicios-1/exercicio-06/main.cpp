#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, dosagem;
    float peso;

    cout << "Informe a idade do paciente em anos: ";
    cin >> idade;

    cout << "Informe o peso do paciente em kg: ";
    cin >> peso;

    if(idade >= 12) {
        if(peso >= 60) {
            dosagem = 1000;
        }
        else {
            dosagem = 875;
        }
    }
    else {
        if(peso < 5) {
            dosagem = 0;
        }
        else if(peso >= 5 && peso < 9.1) {
            dosagem = 125;
        }
        else if(peso >= 9.1 && peso < 16.1) {
            dosagem = 250;
        }
        else if(peso >= 16.1 && peso < 24.1) {
            dosagem = 375;
        }
        else if(peso >= 24.1 && peso <= 30) {
            dosagem = 500;
        }
        else if(peso > 30) {
            dosagem = 750;
        }
    }

    cout << "Receita: " << dosagem << " mg (" << dosagem * 20/500 << " gotas)" << endl;
    system("pause");

    return 0;
}