#include <iostream>
using namespace std;

void resolverSistemaLineal(double a, double b, double c, double d, double e, double f) {
    double det = a * e - b * d;
    double detX = c * e - b * f;
    double detY = a * f - c * d;

    if (det != 0) {
        cout << "Solucion unica: X = " << detX / det << ", Y = " << detY / det << endl;
    } else {
        if (detX == 0 && detY == 0) cout << "Infinitas soluciones." << endl;
        else cout << "Sin solucion." << endl;
    }
}

int main() {
    double a, b, c, d, e, f;
    cout << "Para aX + bY = c, ingrese a, b, c: ";
    cin >> a >> b >> c;
    cout << "Para dX + eY = f, ingrese d, e, f: ";
    cin >> d >> e >> f;
    
    resolverSistemaLineal(a, b, c, d, e, f);
    return 0;
}