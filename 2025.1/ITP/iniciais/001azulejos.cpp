#include <iostream>
using namespace std;

int main(){

    int largura, comprimento, quadrado, triângulo;

    cout << "Insira a largura do chão: ";
    cin >> largura;

    cout << "Insira o comprimento do chão: ";
    cin >> comprimento;

    quadrado = largura * comprimento + ((largura - 1) * (comprimento - 1));
    triângulo = 2 * ((largura - 1) + (comprimento - 1));

    cout << "O número de azulejos quadrados para esse piso é de " << quadrado <<" e o número de triangulares é de " << triângulo << "." << endl;

    return 0;
}
