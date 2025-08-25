#include <iostream>
#include <iomanip>
// soma ou média dos valores abaixo da diagonal secundária de uma matriz 12x12
int main() {
    char op;
    std::cin >> op;

    double matriz [12] [12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matriz [i] [j];
        }
    }

    int cerca = 11;
    double soma = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 1 + cerca; j < 12; j++) {
            soma += matriz [i] [j];
        }
        cerca--;
    }

    if (op == 'S') std::cout << soma << std::endl;
    else std::cout << std::fixed << std::setprecision(1) << soma / 66 << std::endl;

    return 0;
}