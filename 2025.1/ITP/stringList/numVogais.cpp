#include <iostream>
#include <cstring>
using namespace std;
// leia uma palavra e retorne o número de vogais dela
int main() {
    char palavra [47];
    cin >> palavra;
    int vogais = 0;
    for (int i = 0; i <= strlen(palavra); i++) {
        if (palavra [i] == 'a' || palavra [i] == 'A' || palavra [i] == 'e' || palavra [i] == 'E' || palavra [i] == 'i' || palavra [i] == 'I' || palavra [i] == 'o' || palavra [i] == 'O' || palavra [i] == 'u' || palavra [i] == 'U') {
            vogais++;
        }
    }
    cout << vogais << endl;
    return 0;
}