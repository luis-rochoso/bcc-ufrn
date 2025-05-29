#include <iostream>
using namespace std;

int main() {

unsigned int n, i, p;
cin >> n;
p = 1;

for (i = 1; i < (n + 2); i++) {
    cout << p << endl;
    p *= 2;
}

    return 0;
}