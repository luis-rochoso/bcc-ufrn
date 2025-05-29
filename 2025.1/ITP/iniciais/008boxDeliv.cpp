#include <iostream>
using namespace std;

int main() {

    int c1, c2, c3;
    bool cabe, doublecabe;

    cout << "Digite o tamanho das três caixas em ordem crescente: " << endl;
    cin >> c1 >> c2 >> c3;

    cabe = (c1 < c2) || (c2 < c3);
    doublecabe = (c1 + c2) < c3;

    cout << "O número de viagens que o drone fará para entregar as três caixas é ";
    if (doublecabe) {
        cout << 1;
    }
    else if (cabe) {
        cout << 2;
    }
    else {
        cout << 3;
    }
    cout << "." << endl;
    return 0;
}