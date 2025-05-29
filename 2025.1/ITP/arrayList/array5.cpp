#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Digite um valor: " << endl;
    cin >> n;
    int seq[n];
    cout << "Digite " << n << " valores entre 1 e 10:" << endl;

    int counter[11] = {0};
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
        counter[seq[i]]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (counter[i] != 0) {
            cout << "Frequência de " << i << ": " << counter[i] << endl;
        }
    }
    return 0;
}