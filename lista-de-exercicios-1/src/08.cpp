#include <iostream>
using namespace std;
int main() {
    float somatorio = 0;

    for(int expoente = 0; expoente < 64; expoente++) {
        float produtorio = 1;
        for(int i = 0; i < expoente; i++) {
            produtorio *= 2;
        }
        somatorio += produtorio;
    }

    cout << somatorio << endl;

    system("pause");
    return 0;
}
