#include <iostream>
using namespace std;
int main() {
    int input;
    float montante = 0;

    cout << "Quantos pãezinhos foram vendidos? ";
    cin >> input;
    montante += input * 0.12;

    cout << "E quantas broas foram vendidas? ";
    cin >> input;
    montante += input * 1.5;

    cout << "Total arrecadado: R$ " << montante << endl;
    cout << "Você deve guardar na poupança R$ " << montante * 10/100 << endl;

    system("pause");
    return 0;
}