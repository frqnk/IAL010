#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int matriz[10][10], x = 0, y = 0;
    // x e y serão as coordenadas do maior valor

    for(int i = 0; i < 10; i++) { // eixo x (coluna)
        for(int j = 0; j < 10; j++) { // eixo y (linha)
            matriz[i][j] = rand() % 100000;
            if(matriz[i][j] > matriz[x][y]) {
                x = i;
                y = j;
            }
        }
    }

    cout << "y" << endl;
    for(int j = 9; j >= 0; j--) { // eixo y (linha)
        cout << j+1;
        if(j == y) {
            cout << "*";
        }
        cout << "\t";
        for(int i = 0; i < 10; i++) { // eixo x (coluna)
            cout << matriz[i][j];
            if(i == x && j == y) {
                cout << "*";
            }
            cout << "\t";
        }
        cout << endl;
        if(j == 0) {
            cout << 0;
            for(int i = 0; i < 10; i++) {
                cout << "\t" << i+1;
                if(i == x) {
                    cout << "*";
                }
            }
            cout << "\tx" << endl;
        }
    }

    cout << "\nLocalização do maior valor: (" << x+1 << ", " << y+1 << ")\n" << endl;
    system("pause");

    return 0;
}