#include <iostream>
using namespace std;

int main(){

    double entrada;
    int inteira, frac;

    cout << "Digite um número real (separe inteiro de decimal por um ponto, não vírgula): ";
    cin >> entrada;
    inteira = entrada;
    cout << "A parte inteira desse número é " << inteira << ";" << endl;
    frac = (entrada - inteira) * 10;
    cout << "As duas primeiras casas decimais desse número são " << frac;
    frac = (entrada - inteira) * 100 - (frac * 10);
    cout << frac << "." << endl;

    return 0;
}