#include <iostream>
using namespace std;
// leia uma matriz A e um inteiro N e imprima N x A
int main() {
    int linhas, colunas, n;
    cin >> linhas >> colunas >> n;
    int matriz [linhas] [colunas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz [i] [j];
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << n * matriz [i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}
