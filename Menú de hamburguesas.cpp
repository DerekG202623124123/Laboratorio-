#include <iostream>
using namespace std;

void calcularFacturaRestaurante() {
    int cantH, cantHC, cantP, cantS;
    cout << "Cantidad Hamburguesas (3Bs): "; cin >> cantH;
    cout << "Cantidad Hamburguesas c/ queso (5Bs): "; cin >> cantHC;
    cout << "Cantidad Papas fritas (2Bs): "; cin >> cantP;
    cout << "Cantidad Soda (2.5Bs): "; cin >> cantS;

    double tH = cantH * 3.0, tHC = cantHC * 5.0, tP = cantP * 2.0, tS = cantS * 2.5;
    double total = tH + tHC + tP + tS;

    cout << "\nITEM\t\t\tCANT\tTOTAL" << endl;
    cout << "Hamburguesas\t\t" << cantH << "\t" << tH << endl;
    cout << "Hamburguesas c/ queso\t" << cantHC << "\t" << tHC << endl;
    cout << "Papas fritas\t\t" << cantP << "\t" << tP << endl;
    cout << "Soda\t\t\t" << cantS << "\t" << tS << endl;
    cout << "TOTAL\t\t\t\t" << total << endl;
}

int main() {
    calcularFacturaRestaurante();
    return 0;
}