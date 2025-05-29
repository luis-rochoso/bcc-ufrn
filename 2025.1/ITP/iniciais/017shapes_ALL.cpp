#include <iostream>
using namespace std;

int main() {

int n, count;
cout << "Digite o tamanho do lado para a criação dos polígonos: ";
cin >> n;

for (int i = 0; i < n; i++) {
    cout << "*";
}
cout << endl;
// n - 2 - i
for (int i = 1; i <= (n-2); i++) {
    cout << "*";
    for (int j = 1; j <= (n - 2 - i); j++) {
        cout << " ";
    }
    cout << "*" << endl;
}
if (n != 1)
{
    cout << "*" << endl << endl;
}

cout << "*" << endl;

// (n - 1) - (n - i)
for (int i = 1; i <= (n-2); i++) {
    cout << "*";
    for (int j = 1; j <= ((n - 1) - (n - i)); j++) {
        cout << " ";
    }
    cout << "*" << endl;
}
if (n != 1)
{
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
}
cout << endl << endl;

for (int i = 0; i < n; i++) {
    cout << "*";
}
cout << endl;

for (int i = 1; i <= (n-2); i++) {
    cout << "*";
    for (int j = 1; j <= (n - 2); j++) {
        cout << " ";
    }
    cout << "*" << endl;
}
if (n != 1)
{
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

if (n % 2 != 0) {
    for (int i = 0; i <n; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < ((n / 2) - 1); i++) {
        cout << "*";
        for (int j = 0; j < ((n / 2) - 1); j++) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < ((n / 2) - 1); j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < ((n / 2) - 1); i++) {
        cout << "*";
        for (int j = 0; j < ((n / 2) - 1); j++) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < ((n / 2) - 1); j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

else {
    cout << "A última forma só é criada se o tamanho do lado for ímpar." << endl;
}
    return 0;
}