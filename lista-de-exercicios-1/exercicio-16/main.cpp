#include <iostream>
#include <locale>

using namespace std;

bool primo(int n) {
    int n_divisores = 0;
    for(int i = n; i > 0; i--) {
        if(n % i == 0) {
            n_divisores++;
        }
    }
    if(n_divisores == 2) {
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

    if(primo(input) == true) {
        cout << "Verdadeiro" << endl;
    }
    else {
        cout << "Falso" << endl;
    }
    system("pause");

    return 0;
}