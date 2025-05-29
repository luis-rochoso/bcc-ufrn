#include <iostream>
using namespace std;
// leia duas matrizes A e B e realize a seguinte operação: A x B
int main() {
    int aLin, aCol, bLin, bCol;
    cin >> aLin >> aCol >> bLin >> bCol;
    cout << endl;
    if (aCol != bLin) {
        cout << "Essas matrizes não podem ser multiplicadas." << endl;
        return 0;
    }
    int mA [aLin] [aCol], mB [bLin] [bCol], mR [aLin] [bCol];
    for (int i = 0; i < aLin; i++) {
        for (int j = 0; j < aCol; j++) {
            cin >> mA [i] [j];
        }
    }
    cout << endl;
    for (int i = 0; i < bLin; i++) {
        for (int j = 0; j < bCol; j++) {
            cin >> mB [i] [j];
        }
    }
    for (int i = 0; i < aLin; i++) {
        for (int j = 0; j < bCol; j++) {
            mR [i] [j] = 0;
            for (int k = 0; k < bLin; k++) {
                mR [i] [j] += mA [i] [k] * mB [k] [j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < aLin; i++) {
        for (int j = 0; j < bCol; j++) {
            cout << mR [i] [j] << " ";
        }
        cout << endl;
    }
    return 0;
}