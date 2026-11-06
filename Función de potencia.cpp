#include <iostream>
#include <cmath>
using namespace std;

double POTEN(double x, double y) {
    return pow(x, y);
}

int main() {
    double base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;
    cout << "Resultado: " << POTEN(base, exponente) << endl;
    return 0;
}