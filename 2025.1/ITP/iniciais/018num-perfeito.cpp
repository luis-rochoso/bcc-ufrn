#include <iostream>
using namespace std;

int main() {

int n;
cout << "Digite um número inteiro: ";
cin >> n;

if (n < 7) {
    cout << "Não há número perfeitos menores que " << n << "." << endl;
}
else {
    cout << "Os números perfeitos menores que " << n << " são:" << endl;
    for (int i = 1; i < n; i++) {
        int div = 0;
        for (int j = 1; j <= (i / 2); j++) {
            if (i % j == 0) {
                div += j;
            }
        }
    if (div == i) {
        cout << i << endl;
    }
    }
}

    return 0;
}