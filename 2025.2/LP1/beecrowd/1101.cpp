#include <iostream>
#include <vector>
// somar todos os números inteiros entre um par
int main() {
    int x, y;

    struct Par {
        int menor;
        int maior;
    };
    std::vector<Par> lista;

    bool end = false;
    while (end == false) {
        std::cin >> x >> y;
        if (x <= 0 || y <= 0) {
            end = true;
            break;
        }
        else {
            if (x <= y) {
                lista.push_back({x, y});
            }
            else {
                lista.push_back({y, x});
            }
        }
    }

    for (int i = 0; i < lista.size(); i++) {
        int count = 0;
        for (int j = lista[i].menor; j <= lista[i].maior; j++) {
            std::cout << j << " ";
            count += j;
        }
        std::cout << "Sum=" << count << std::endl;
    }
    return 0;
}