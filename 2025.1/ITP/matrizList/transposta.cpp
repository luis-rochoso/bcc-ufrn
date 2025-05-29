#include <iostream>
using namespace std;
// leia uma matriz e imprima sua transposta
int main() {
    int linhas, colunas;
    cin >> linhas >> colunas; // nº de linhas e colunas da matriz
    int matriz [linhas] [colunas], transposta [colunas] [linhas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz [i] [j];
        }
    }
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            transposta [i] [j] = matriz [j] [i];
        }
    }
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            cout << transposta [i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}