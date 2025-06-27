#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int piso(float n) {
    if (n >= 0.0 || int(n) == n) {
        return int(n);
    }
    return (int(n) - 1);
}

TEST_CASE("Função piso") {
    CHECK(piso(0) == 0);
    CHECK(piso(2) == 2);
    CHECK(piso(-2) == -2);
    CHECK(piso(3.5) == 3);
    CHECK(piso(-3.5) == -4);
}
