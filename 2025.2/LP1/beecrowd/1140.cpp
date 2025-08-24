#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string texto[4500];
    
    for(int i = 0; i < 4500; i++) {
        getline(std::cin, texto[i]);
        if (texto[i] == "*") {
            break;
        }
    }

    for (int i = 0; i < 4500; i++) {
        if (texto[i] == "*") break;
        bool fim = false;
        for (int j = 0; j < texto[i].size(); j++) {
            char pivot;
            if (j == 0) {
                pivot = toupper(texto[i][j]);
                continue;
            }
            if (texto[i][j - 1] == ' ') {
                if (toupper(texto[i][j]) == pivot) {
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