#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x - 2;
}

double df(double x) {
    return 2 * x;
}

int main() {
    double x = 1.0;
    double tol = 1e-6;
    int max_iter = 100;
    int iter = 0;
    double erro;

    do {
        double x_ant = x;
        x = x - f(x) / df(x);
        erro = fabs(x - x_ant);
        iter++;

        cout << "Itera��o " << iter << ": x = " << x << " erro = " << erro << endl;

        if (iter >= max_iter) {
            cout << "N�mero m�ximo de itera��es atingido." << endl;
            break;
        }
    } while (erro > tol);

    cout << "Aproxima��o da raiz de v2: " << x << endl;
    cout << "Verifica��o: x^2 = " << x * x << endl;

    return 0;
}
