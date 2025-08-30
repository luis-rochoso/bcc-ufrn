#include <iostream>
#include <iomanip>
// quanto tempo demora para população A passar da B?
int growthTime(int PA, int PB, double G1, double G2) {
    for (int i = 0; i <= 101; i++) {
        if (i == 101) return i;
        if (PA > PB) return i;
        PA += (G1 * PA);
        PB += (G2 * PB);
    }
    return 101;
}

int main() {
    int t{};
    std::cin >> t;
    int tempos [t];

    int PA{}, PB{};
    double G1{}, G2{};
    
    for (int i = 0; i < t; i++)  {
        std::cin >> PA >> PB;
        std::cin >> std::fixed >> std::setprecision(1) >> G1 >> G2;
        G1 /= 100;
        G2 /= 100;

        tempos [i] = growthTime(PA, PB, G1, G2);
    }

    for (int i = 0; i < t; i++) {
        if (tempos [i] > 100) std::cout << "Mais de 1 seculo.\n";
        else std::cout << tempos [i] << " anos.\n";
    }
    return 0;
}