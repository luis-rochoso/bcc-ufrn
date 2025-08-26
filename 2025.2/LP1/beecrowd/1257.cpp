#include <iostream>
#include <string>
using namespace std;
// array hash
int getValue(string texto, const int &j) {
    int counter = 0;
    for (int k = 0; k < texto.size(); k++) {
        counter += texto [k] - 65;
        counter += j;
        counter += k;
    }
    return counter;
}

int main() {
    int testN;
    cin >> testN;

    for (int i = 0; i < testN; i++) {
        int linhas;
        cin >> linhas;

        string caixa [linhas];
        for (int j = 0; j < linhas; j++) {
        cin >> caixa [j];
        }

        int somaLinha = 0;
        for (int j = 0; j < linhas; j++) {
            somaLinha += getValue(caixa [j], j);
        }
        std::cout << somaLinha << endl;
    }
    return 0;
}