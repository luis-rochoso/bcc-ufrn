#include <iostream>
#include <string>
using namespace std;
// leia um texto, seguido de uma palavra. Em seguida, envie para a saída quantas vezes a string apareceu na linha inteira.
int main() {
    string texto, palavra;
    getline(cin, texto);
    cin >> palavra;
    int count = 0;
    bool limpa = false;
    do {
       if (texto.find(palavra) != string::npos) {
        texto = texto.replace(texto.find(palavra), palavra.size(), palavra.size(), ' ');
        count++;
       }
       else {
        limpa = true;
       }
    } while (!limpa);
    cout << count << endl;
    return 0;
}