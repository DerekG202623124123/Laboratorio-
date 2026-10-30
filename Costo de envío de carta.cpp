#include <iostream>
using namespace std;

void calcularCostoCarta(double P) {
    if (P > 0 && P <= 50) {
        cout << "Costo: Bs. 1.50" << endl;
    } else if (P > 50 && P <= 100) {
        cout << "Costo: Bs. 4.00" << endl;
    } else if (P > 100 && P <= 200) {
        cout << "Costo: Bs. 6.00" << endl;
    } else if (P > 200 && P <= 350) {
        cout << "Costo: Bs. 10.50" << endl;
    } else if (P > 350 && P <= 500) {
        cout << "Costo: Bs. 15.00" << endl;
    } else if (P > 500) {
        cout << "NO PUEDE ENVIAR COMO CARTA" << endl;
    } else {
        cout << "Peso no valido" << endl;
    }
}

int main() {
    double peso;
    cout << "Ingrese el peso en gramos (P): ";
    cin >> peso;
    calcularCostoCarta(peso);
    return 0;
}