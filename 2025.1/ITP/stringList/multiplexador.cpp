#include <iostream>
#include <string>
using namespace std;
// google multiplexador
int main() {
    string A, B;
    getline(cin, A);
    getline(cin, B);
    for (int i = 0; i < (A.size() > B.size() ? A.size() : B.size()); i++) {
        if (i < A.size()) {
            cout << A [i];
        }
        if (i < B.size()) {
            cout << B [i];
        }
    }
    cout << endl;
    return 0;
}