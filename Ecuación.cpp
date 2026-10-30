#include <iostream>
#include <cmath>
using namespace std;

void resolverEcuacionCuadratica(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    if (discriminante >= 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "No existen soluciones reales." << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese a, b y c: ";
    cin >> a >> b >> c;
    resolverEcuacionCuadratica(a, b, c);
    return 0;
}