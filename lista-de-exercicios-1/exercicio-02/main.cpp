#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int input;
    float valor_arrecadado = 0;

    cout << "Quantos p�ezinhos foram vendidos? ";
    cin >> input;
    valor_arrecadado += input * 0.12;

    cout << "E quantas broas foram vendidas? ";
    cin >> input;
    valor_arrecadado += input * 1.5;

    cout.precision(2);
    cout << "Total arrecadado: R$ " << fixed << valor_arrecadado << endl;
    cout << "Voc� deve guardar na poupan�a R$ " << fixed << valor_arrecadado * 10/100 << endl;
    system("pause");

    return 0;
}