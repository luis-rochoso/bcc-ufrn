#include <iostream>
using namespace std;

int main() {

int N, I, J;
cin >> N >> I >> J;
int counter = 0, atual = 1;

for (counter = 0; counter < N; atual++) {
    if (((atual % I) == 0) || ((atual % J) == 0)) {
        cout << atual << endl;
        counter++;
    }
}

    return 0;
}