#include <iostream>
using namespace std;
// leia uma matriz quadrada e diga se é identidade
int main() {
    int lado;
    cin >> lado;
    int matriz [lado] [lado];
    bool identidade = true;
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cin >> matriz [i] [j];
        }
    }
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            if ((i == j and matriz [i] [j] != 1) or (i != j and matriz [i] [j] != 0)) {
                identidade = false;
                break;
            }
        }
        if (!identidade) {
            break;
        }
    }
    if (identidade) {
        cout << "É identidade." << endl;
    }
    else {
        cout << "Não é identidade." << endl;
    }
    return 0;
}