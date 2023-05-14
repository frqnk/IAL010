#include <iostream>
using namespace std;
int main() {
    int input;

    cout << "Quantos cavalos foram comprados para o haras? ";
    cin >> input;

    cout << "Serão necessárias " << input * 4 << " ferraduras" << endl;

    system("pause");
    return 0;
}