#include <iostream>
// maior categoria de velocidade entre as lesmas de um array
int topSpeed(int snailSpeed[], int snailNum) {
    for (int i = 0; i < snailNum; i++) {
        if (snailSpeed [i] >= 20) return 3;
    }
    for (int i = 0; i < snailNum; i++) {
        if (snailSpeed [i] >= 10) return 2;
    }
    return 1;
}

int main() {

    for (int i = 0; i < 4500; i++) {
        int snailNum{};
        std::cin >> snailNum;
        
        int snailSpeed[snailNum];
        for (int j = 0; j < snailNum; j++) {
            std::cin >> snailSpeed [j];
        }

        std::cout << topSpeed(snailSpeed, snailNum) << std::endl;
    }

    return 0;
}