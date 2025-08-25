#include <iostream>
#include <iomanip>
// soma ou média dos valores do triângulo superior de uma matriz 12x12
int main() {
    char op;
    std::cin >> op;

    // preenche a matriz
    double matriz [12] [12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matriz [i] [j];
        }
    }

    int cerca = 1;
    int y = 10, ct = 0;
    double soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = cerca; j <= y; j++) {
            soma += matriz [i] [j];
            ct++;
        }
        cerca++;
        y--;
    }

    if (op == 'S') std::cout << std::fixed << std::setprecision(1) << soma << std::endl;
    else std::cout << std::fixed << std::setprecision(1) << soma / (double)ct << std::endl;

    return 0;
}