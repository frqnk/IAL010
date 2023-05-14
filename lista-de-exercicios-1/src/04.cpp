#include <iostream>
using namespace std;
int main() {
    int input, cal = 0;

    do {
        cout << "Escolha o prato:" << endl;
        cout << "1. Vegetariano" << endl;
        cout << "2. Peixe" << endl;
        cout << "3. Frango" << endl;
        cout << "4. Carne" << endl;
        cin >> input;
    }
    while(input != 1 && input != 2 && input != 3 && input != 4);

    switch(input) {
        case 1:
            cal += 180;
            break;
        case 2:
            cal += 230;
            break;
        case 3:
            cal += 250;
            break;
        case 4:
            cal += 350;
            break;
    }

    do {
        cout << "Escolha a sobremesa:" << endl;
        cout << "1. Abacaxi" << endl;
        cout << "2. Sorvete diet" << endl;
        cout << "3. Mousse diet" << endl;
        cout << "4. Mousse de chocolate" << endl;
        cin >> input;
    }
    while(input != 1 && input != 2 && input != 3 && input != 4);

    switch(input) {
        case 1:
            cal += 75;
            break;
        case 2:
            cal += 110;
            break;
        case 3:
            cal += 170;
            break;
        case 4:
            cal += 200;
            break;
    }

    do {
        cout << "Escolha a bebida:" << endl;
        cout << "1. Chá" << endl;
        cout << "2. Suco de laranja" << endl;
        cout << "3. Suco de melão" << endl;
        cout << "4. Refrigerante diet" << endl;
        cin >> input;
    }
    while(input != 1 && input != 2 && input != 3 && input != 4);

    switch(input) {
        case 1:
            cal += 20;
            break;
        case 2:
            cal += 70;
            break;
        case 3:
            cal += 100;
            break;
        case 4:
            cal += 65;
            break;
    }

    cout << "Total de calorias: " << cal << endl;

    system("pause");
    return 0;
}