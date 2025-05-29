#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int seq[n];
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }
    for (int i = 0; i < n; i++) {
        int igual = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            if (seq[j] == seq[i]) {
                igual++;
            }
        }
        if (igual == 0) {
            cout << seq[i] << endl;
        }
    }
    return 0;
}