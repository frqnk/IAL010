#include <iostream>
#include <climits>

using namespace std;

int main() {
    unsigned long long int F_n1 = 0, F_n2 = 1;

    for(int i = 0; ULLONG_MAX - F_n1 > F_n2; i++) {
        cout << "F_" << i << " = " << F_n1 << endl;
        F_n1 += F_n2;
        swap(F_n1, F_n2);
    }

    system("pause");

    return 0;
}