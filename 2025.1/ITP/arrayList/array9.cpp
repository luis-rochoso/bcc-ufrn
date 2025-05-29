#include <iostream>
using namespace std;
// Dado dois valores inteiros N e P e uma sequência de N valores inteiros não ordenados, imprimir o P-ésimo maior valor.
int main() {
    int n, p;
    cin >> n >> p;
    int seq[n], ordem[n];
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int buffer;
            if (seq[i] > seq[j]) {
                buffer = seq[i];
                seq[i] = seq[j];
                seq[j] = buffer;
            }
        }
        for (int j = 0; j < n; j++) {
            ordem[j] = seq[j];
        }
    }
    cout << ordem [n - p] << endl;
    return 0;
}