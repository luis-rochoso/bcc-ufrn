#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bombPos [n], playMove [n], playPos = 5;
    for (int i = 0; i < n; i++) {
        cin >> bombPos [i];
    }
    for (int i = 0; i < n; i++) {
        cin >> playMove [i]; // pode assumir -1, 0 ou 1
    }
    for (int i = 0; i < n; i++) {
        if (bombPos [i] == playPos) {
            cout << "Game Over" << endl;
            return 0;
        }
        if (playMove [i] == 0) {
            for (int j = i; j < n; j++) {
                if (bombPos [j] == playPos) {
                    bombPos [j] = 20;
                    break;
                }
            }
        }
        if (playMove [i] == -1) {
            playPos--;
        }
        if (playMove [i] == 1) {
            playPos++;
        }
    }
    cout << playPos << endl;
    return 0;
}
