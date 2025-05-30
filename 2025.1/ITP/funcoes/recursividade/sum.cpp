#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int sum(int size, int seq[]) {
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return seq[0];
    }
    return seq[0] + sum(size - 1, seq + 1);
}

TEST_CASE ("Realiza a soma entre todos os valores da sequência") {
    int seq1 [] = {6};
    int seq2 [] = {0, 1, 1, 1, 1};
    int seq0 [] = {};
    int seq3 [] = {7, 5, 6, 4, 5, -3, 17};
    CHECK (sum (1, seq1) == 6);
    CHECK (sum (5, seq2) == 4);
    CHECK (sum (0, seq0) == 0);
    CHECK (sum (7, seq3) == 41);
}
