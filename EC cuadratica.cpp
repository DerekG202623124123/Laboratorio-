#include <iostream>
#include <cmath>
using namespace std;

void ecuacionCuadratica(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d > 0) {
        cout << "Raices reales: " << (-b + sqrt(d)) / (2 * a) << " y " << (-b - sqrt(d)) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "Raiz doble: " << -b / (2 * a) << endl;
    } else {
        cout << "Raices complejas: " << -b / (2 * a) << " +/- " << sqrt(-d) / (2 * a) << "i" << endl;
    }
}

int main() {
    ecuacionCuadratica(1, -5, 6);
    return 0;
}