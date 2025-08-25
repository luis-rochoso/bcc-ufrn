#include <iostream>
// descubra a cor do canto inferior direito de um tabuleiro de xadrez

int main() {
    int linhas{};
    int colunas{};

    std::cin >> linhas >> colunas;

    if (linhas % 2 == 1 && colunas % 2 == 1) std::cout << 1 << std::endl;
    else if (linhas % 2 == 0 && colunas % 2 == 0) std::cout << 1 << std::endl;
    else std::cout << 0 << std::endl;

    return 0;
}