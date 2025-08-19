#include <iostream>
// ordenação simples entre três números
int main() {
    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z;

    int sudoX = x;
    int sudoY = y;
    int sudoZ = z;
    int aux{};

    bool ordem = false;
    while (!ordem) {
        if (sudoX > sudoY) {
            aux = sudoX;
            sudoX = sudoY;
            sudoY = aux;
        }
        if (sudoY > sudoZ) {
            aux = sudoY;
            sudoY = sudoZ;
            sudoZ = aux;
        }
        else ordem = true;
    }
    
    std::cout << sudoX << "\n" << sudoY << "\n" << sudoZ << "\n\n";
    std::cout << x << "\n" << y << "\n" << z << std::endl;
    return 0;
}