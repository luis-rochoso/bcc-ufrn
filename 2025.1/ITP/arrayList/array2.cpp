#include <iostream>
using namespace std;

int main() {

int n, m;
cout << "Digite o número de elementos da primeira sequência: ";
cin >> n;
cout << "Digite o número de elementos da segunda sequência: ";
cin >> m;

int seq[n];
cout << endl << "Digite todos os elementos da primeira sequência: " << endl;
for (int i = 0; i < n; i++) {
    cin >> seq[i];
}

int menor;
cout << "Digite todos os elementos da segunda sequência: " << endl;
cin >> menor;
for (int i = 1; i < m; i++) {
    int vm;
    cin >> vm;
    if (vm < menor) {
        menor = vm;
    }
}

cout << "Os valores da primeira sequência que são menores que o menor valor da segunda são: " << endl;
for (int i = 0; i < n; i++) {
    if (seq[i] < menor) {
        cout << seq[i] << endl;
    }
}
    return 0;
}