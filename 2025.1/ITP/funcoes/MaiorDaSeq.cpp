#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
// Escreva uma função que recebe um vetor de inteiros e o número de elementos dele e retornar o maior valor do vetor.
int maior(int seq[], int tamanho) {
    int maior = seq[0];
    for (int i = 1; i < tamanho; i++) {
        if (seq[i] > maior) {
            maior = seq[i];
        }
    }
    return maior;
}

TEST_CASE("Mostra o maior valor da sequência") {
    int seq1 [6] = {2, 3, 4, 5, 6, 7};
    int seq2 [5] = {7, 8, 10, 1, 3};
    CHECK(maior(seq1, 6) == 7);
    CHECK(maior(seq2, 5) == 10);
}
