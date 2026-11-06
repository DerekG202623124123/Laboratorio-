#include <iostream>
using namespace std;

void SISTEMA(double A, double B, double C, double D, double E, double F, double &X, double &Y) {
    // Ax + By = -C
    // Dx + Ey = -F
    double det = A * E - B * D;
    if (det == 0) {
        cout << "El sistema no tiene solucion unica." << endl;
        return;
    }
    X = ((-C) * E - B * (-F)) / det;
    Y = (A * (-F) - (-C) * D) / det;
}

int main() {
    double X, Y;
    SISTEMA(1, 2, 3, 4, 5, 6, X, Y);
    cout << "Solucion: X = " << X << ", Y = " << Y << endl;
    return 0;
}