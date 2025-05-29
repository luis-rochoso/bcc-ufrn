#include <iostream>
#include <string>
using namespace std;
int main() {
    string str [50], bigStr;
    int i = 0, maior = 0, bigWord = 0;
    float mediaCount = 0;
    do {
        getline(cin, str [i]);
    }   while (str [i++] != "\0");
    for (int j = 0; j < i - 1; j++) {
        mediaCount += str [j].size();
        if (str [j].size() > maior) {
            maior = str [j].size();
        }
    }
    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < str [j].size(); k++) {
            int bigSize = 0;
            if (k == 0 && str [j] [k] != 32) {
                for (int l = k; l < str [j].size(); l++) {
                    if (str [j] [l] == 32) {
                        break;
                    }
                    bigSize++;
                }
            }
            if (str [j] [k] == ' ') {
                for (int l = k + 1; l < str [j].size(); l++) {
                    if (str [j] [l] == 32) {
                        break;
                    }
                    bigSize++;
                }
            }
            if (bigSize > bigWord) {
                bigWord = bigSize;
                bigStr = str [j].substr(k == 0 ? k : k + 1, bigWord);
            }
        }
    }
    cout << "A maior linha teve " << maior << " caracteres." << endl;
    cout << "A média de tamanho das linhas foi de " << mediaCount / (i-1) << " caracteres." << endl;
    cout << "A maior palavra foi " << bigStr << "." << endl;
    cout << "A maior palavra teve " << bigWord << " caracteres." << endl;
    return 0;
}