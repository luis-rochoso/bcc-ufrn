#include <iostream>
using namespace std;

int main(){

    int valor;

    cout << "-- Início do espelho numérico --" << endl;
    cout << endl;
    cout << "Insira um valor numérico de três dígitos: ";
    cin >> valor;

    cout << endl;
    cout << "Seu número foi para o mundo invertido! Lá, ele é conhecido como ";
    cout << valor % 10;
    valor = valor / 10;
    cout << valor % 10;
    valor = valor / 10;
    cout << valor << "." << endl;
   
    return 0;
}