#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int zeros_na_matriz(int m[3][3]) {
    int n = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(m[j][i] == 0) {
                n++;
            }
        }
    }
    return n;
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

    cout << "O zero aparece " << zeros_na_matriz(m);
    if(zeros_na_matriz(m) == 1) {
        cout << " vez";
    }
    else {
        cout << " vezes";
    }
    cout << " nessa matriz\n" << endl;
    system("pause");

    return 0;
}