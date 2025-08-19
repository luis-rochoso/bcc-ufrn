#include <iostream>

int maior_ab(int a, int b) {
    return (a+b+abs(a-b)) / 2;
}

int main() {
    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;

    std::cout << maior_ab(maior_ab(a, b), c) << " eh o maior\n";
    return 0;
}
