#include <iostream>
#include <locale>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    long long a = 0, b = 1;

    while(LLONG_MAX - a > b) {
        cout << a << " ";
        a += b;
        swap(a, b);
    }

    system("pause");
    return 0;
}