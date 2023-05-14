#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int N = rand() % 7 + 3;
    int A[N], B[N], C[N], D[N], E[N];

    for(int i = 0; i < N; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
        C[i] = A[i] + B[i];
        D[i] = A[i] - B[i];
        E[i] = A[i] * B[i];
    }

    cout << "A =\t";
    for(int i = 0; i < N; i++) {
        cout << A[i] << "\t";
    }
    cout << endl;

    cout << "B =\t";
    for(int i = 0; i < N; i++) {
        cout << B[i] << "\t";
    }
    cout << endl;

    cout << "C =\t";
    for(int i = 0; i < N; i++) {
        cout << C[i] << "\t";
    }
    cout << endl;

    cout << "D =\t";
    for(int i = 0; i < N; i++) {
        cout << D[i] << "\t";
    }
    cout << endl;

    cout << "E =\t";
    for(int i = 0; i < N; i++) {
        cout << E[i] << "\t";
    }
    cout << endl;

    system("pause");
    return 0;
}