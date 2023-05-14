#include <iostream>
#include <limits>
using namespace std;
int main() {
    long long a = 0, b = 1;

    while(LLONG_MAX - a > b) {
        cout << a << " ";
        a += b;
        swap(a, b);
    }

    system("pause");
    return 0;
}