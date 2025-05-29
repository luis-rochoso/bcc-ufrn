#include <iostream>
using namespace std;
// leia duas matrizes A e B e imprima a matriz A + B
int main() {
    int linhas, colunas;
    cin >> linhas >> colunas;
    int m1 [linhas] [colunas], m2 [linhas] [colunas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> m1 [i] [j];
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> m2 [i] [j];
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << m1 [i] [j] + m2 [i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}