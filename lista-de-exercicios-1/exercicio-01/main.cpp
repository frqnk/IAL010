#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int input;

    cout << "Quantos cavalos foram comprados para o haras? ";
    cin >> input;

    cout << "Ser�o necess�rias " << input * 4 << " ferraduras" << endl;

    system("pause");
    return 0;
}