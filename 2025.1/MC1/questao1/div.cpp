#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int modulo(int n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

int divisao(int dividendo, int divisor) {
    int count = 0, divBase = divisor, resto;
    if (0 <= dividendo) {
        while (dividendo >= modulo(divisor)) {
            divisor += modulo(divBase);
            if (divisor != 0) {
                count++;
            }
        }
        if (divBase < 0) {
            resto = dividendo - modulo(divisor + divBase); 
            if (resto == 0) {
                return -(--count);
            }
            return -count;
        }
        return count;
    }
    else {
        if (divisor < 0) {
            count = -1;
        }
        while (dividendo < divisor) {
            divisor -= modulo(divBase);
            if (divisor != 0) {
                count--;
            }
        }
        if (divBase < 0) {
            return -count;
        }
        return count;
    }
}

TEST_CASE("Divisão") {
    CHECK(divisao(4, 2) == 2);
    CHECK(divisao(3, 1) == 3);
    CHECK(divisao(4, 3) == 1);
    CHECK(divisao(15, 6) == 2);
    CHECK(divisao(32, 8) == 4);
    CHECK(divisao(2, 3) == 0);
    CHECK(divisao(-10, -5) == 2);
    CHECK(divisao(-10, 5) == -2);
    CHECK(divisao(10, -5) == -2);
    CHECK(divisao(11, -5) == -3);
    CHECK(divisao(-7, -2) == 4);
}