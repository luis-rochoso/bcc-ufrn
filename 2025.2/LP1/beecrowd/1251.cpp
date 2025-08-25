#include <iostream>
#include <string>
#include <vector>
// frequência de um char numa string
int main() {
    std::vector<std::string> linha;

    for (int i = 0; i < 4000; i++) {
        std::string temp;
        getline(std::cin, temp);
        if (temp == "") break;
        else linha.push_back(temp);
    }

    struct Instance {
        char c;
        int freq;
    };

    for (int i = 0; i < linha.size(); i++) {
        std::vector <Instance> caracteres;
        for (int j = 0; j < linha [i].size(); j++) {
            if (j == 0) caracteres.push_back({linha [i] [j], 1});
            else {
                bool presente = false;
                for (int k = 0; k < j; k++) {
                    if (linha [i] [j] == caracteres [k].c) {
                        presente = true;
                        caracteres [k].freq++;
                        break;
                    }
                }
                if (presente == false) {
                    caracteres.push_back({linha [i] [j], 1});
                }
                                  
            }
        }
        for (int j = 0; j < caracteres.size() - 1; j++) {
            for (int k = j + 1; k < caracteres.size() - 0; k++) {
                if (caracteres [j].freq > caracteres [k].freq) {
                    Instance aux = caracteres [j];
                    caracteres [j] = caracteres [k];
                    caracteres [k] = aux;
                }
                else if (caracteres [j].freq == caracteres [k].freq) {
                    if (caracteres [j].c > caracteres [k].c) {
                        Instance aux = caracteres [j];
                        caracteres [j] = caracteres [k];
                        caracteres [k] = aux;
                    }
                }
            }
        }

        for (int j = 0; j < caracteres.size(); j++) {
            std::cout << int(caracteres [j].c) << " " << caracteres [j].freq << std::endl;
        }
        std::cout << std::endl;
        
    }

    return 0;
}