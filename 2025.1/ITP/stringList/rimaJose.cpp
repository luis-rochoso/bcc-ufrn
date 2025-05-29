#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, padrao;
    cin >> texto >> padrao;
    bool rima = false;
    for (int i = 0; i < texto.size(); i++) {
        texto [i] = toupper(texto[i]);
    }
    for (int i = 0; i < padrao.size(); i++) {
        padrao [i] = toupper(padrao[i]);
    }
    int pos = texto.find(padrao);
    if (pos >= 0 && pos + padrao.size() == texto.size()) {
        rima = true;
    }

    if (rima) {
        cout << "rima" << endl;
    }
    else {
        cout << "não rima" << endl;
    }
    return 0;
}