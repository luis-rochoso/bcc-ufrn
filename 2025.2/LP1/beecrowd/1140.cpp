#include <iostream>
#include <string>

int main() {
    std::string texto[50];
    int k = 0;
    bool proceed = true;
    while (proceed) {
        getline(std::cin, texto[k]);
        if (texto[k] == "*") {
            proceed = false;
        }
        else k++;
    }

    for (int i = 0; i < 50; i++) {
        if (texto[i] == "*") break;
        bool fim = false;
        for (int j = 0; j < texto[i].size(); j++) {
            char pivot;
            if (j == 0) {
                pivot = std::toupper(texto[i][j]);
                continue;
            }
            if (texto[i][j - 1] == ' ') {
                if (std::toupper(texto[i][j]) == pivot) {
                    continue;
                }
                else {
                    fim = true;
                    break;
                }
            }
        }
        if (fim == true) {
            std::cout << "N\n";
        }
        else {
            std::cout << "Y\n";
        }
    }
    return 0;
}