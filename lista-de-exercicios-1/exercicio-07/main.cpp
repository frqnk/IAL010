#include <iostream>
#include <climits>

using namespace std;

int main() {
    unsigned long long int F_n1 = 0, F_n2 = 1;

    for(int indice = 0; ULLONG_MAX - F_n1 > F_n2; indice++) {
        cout << "F_" << indice << " = " << F_n1 << endl;
        F_n1 += F_n2;
        swap(F_n1, F_n2);
    }

    system("pause");

    return 0;
}