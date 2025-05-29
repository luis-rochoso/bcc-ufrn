#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Digite um número: " << endl;
    cin >> n;
    
    if ((n / 10) == 0) {
        cout << 1 << endl;
        return 0;
    }
    int last = n % 10;

    do {
        n = n / 10;
    } while (n / 10 != 0);
    
    if (n == last) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    
    return 0;
}
