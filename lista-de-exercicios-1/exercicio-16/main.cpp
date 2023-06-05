#include <iostream>
#include <locale>

using namespace std;

bool verifica_primo(int n) {
    int aux = 0;
    for(int i = n; i > 0; i--) {
        if(n % i == 0) {
            aux++;
        }
    }
    if(aux == 2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int input;

    cout << "Dê um número para verificar se é primo: ";
    cin >> input;

    if(verifica_primo(input) == true) {
        cout << "Verdadeiro" << endl;
    }
    else {
        cout << "Falso" << endl;
    }
    system("pause");

    return 0;
}