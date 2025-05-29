#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bombPos [n], playPos = 5;
    for (int i = 0; i < n; i++) {
        cin >> bombPos [i];
    }
    for (int i = 0; i < n; i++) {
        if (bombPos [i] < playPos && playPos != 10) {
            playPos++;
            continue;
        }
        if (bombPos [i] > playPos && playPos != 0) {
            playPos--;
            continue;
        }
        else if (bombPos [i] == playPos) {
            cout << "Game Over" << endl;
            return 0;
        }
    }
    cout << playPos << endl;
    return 0;
}
