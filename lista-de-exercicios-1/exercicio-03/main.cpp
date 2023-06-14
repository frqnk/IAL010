#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int input, valor_arrecadado = 0;

    cout << "Qtde. de camisetas P: ";
    cin >> input;
    valor_arrecadado += input * 10;

    cout << "Qtde. de camisetas M: ";
    cin >> input;
    valor_arrecadado += input * 12;

    cout << "Qtde. de camisetas G: ";
    cin >> input;
    valor_arrecadado += input * 15;

    cout << "Valor total: R$ " << valor_arrecadado << endl;
    system("pause");

    return 0;
}