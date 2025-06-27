#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int modulo(int n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

int divMod(int dividendo, int divisor) {
    int divBase = divisor, resto = 0;
    if (dividendo > 0) {
        if (dividendo < modulo(divisor)) {
            return dividendo;
        }
        while (modulo(dividendo) >= modulo(divisor)) {
            resto = modulo(dividendo) - modulo(divisor);
            if (resto == 0) {
                return resto;
            }
            divisor += divBase;
        }
    }
    else {
        do {
            resto = modulo(divisor) - modulo(dividendo);
            if (resto == 0) {
                return resto;
            }
            divisor += divBase;
        } while (resto < 0);
    }
    return resto;
}

TEST_CASE("MOD divisional") {
    CHECK(divMod(28, 7) == 0);
    CHECK(divMod(2, 7) == 2);
    CHECK(divMod(132, 9) == 6);
    CHECK(divMod(-12, 5) == 3);
    CHECK(divMod(12, -5) == 2);
    CHECK(divMod(-12, -5) == 3);
    CHECK(divMod(10, -5) == 0);
    CHECK(divMod(-10, 5) == 0);
    CHECK(divMod(-3, 4) == 1);
    CHECK(divMod(3, -4) == 3);
    CHECK(divMod(-4, 3) == 2);
    CHECK(divMod(4, -3) == 1);
}