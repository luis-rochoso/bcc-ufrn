#include <iostream>
using namespace std;

void MDC(int a, int b) {
    int resto;
    if (a > b) {
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
            cout << a << " " << b << endl;
        }
        cout << a << endl;
        return;
    }
    if (b > a) {
        while (a != 0) {
            resto = b % a;
            b = a;
            a = resto;
            cout << a << " " << b << endl;
        }
        cout << b << endl;
        return;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    MDC(a, b);
}