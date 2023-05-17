#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int destino, opcao, valor;

    do {
        cout << "Escolha o destino:" << endl;
        cout << "1. Norte" << endl;
        cout << "2. Nordeste" << endl;
        cout << "3. Centro-oeste" << endl;
        cout << "4. Sul" << endl;
        cin >> destino;
    }
    while(destino != 1 && destino != 2 && destino != 3 && destino != 4);

    do {
        cout << "Escolha uma das opções:" << endl;
        cout << "1. Somente ida" << endl;
        cout << "2. Ida e volta" << endl;
        cin >> opcao;
    }
    while(opcao != 1 && opcao != 2);

    switch(opcao) {
        case 1:
            switch(destino) {
                case 1:
                    valor = 500;
                    break;
                case 2:
                    valor = 350;
                    break;
                case 3:
                    valor = 350;
                    break;
                case 4:
                    valor = 300;
                    break;
            }
            break;
        case 2:
            switch(destino) {
                case 1:
                    valor = 900;
                    break;
                case 2:
                    valor = 650;
                    break;
                case 3:
                    valor = 600;
                    break;
                case 4:
                    valor = 550;
                    break;
            }
            break;
    }

    cout << "Valor da passagem: R$ " << valor << endl;

    system("pause");
    return 0;
}