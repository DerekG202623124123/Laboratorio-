#include <iostream>
#include <cmath>
using namespace std;

void resolverEcuacionCuadraticaCompleta(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "Infinitas soluciones." << endl;
            else cout << "Sin solucion." << endl;
        } else {
            cout << "Ecuacion de primer grado: x = " << -c / b << endl;
        }
    } else {
        double discriminante = b * b - 4 * a * c;
        if (discriminante > 0) {
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Dos soluciones reales: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (discriminante == 0) {
            cout << "Solucion unica: x = " << -b / (2 * a) << endl;
        } else {
            double real = -b / (2 * a);
            double imag = sqrt(-discriminante) / (2 * a);
            cout << "Soluciones complejas: " << real << " + " << imag << "i y " << real << " - " << imag << "i" << endl;
        }
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese coeficientes a, b y c: ";
    cin >> a >> b >> c;
    resolverEcuacionCuadraticaCompleta(a, b, c);
    return 0;
}