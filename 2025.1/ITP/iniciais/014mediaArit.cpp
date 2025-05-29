#include <iostream>
using namespace std;

int main() {

int n, comp;
float sum = 0;
cout << ">> Calculadora de média aritmética <<" << endl;
cout << "Digite o número de valores que serão processados: ";
cin >> n;

cout << endl << "Agora, digite os valores: " << endl;
for (int i = 0; i < n; i++) {
    cin >> comp;
    sum += comp;
}

cout << "A média aritmética desses números é " << (sum / n) << "." << endl;
    return 0;
}