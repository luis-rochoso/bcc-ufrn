#include <iostream>
#include <vector>
// avaliador de senhas
int main() {
    std::vector<std::string> testes;

    for (int i = 0; i < 4000; i++) {
        std::string temp;
        getline(std::cin, temp);
        if (temp == "") break;
        else testes.push_back(temp);
    }

    for (int i = 0; i < testes.size(); i++) {
        bool upper = false;
        bool lower = false;
        bool number = false;
        bool special = false;
        bool lenght = false;

        // checa comprimento
        if (testes [i].size() < 6 || testes [i].size() > 32) {
            lenght = false;
        }
        else {
            lenght = true;
        }

        // checa caracteres especiais
        for (int j = 0; j < testes [i].size(); j++) {
            if (testes [i] [j] < '0') special = true;
            if (testes [i] [j] > '9' && testes[i][j] < 'A') special = true;
            if (testes [i] [j] > 'Z' && testes[i][j] < 'a') special = true;
            if (testes [i] [j] > 'z') special = true;
        }

        // checa maiúsculas, minúsculas e números
        for (int j = 0; j < testes [i].size(); j++) {
            if (!upper) {
                if (testes [i] [j] >= 'A' && testes [i] [j] <= 'Z') upper = true;
            }
            if (!lower) {
                if (testes [i] [j] >= 'a' && testes [i] [j] <= 'z') lower = true;
            }
            if (!number) {
                if (testes [i] [j] >= '0' && testes [i] [j] <= '9') number = true;
            }
        }

        if (lenght && !special && upper && lower && number) std::cout << "Senha valida." << std::endl;
        else std::cout << "Senha invalida." << std::endl;
    }
    
    return 0;
}