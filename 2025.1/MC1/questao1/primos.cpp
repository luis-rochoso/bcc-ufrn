#include "mod.h"
#include <iostream>
using namespace std;

void primos(int inicial, int final) {
    for (int i = inicial; i <= final; i++) {
        if (i <= 1) {
            continue;
        }
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if ((divMod(i, j) == 0)) {
                divisores++;
            }
        }
        if (divisores == 2) {
            cout << i << endl;
        }
    }
}

int main() {
    int primeiro, ultimo;
    cin >> primeiro >> ultimo;
    primos(primeiro, ultimo);
    return 0;
}