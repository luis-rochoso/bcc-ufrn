#include <iostream>
using namespace std;

int main() {
    int n, a, b; // inteiros positivos
    cin >> a >> b;

    if (a < b) {
        while (b != 0) {
            n = a % b;
            a = b;
            b = n;
        }
        cout << a << endl;
    }
    if (b < a) {
        while (a != 0) {
            n = b % a;
            b = a;
            a = n;
        }
        cout << b << endl;
    }
    return 0;
}