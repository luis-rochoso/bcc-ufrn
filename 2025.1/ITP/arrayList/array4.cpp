#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int seqA[n], seqB[m];

    for (int i = 0; i < n; i++) {
        cin >> seqA[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> seqB[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (seqA[i] < seqB[j]) {
                cout << seqA[i] << " ";
                break;
            }
            else {
                cout << seqB[j] << " ";
            }
        }
    }
    if (seqA[n - 1] < seqB[m - 1]) {
        cout << seqB[m - 1] << endl;
    }
    else {
        cout << seqA[n - 1] << endl;
    }
    return 0;
}