#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
// Escreva uma função que recebe dois parâmetros, um float B e outro inteiro não negativo P e retorna a potência B^P
float power (float base, int expoente) {
    if (expoente == 0) {
        return 1.0;
    }
    if (expoente == 1) {
        return base;
    }
    float resultado = base;
    for (int i = 1; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

TEST_CASE("Potenciação") {
    CHECK(power(5.0, 2) == 25.0);
    CHECK(power(5.0, 3) == 125.0);
    CHECK(power(3.0, 2) == 9.0);
}
