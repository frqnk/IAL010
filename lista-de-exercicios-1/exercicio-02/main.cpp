#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int input;
    float montante = 0;

    cout << "Quantos pãezinhos foram vendidos? ";
    cin >> input;
    montante += input * 0.12;

    cout << "E quantas broas foram vendidas? ";
    cin >> input;
    montante += input * 1.5;

    cout.precision(2);
    cout << "Total arrecadado: R$ " << fixed << montante << endl;
    cout << "Você deve guardar na poupança R$ " << fixed << montante * 10/100 << endl;
    system("pause");

    return 0;
}