#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int m1[4][4], m2[4][4], m3[4][4];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            m1[j][i] = rand() % 1000;
            m2[j][i] = rand() % 1000;
            if(m1[j][i] > m2[j][i]) {
                m3[j][i] = m1[j][i];
            }
            else {
                m3[j][i] = m2[j][i];
            }
        }
    }

    cout << "matriz_1[4][4] = {" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "\t{\t";
        for(int j = 0; j < 4; j++) {
            cout << m1[j][i];
            if(j != 3) {
                cout << ",";
            }
            cout << "\t";
        }
        cout << "}";
        if(i != 3) {
            cout << ",";
        }
        cout << endl;
    }
    cout << "}\n" << endl;

    cout << "matriz_2[4][4] = {" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "\t{\t";
        for(int j = 0; j < 4; j++) {
            cout << m2[j][i];
            if(j != 3) {
                cout << ",";
            }
            cout << "\t";
        }
        cout << "}";
        if(i != 3) {
            cout << ",";
        }
        cout << endl;
    }
    cout << "}\n" << endl;

    cout << "matriz_3[4][4] = {" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "\t{\t";
        for(int j = 0; j < 4; j++) {
            cout << m3[j][i];
            if(j != 3) {
                cout << ",";
            }
            cout << "\t";
        }
        cout << "}";
        if(i != 3) {
            cout << ",";
        }
        cout << endl;
    }
    cout << "}\n" << endl;

    system("pause");

    return 0;
}