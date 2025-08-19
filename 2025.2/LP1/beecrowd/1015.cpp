#include <iostream>
#include <cmath>
#include <iomanip>

float distance(float x1, float y1, float x2, float y2) {
    return sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

int main() {
    float x1{};
    float y1{};
    float x2{};
    float y2{};

    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << std::fixed << std::setprecision(4) << distance(x1, y1, x2, y2) << std::endl;

    return 0;
}