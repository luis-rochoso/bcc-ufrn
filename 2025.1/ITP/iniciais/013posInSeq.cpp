#include <iostream>
using namespace std;

int main() {

int n, seq;
int countPos = 0, countnPos = 0;
cin >> n;

for(int i = 0; i < n; i++) {
    cin >> seq;
    if (seq > 0) {
        countPos++;
    }
    else {
        countnPos++;
    }
}
cout << "Há " << countPos << " positivos e " << countnPos << " não positivos nessa sequência." << endl;
    return 0;
}