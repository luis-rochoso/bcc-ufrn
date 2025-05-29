#include <iostream>
using namespace std;

int main(){

    int hora_atual, hora_desp, min_atual, min_desp, min_dormidos;

    cout << "Insira o horário atual: " << endl;
    cin >> hora_atual >> min_atual;

    cout << "Insira o horário em que o despertador vai tocar: " << endl;
    cin >> hora_desp >> min_desp;

    min_dormidos = ((hora_desp - hora_atual) * 60) + (min_desp - min_atual);
    cout << "Você dormirá por " << min_dormidos << " minutos!" << endl;

    return 0;
}