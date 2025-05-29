#include <iostream>
#include <string>
using namespace std;
// leia um texto e envie para a saída as letras iniciais de cada palavra em maiúscula e as demais em minúscula
int main() {
    string texto;
    getline(cin, texto);
    if (texto[0] != ' ') {
        texto [0] = toupper(texto [0]);
    }
    cout << texto [0];
    for (int i = 1; i < texto.size(); i++) {
        if (texto [i - 1] == ' ') {
            texto [i] = toupper(texto [i]);
        }
        else {
            texto [i] = tolower(texto [i]);
        }
        cout << texto [i];
    }
    cout << endl;
    return 0;
}
