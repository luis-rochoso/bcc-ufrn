#include <iostream>
using namespace std;

int main(){

char min;

cout << "Digite uma única letra minúscula: ";
cin >> min;

char max = min - 32;
cout << "Sua equivalente maiúscula é '" << max << "'." << endl;

    return 0;
}