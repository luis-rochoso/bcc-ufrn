#include <iostream>
using namespace std;
// dado um valor N e uma sequência de N valores inteiros, imprimir a menor diferença entre dois valores na seq.
int main() {
    int n;
    cin >> n;
    int seq[n];
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }
    int diffMin = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int diff;
            if (i == j) {
                continue;
            }
            if (seq[i] > seq[j]) {
                diff = seq[i] - seq[j];
                if (diff == 0) {
                    continue;
                }
                if (i == 1 and j == 2) {
                    diffMin = diff;
                    continue;
                }
                if (diff < diffMin) {
                    diffMin = diff;
                }
            }
        }
    }
    cout << diffMin << endl;
    return 0;
}