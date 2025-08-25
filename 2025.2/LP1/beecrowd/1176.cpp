#include <iostream>
// enésimo valor de fibonacci
int main() {
    int t{};
    std::cin >> t;
    int lista [t];

    for (int i = 0; i < t; i++) {
        std::cin >> lista [i];
    }

    for (int i = 0; i < t; i++) {
        if (lista [i] == 0) {
            std::cout << "Fib(" << lista [i] << ") = " << 0 << std::endl;
            continue;
        }
        unsigned long int current = 1;
        unsigned long int previous = 0;
        unsigned long int aux{};
        for (int j = 1; j < lista [i]; j++) {
            aux = current;
            current += previous;
            previous = aux;
        }
        std::cout << "Fib(" << lista [i] << ") = " << current << std::endl;
    }
    return 0;
}