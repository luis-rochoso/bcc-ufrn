#include <iostream>
using namespace std;

int main() {

int pA, pB, pC;
cin >> pA >> pB >> pC;

if ((pB - pA) < (pC - pB)) {
    cout << 1 << endl;
}
else if ((pB - pA) == (pC - pB)) {
    cout << 0 << endl;
}
else {
    cout << -1 << endl;
}
    return 0;
}