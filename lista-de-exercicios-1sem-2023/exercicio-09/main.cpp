#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int n = rand() % 11 + 5; // de 5 a 15
    int a[n], b[n], c[n], d[n];
    int soma_de_a = 0, soma_de_b = 0, produto_escalar = 0;

    for(int i = 0; i < n; i++) {
        a[i] = rand() % 1000; // de 0 a 999
        b[i] = rand() % 1000;
        c[i] = a[i] + b[i];
        d[i] = a[i] - b[i];
        soma_de_a += a[i];
        soma_de_b += b[i];
        produto_escalar += a[i] * b[i];
    }

    cout << "A[" << n << "] = {\t";
    for(int i = 0; i < n; i++) {
        cout << a[i];
        if(i != n-1) {
            cout << ",";
        }
        cout << "\t";
    }
    cout << "}" << endl;

    cout << "B[" << n << "] = {\t";
    for(int i = 0; i < n; i++) {
        cout << b[i];
        if(i != n-1) {
            cout << ",";
        }
        cout << "\t";
    }
    cout << "}" << endl;

    cout << "C[" << n << "] = {\t";
    for(int i = 0; i < n; i++) {
        cout << c[i];
        if(i != n-1) {
            cout << ",";
        }
        cout << "\t";
    }
    cout << "}" << endl;

    cout << "D[" << n << "] = {\t";
    for(int i = 0; i < n; i++) {
        cout << d[i];
        if(i != n-1) {
            cout << ",";
        }
        cout << "\t";
    }
    cout << "}" << endl;

    cout << "Soma dos elementos de A = " << soma_de_a << endl;
    cout << "Soma dos elementos de B = " << soma_de_b << endl;
    cout << "Produto escalar de A por B = " << produto_escalar << endl;
    system("pause");

    return 0;
}