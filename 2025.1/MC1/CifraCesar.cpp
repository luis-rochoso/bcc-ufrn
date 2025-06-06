#include <iostream>
using namespace std;
int main() {
    int chave;
    string texto;
    getline(cin, texto);
    cin >> chave;
    for (int i = 0; i < texto.size(); i++) {
        if (chave < 0) {
            if (texto[i] == 32) {
                continue;
            }
            if (texto[i] > 64 && texto[i] < 91 && (texto[i] + chave) < 65) {
                for (int j = -1; j >= chave; j--) {
                    texto[i]--;
                    if (texto[i] < 65) {
                        texto[i] = 90;
                    }
                }
            }
            else if (texto[i] > 96 && texto[i] < 123 && (texto[i] + chave) < 97) {
                for (int j = -1; j >= chave; j--) {
                    texto[i]--;
                    if (texto[i] < 97) {
                        texto[i] = 122;
                    }
                }
            }
            else {
                texto[i] += chave; 
            }
        }
        else if (chave > 0) {
            if (texto[i] == 32) {
                continue;
            }
            if (texto[i] > 64 && texto[i] < 91 && (texto[i] + chave) > 90) {
                for (int j = 1; j <= chave; j++) {
                    texto[i]++;
                    if (texto[i] > 90) {
                        texto[i] = 65;
                    }
                }
            }
            else if (texto[i] > 96 && texto[i] < 123 && (texto[i] + chave) > 122) {
                for (int j = 1; j <= chave; j++) {
                    texto[i]++;
                    if (texto[i] > 122) {
                        texto[i] = 97;
                    }
                }
            }
            else {
                texto[i] += chave; 
            }
        }
        else {
            break;
        }
    }
    cout << texto << endl;
    return 0;
}
