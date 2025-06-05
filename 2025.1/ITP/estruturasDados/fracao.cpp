#include <iostream>
using namespace std;

struct Frac {
    int num, den;
};
Frac mult (Frac f1, Frac f2) {
    Frac final;
    final.num = f1.num * f2.num;
    final.den = f1.den * f2.den;
    return final;
}

int main() {
    Frac f1 = {}, f2 = {};
    f1.num = 6;
    f1.den = 3;

    f2.num = 3;
    f2.den = 3;
    Frac f3 = mult(f1, f2);
    cout << f3.num << "/" << f3.den << endl;
    return 0;
}
