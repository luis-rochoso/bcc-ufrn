#include <iostream>
using namespace std;

int main () {

int n;
cin >> n;
int seq[n];

for (int i = 0; i < n; i++) {
    cin >> seq[i];
}

bool simmetric = true;
for (int i = 0; i < (n / 2); i++) {
    if (seq[i] != seq[n - 1 - i]) {
        simmetric = false;
    }
}

if (simmetric) {
    cout << "A sequência é simétrica." << endl;
}
else {
    cout << "A sequência é assimétrica." << endl;
}

    return 0;
}