#include <iostream>
#include <string>
using namespace std;
// pegue a primeira letra de cada palavra e imprima a união delas
int main() {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        str [i] = tolower(str [i]);
    }
    if (str.find(' ') != 0) {
        cout << str [0];
    }
    for (int i = 0; i < str.size(); i++) {
        if (str [i] == ' ') {
            cout << str [i + 1];
        }
    }
    cout << endl;
    return 0;
}