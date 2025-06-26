#include <iostream>
using namespace std;

int *arrayDoido(int T) {
    int *array = new int[T];
    for (int i = 0; i < T; i++) {
        cin >> array[i];
        array[i] *= 2;
    }
    return array;
}

int main() {
    int T;
    cin >> T;
    int *out = arrayDoido(T);
    for (int i = 0; i < T; i++) {
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}
