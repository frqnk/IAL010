#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

float volume_da_esfera_de_raio(float r) {
    return (float) 4 / 3 * M_PI * pow(r, 3);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float input;

    cout << "D� o raio da esfera: ";
    cin >> input;

    cout << "Volume aprox.: " << volume_da_esfera_de_raio(input) << endl;
    system("pause");

    return 0;
}