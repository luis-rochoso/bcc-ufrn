#include <iostream>
#include <cassert>
#include "turnstate.hpp"

int main() {
    Turnstate ts;
    while (!ts.ended()) {
        ts.processEvents();
        ts.update();
        ts.render();
    }
    std::cout << "\nMoedas coletadas: " << ts.getCoins() << std::endl;
    return 0;
};