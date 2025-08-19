#include <iostream>
// representa uma quantia através de cédulas de real
int main() {
    int grana{};
    std::cin >> grana;

    std::cout << grana << "\n" << grana / 100 << " nota(s) de R$ 100,00\n";
    grana = grana % 100;
    std::cout << grana / 50 << " nota(s) de R$ 50,00\n";
    grana = grana % 50;
    std::cout << grana / 20 << " nota(s) de R$ 20,00\n";
    grana = grana % 20;
    std::cout << grana / 10 << " nota(s) de R$ 10,00\n";
    grana = grana % 10;
    std::cout << grana / 5 << " nota(s) de R$ 5,00\n";
    grana = grana % 5;
    std::cout << grana / 2 << " nota(s) de R$ 2,00\n";
    grana = grana % 2;
    std::cout << grana << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}