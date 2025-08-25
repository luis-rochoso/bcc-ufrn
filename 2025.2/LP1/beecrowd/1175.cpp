#include <iostream>
// inverter um array
int main() {
    int n [20];
    int desN [20];

    for (int i = 0; i < 20; i++) {
        std::cin >> n [i];
        desN [19 - i] = n [i];
    }

    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << desN[i] << std::endl;
    }
    return 0;
}