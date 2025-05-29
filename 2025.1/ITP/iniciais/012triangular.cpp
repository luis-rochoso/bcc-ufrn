#include <iostream>
using namespace std;

int main() {

int n, a = 1;
bool triangular = false;
cin >> n;

for (int i = 0; i < n; i++) {
    if (triangular) {
        cout << n << " é triangular." << endl;
        break;
    }
    if ((a + (a + 1) + (a + 2)) == n) {
        triangular = true;
    }
    else {
        a++;
    }
}
if (triangular == false) {
    cout << n << " não é triangular." << endl;
}

    return 0;
}