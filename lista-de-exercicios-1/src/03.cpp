#include <iostream>
using namespace std;
int main() {
    int input, montante = 0;

    cout << "Qtde. de camisetas P: ";
    cin >> input;
    montante += input * 10;

    cout << "Qtde. de camisetas M: ";
    cin >> input;
    montante += input * 12;

    cout << "Qtde. de camisetas G: ";
    cin >> input;
    montante += input * 15;

    cout << "Valor total: R$ " << montante << endl;

    system("pause");
    return 0;
}