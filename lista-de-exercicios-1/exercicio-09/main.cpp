#include <iostream>
#include <locale>
#include <cfloat>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    long double soma_de_a = 0, soma_de_b = 0, produto_escalar = 0;

    cout << "Dê o número de elementos dos vetores A e B: ";
    cin >> n;

    int a[n], b[n], c[n], d[n];

    cout << "Dê os elementos do vetor A: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        soma_de_a += a[i];
    }

    cout << "Dê os elementos do vetor B: ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        soma_de_b += b[i];
        produto_escalar += (long double) a[i] * b[i];
        c[i] = a[i] + b[i];
        d[i] = a[i] - b[i];
    }

    cout << "Resultados:" << endl;

    cout << "A[" << n << "] = {";
    for(int i = 0; i < n; i++) {
        cout << a[i];
        if(i != n-1) cout << ", ";
    }
    cout << "}" << endl;

    cout << "B[" << n << "] = {";
    for(int i = 0; i < n; i++) {
        cout << b[i];
        if(i != n-1) cout << ", ";
    }
    cout << "}" << endl;

    cout << "C[" << n << "] = {";
    for(int i = 0; i < n; i++) {
        cout << c[i];
        if(i != n-1) cout << ", ";
    }
    cout << "}" << endl;

    cout << "D[" << n << "] = {";
    for(int i = 0; i < n; i++) {
        cout << d[i];
        if(i != n-1) cout << ", ";
    }
    cout << "}" << endl;

    cout.precision(LDBL_DIG);
    cout << "Soma dos elementos de A = " << soma_de_a << endl;
    cout << "Soma dos elementos de B = " << soma_de_b << endl;
    cout << "Produto escalar de A por B = " << produto_escalar << endl;
    system("pause");

    return 0;
}