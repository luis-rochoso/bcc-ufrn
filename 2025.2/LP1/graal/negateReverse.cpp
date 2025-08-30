/* Desenvolva uma função negate  que nega o sinal de todos
os elementos no intervalo (first, last) definido sobre um
vetor de inteiros. Assuma que o intervalo passado para a função
é válido.*/

#include <iostream>
#include <sstream>
#include <iterator>

using value_type = int;


void negate(value_type*first, value_type*last) {
    while (first != last) {
        *first = -(*first);
        ++first;
    }
}

void reverse(value_type*first, value_type*last) {
    value_type aux;
    while (first != last) {
        aux = *first;
        *first = *(last-1);
        *(last-1) = aux;
        ++first;
        if (first != last) --last;
    }
}

std::string toString(value_type*first, value_type*last) {
    std::ostringstream oss;

    oss << "[ ";

    while (first != last) {
        oss << *first;
        // Adicionar vírgula somente se não for o último
        if (std::next(first) != last) {
            oss << ", ";
        }
        ++first;
    }

    oss << " ]";
    return oss.str();

}

value_type main() {
    
    value_type vetor [] {0, 2, 3, -6, 4, -84, 27};

    std::cout << "A original: " << toString(vetor, vetor+7) << std::endl;
    negate(vetor, vetor+7);
    std::cout << "A negada: " << toString(vetor, vetor + 7) << std::endl;
    negate(vetor, vetor+7);
    reverse(vetor, vetor+7);
    std::cout << "A reversa: " << toString(vetor, vetor+7) << std::endl;

    return 0;
}