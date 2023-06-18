#include <iostream>
#include <locale>

using namespace std;

bool perfeito(int n) {
    int soma_divisores = 0;
    for(int i = n-1; i > 0; i--) {
        if(n % i == 0) {
            soma_divisores += i;
        }
    }
    if(soma_divisores == n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int input;

    cout << "Dê um número para verificar se é perfeito: ";
    cin >> input;

    if(perfeito(input) == true) {
        cout << "Verdadeiro" << endl;
    }
    else {
        cout << "Falso" << endl;
    }
    system("pause");

    return 0;
}