#include <iostream>
using namespace std;

int main() {
    int n, pontos = 0;
    cin >> n;
    int seq [n];
    for (int i = 0; i < n; i++) {
        cin >> seq [i];
        if (seq[i] == 1) {
            pontos += 10;
        }
        else if (seq[i] == 2) {
            pontos += 50;
        }
        else {
            pontos += 90;
        }
    }
    cout << pontos << endl;
    return 0;
}
