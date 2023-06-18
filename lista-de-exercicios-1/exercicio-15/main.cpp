#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int n_zeros_na_matriz_3x3(int m[3][3]) {
    int n_zeros = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(m[j][i] == 0) {
                n_zeros++;
            }
        }
    }
    return n_zeros;
}

int main() {
    srand(time(NULL));

    int m[3][3];

    cout << "matriz[3][3] = {" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "\t{\t";
        for(int j = 0; j < 3; j++) {
            m[j][i] = rand() % 101 - 50; // de -50 a 50
            cout << m[j][i];
            if(j != 2) {
                cout << ",";
            }
            cout << "\t";
        }
        cout << "}";
        if(i != 2) {
            cout << ",";
        }
        cout << endl;
    }
    cout << "}\n" << endl;

    cout << "O zero aparece " << n_zeros_na_matriz_3x3(m);
    if(n_zeros_na_matriz_3x3(m) == 1) {
        cout << " vez";
    }
    else {
        cout << " vezes";
    }
    cout << " nessa matriz\n" << endl;
    system("pause");

    return 0;
}