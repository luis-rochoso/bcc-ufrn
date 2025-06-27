#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int teto(float n) {
    if (n <= 0.0 || int(n) == n) {
        return int(n);
    }
    return (int(n) + 1);
}

TEST_CASE("Função teto") {
    CHECK(teto(0) == 0);
    CHECK(teto(2) == 2);
    CHECK(teto(-2) == -2);
    CHECK(teto(3.5) == 4);
    CHECK(teto(-3.5) == -3);
}