#include <iostream>
using namespace std;
// dado um valor N e uma sequência de N valores inteiros positivos, imprimir a moda da sequência
int main() {
    int n, valorModa = 0;
    cin >> n;
    int seq[n];
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }
    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (seq[i] == 0) {
            continue;
        }
        if (seq[i] > 0) {
            if (seq[i] > maior) {
                maior = seq[i];
            }
        }
    }
    int valor[n], quant = 1;
    valor[0] = seq[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            bool valorNaSeq;
            if (seq[i] == valor[j]) {
                continue;
            }
            else if (seq[i] != valor[j]) {
               for (int k = 0; k <= i; k++) {
                valorNaSeq = false;
                if (seq[i] == valor[k]) {
                    valorNaSeq = true;
                    break;
                }
               }
               if (valorNaSeq) {
                continue;
               }
               else {
                valor[quant++] = seq[i];
               }
            }
        
        }
    }
    int count[maior + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[seq[i]]++;
    }
    for (int i = 0; i < maior + 1; i++) {
        if (count[i] > valorModa) {
            valorModa = count[i];
        }
    }
    for (int i = 0; i < quant; i++) {
        if (count[valor[i]] == valorModa) {
            cout << valor[i] << endl;
        }
    }
    return 0;
}