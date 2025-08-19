#include <iostream>
// retorna a soma de todos os ímpares entre dois números inteiros
int consecOddSum(int n1, int n2) {
    if (n1 == n2) return 0;
    int count = 0;
    if (n1 < n2) {
        for (int i = n1 + 1; i < n2; i += 2) {
            if ((i % 2) == 0) {
                if (i == n1 + 1) i--;
                continue;
            }
            count += i;
        }
        return count;
    }
    else {
        for (int i = n2 + 1; i < n1; i += 2) {
            if ((i % 2) == 0) {
                if (i == n2 + 1) i--;
                continue;
            }
            count += i;
        }
        return count;
    }
}

int main() {
 
    int n1{};
    int n2{};

    std::cin >> n1 >> n2;
    std::cout << consecOddSum(n1, n2) << std::endl;
 
    return 0;
}