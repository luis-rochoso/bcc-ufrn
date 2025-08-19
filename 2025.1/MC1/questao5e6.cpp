#include <iostream>
using namespace std;

int modInverso(int a, int n) {
    for (int i = 1; i < n; i++) {
        if ((a % n) * (i % n) % n == 1) {
            return i;
        }
    }
}

int potModular(int base, int expoente, int mod) {
    int resultado = 1;
    for (int i = 1; i <= expoente; i++) {
        resultado = (resultado * base) % mod;
    }
    return resultado;
}

string cifrar(string texto, int p, int q, int e, int array[]) {
    long int n = p * q;
    string texto_cifrado = "";
    for (int i = 0; i < texto.size(); i++) {
        array[i] = potModular(texto [i], e, n);
        texto_cifrado += to_string(array [i]);
    }
    return texto_cifrado;
}

string decifrar(int p, int q, int e, int array[], int &tamanho) {
    long int n = p * q;
    long int r = (p-1) * (q-1);
    long int d = modInverso(e, r);
    string texto_decifrado = "";
    char charray [tamanho];
    for (int i = 0; i < tamanho; i++) {
        charray [i] = potModular(array [i], d, n);
        texto_decifrado += charray[i];
    }
    return texto_decifrado;
}

int main() {
    string texto;
    cout << "Digite o texto: " << endl;
    getline(cin, texto);
    int tamanho = texto.size();
    int array [tamanho];
    long long int p, q, e;
    cout << "Digite 'p': ";
    cin >> p;
    cout << "Digite 'q': ";
    cin >> q;
    cout << "Digite 'e': ";
    cin >> e;
    cout << "Texto cifrado: " << cifrar(texto, p, q, e, array) << endl;
    cout << "Texto decifrado: " << decifrar(p, q, e, array, tamanho) << endl;
    return 0;
}