#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

bool existe(int valor, int seq[], int tamanho) {
    if (tamanho == 0) {
        return false;
    }
    if (seq[0] == valor) {
        return true;
    }
    return existe(valor, seq + 1, tamanho - 1);
}

int busca_indice_maior(int seq[], int tam) {
    if (tam == 1) {
        return 0;
    }
    int indice_maior = busca_indice_maior(seq, tam - 1);
    return seq[tam - 1] > seq[indice_maior] ? tam - 1 : indice_maior;
}

TEST_CASE("Acha o índice do maior na sequência") {
    int seq[] = {5, 4, 2, 4, 8};
    CHECK(busca_indice_maior(seq, 5) == 4);
    CHECK(busca_indice_maior(seq, 5) != 2);
}

TEST_CASE("Verifica se o número existe na sequência") {
    int seq[] = {5, 2, 8, 6, 1};
    CHECK(existe(5, seq, 5) == true);
    CHECK(existe(1, seq, 5) == true);
    CHECK(existe(3, seq, 5) == false);
}
