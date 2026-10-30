#include <iostream>
using namespace std;

void calcularNotasAlumnos() {
    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        double p1, p2, practico, examenFinal;
        int faltas;

        cout << "\nParcial 1: "; cin >> p1;
        cout << "Parcial 2: "; cin >> p2;
        cout << "Practico: "; cin >> practico;
        cout << "Examen Final: "; cin >> examenFinal;
        cout << "Faltas (de 48 clases): "; cin >> faltas;

        if (faltas > 9) { // Mas del 20% de 48 clases
            examenFinal = 0.0;
            cout << "-> Examen final anulado por limite de faltas." << endl;
        }

        double promParciales = (p1 + p2) / 2.0;
        double NF = (promParciales * 0.40) + (practico * 0.20) + (examenFinal * 0.40);

        cout << "Nota Final: " << NF << endl;
        cout << "Estado: " << (NF >= 51 ? "APROBADO" : "REPROBADO") << endl;

        cout << "¿Otro alumno? (s/n): "; cin >> continuar;
    }
}

int main() {
    calcularNotasAlumnos();
    return 0;
}