#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int input;
    float montante = 0;

    cout << "Quantos p�ezinhos foram vendidos? ";
    cin >> input;
    montante += input * 0.12;

    cout << "E quantas broas foram vendidas? ";
    cin >> input;
    montante += input * 1.5;

    cout << "Total arrecadado: R$ " << montante << endl;
    cout << "Voc� deve guardar na poupan�a R$ " << montante * 10/100 << endl;

    system("pause");
    return 0;
}