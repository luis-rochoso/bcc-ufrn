#include <iostream>
using namespace std;

int main() {

int n, v, seq, countV = 0;

cout << "Digite o número de elementos da sequência: " << endl;
cin >> n;
cout << "Digite o número que você quer que seja encontrado nessa sequência: " << endl;
cin >> v;

cout << endl << "Agora, digite todos os números da sequência: " << endl;
for (int i = 0; i < n; i++) {
    cin >> seq;
    if (seq == v) {
        countV++;
    }
}

cout << "O número de vezes que " << v << " aparece na sequência é " << countV << "." << endl;

    return 0;
}