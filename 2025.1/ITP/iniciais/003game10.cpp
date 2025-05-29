#include <iostream>
using namespace std;

int main(){

int posNum, posAvi, posDis;

cout << "Insira o número de posições que existem no jogo: ";
cin >> posNum;
cout << endl;

cout << "Insira a posição em que o avião está: ";
cin >> posAvi;
cout << endl;

cout << "Insira a posição em que o disco voador está: ";
cin >> posDis;
cout << endl;

int numClick = ((posDis - posAvi) + posNum) % posNum;
cout << "Você deve apertar o botão " << numClick << " vez(es) para impedir o ataque!" << endl;
    return 0;
}