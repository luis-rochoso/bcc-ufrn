#include <iostream>
#include <string>
using namespace std;
// leia uma string e envie para a saída se essa string representa uma placa de carro válida (“sim” ou “não”). Uma placa é válida se tiver 8 caracteres sendo os 3 primeiros maiúsculas, seguidos de um hífen e 4 dígitos numéricos.
int main () {
    string placa;
    cin >> placa;
    bool valida = true;
    if (placa.size() != 8) {
        valida = false;
    }
    for (int i = 0; i < 3; i++) {
        if (placa [i] < 65 || placa [i] > 90) {
            valida = false;
        }
    }
    if (placa [3] != '-') {
        valida = false;
    }
    for (int i = 4; i < 8; i++) {
        if (placa [i] < 48 || placa [i] > 57) {
            valida = false;
        }
    }
    if (valida) {
        cout << "sim" << endl;
    }
    else {
        cout << "não" << endl;
    }
    return 0;
}