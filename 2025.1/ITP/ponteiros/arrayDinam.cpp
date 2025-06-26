#include <iostream>
using namespace std;

int* arrayMaker(int tamanho, int valor) {
    int *array = new int[tamanho];
    for (int i = 0; i < tamanho; i++) {
        array[i] = valor;
    }
    return array;
}

int main() {
    int T, V;
    cin >> T >> V;
    int *out = arrayMaker(T, V);
    for (int i = 0; i < T; i++) {
        cout << arrayMaker(T, V)[i] << " ";
    }
    cout << endl;
    return 0;
}
