#include <iostream>
using namespace std;
// dados dois valores N e M e duas sequências de valores inteiros de tamanhos N e M, imprimir os valores que se encontram em ambas sequências
int main() {
     int n, m, maior = 0;
     cin >> n >> m;
     int seq1[n], seq2[m];
     for (int i = 0; i < n; i++) {
        cin >> seq1[i];
     }
     for (int i = 0; i < m; i++) {
        cin >> seq2[i];
        }
     int ambos[n + m], limAmbos = 0;
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (seq1[i] == seq2[j]) {
                bool emAmbos = false;
                for (int k = 0; k < n + m; k++) {
                    if (seq2[j] == ambos[k]) {
                        emAmbos = true;
                        break;
                    }
                }
                if (emAmbos == false) {
                    ambos[limAmbos++] = seq2[j];
                }
            }
        }
     }
     for (int i = 0; i < limAmbos; i++) {
        cout << ambos[i] << endl;
     }
    return 0;
}