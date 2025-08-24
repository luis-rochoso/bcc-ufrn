#include <iostream>
// movimentos da Rainha
short moves(short x1, short y1, short x2, short y2) {
    if (x1 == x2 && y1 == y2) return 0;
    if (x1 == x2 || y1 == y2) return 1;

    // percorrer diagonal esquerda cima -> direita baixo
    for (int i = 1; i < 8; i++) {
        if (x1 - i == x2 && y1 - i == y2) return 1;
    }
    for (int i = 1; i < 8; i++) {
        if (x1 + i == x2 && y1 + i == y2) return 1;
    }

    // percorrer diagonal esquerda baixo -> direita cima
    for (int i = 1; i < 8; i++) {
        if ((x1 - i) == x2 && (y1 + i) == y2) return 1;
    }
    for (int i = 1; i < 8; i++) {
        if ((x1 + i) == x2 && (y1 - i) == y2) return 1;
    }
    return 2;
}

int main() {
    short x1, y1, x2, y2;
    bool end = false;
    short output [50];
    int i = 0;
    
    while (end == false) {
        std::cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            end = true;
            break;
        }
        output[i] = moves(x1, y1, x2, y2);
        i++;
    }
    
    for (int j = 0; j < i; j++) {
        std::cout << output[j] << "\n";
    }
    return 0;
}