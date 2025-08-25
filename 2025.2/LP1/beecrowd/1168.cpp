#include <iostream>
#include <string>
// quantas LEDs para representar um número?
int main() {
    short n{};
    std::cin >> n;
    std::string lines [n];
    short leds [n];

    for (int i = 0; i < n; i++) {
        short count = 0;
        std::cin >> lines [i];
        for (int j = 0; j < lines[i].size(); j++) {
            if (lines[i][j] == '1') count += 2;
            if (lines[i][j] == '2') count += 5;
            if (lines[i][j] == '3') count += 5;
            if (lines[i][j] == '4') count += 4;
            if (lines[i][j] == '5') count += 5;
            if (lines[i][j] == '6') count += 6;
            if (lines[i][j] == '7') count += 3;
            if (lines[i][j] == '8') count += 7;
            if (lines[i][j] == '9') count += 6;
            if (lines[i][j] == '0') count += 6;
        }
        leds [i] = count;
    }

    for (int i = 0; i < n; i++) {
        std::cout << leds[i] << " leds\n";
    }

    return 0;
}