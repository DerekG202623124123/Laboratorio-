#include <iostream>
#include <string>
using namespace std;

string determinarEstacion(int dia, int mes) {
    int fecha = mes * 100 + dia;

    if (fecha >= 921 && fecha < 1221) {
        return "primavera";
    } else if (fecha >= 1221 || fecha < 321) {
        return "verano";
    } else if (fecha >= 321 && fecha < 621) {
        return "otono";
    } else if (fecha >= 621 && fecha < 921) {
        return "invierno";
    }
    return "Fecha no valida";
}

int main() {
    int dia, mes;
    cout << "Ingrese dia y mes (ej. 21 9): ";
    cin >> dia >> mes;
    cout << "La estacion es: " << determinarEstacion(dia, mes) << endl;
    return 0;
}