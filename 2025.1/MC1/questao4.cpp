#include <iostream>
using namespace std;

void extMDC(int a, int b) {
    int x = 0, y = b, previo_x = 1, previo_y = a, auxiliar;
    // previo_y e y são o "a" e o "b" em cada iteração, permitindo conservar o valor original dos parâmetros
    // previo_x e x irão calcular o coeficiente para o parâmetro "a" junto ao quociente de "a" por "b" de cada iteração
    // auxiliar serve para trocar valores entre variáveis

    while (y != 0) { // ou seja, até ocorrer uma divisão sem resto
        int quociente = previo_y / y, resto = previo_y % y;
        if (a % b == 0 || b % a == 0 ||resto != 0) {
            cout << previo_y << " = " << quociente << " * " << y << " + " << resto;
            cout << " --> " << resto << " = " << previo_y << " - " << quociente << " * " << y << endl;
        }
        auxiliar = y;
        y = previo_y - (quociente * y);
        previo_y = auxiliar;
        auxiliar = x;
        x = previo_x - (quociente * x);
        previo_x = auxiliar;
    }
    // MDC é o valor de "a" (previo_y) ao final do laço
    // resta calcular o coeficiente para o parâmetro "b"
    int coef_b;
    if (b == 0) {
        coef_b = 0;
    }
    else {
        coef_b = (previo_y - (previo_x * a)) / b;
    }
    cout << "Coeficientes de Bézout: " << previo_x << " " << coef_b << endl;
    cout << "MDC: " << previo_y << endl;
    cout << "Identidade: " << previo_y << " = " << previo_x << " * " << a << " + " << coef_b << " * " << b << endl;
    return;
}

int main() {
    int a, b;
    cin >> a >> b;
    extMDC(a, b);
    return 0;
}