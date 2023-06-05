#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

float volume_da_esfera_de_raio(float raio) {
    return (4 * M_PI * pow(raio, 3)) / 3;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float input;

    cout << "Dê o raio da esfera: ";
    cin >> input;

    cout << "Volume aprox.: " << volume_da_esfera_de_raio(input) << endl;
    system("pause");

    return 0;
}