#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerDatos(double v[], int &n);
double calcularPromedio(const double v[], int n);
void mostrarPromedio(const double v[], int n, double promedio);

int main() {
    double datos[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 03: PROMEDIO DEL VECTOR ===" << endl;
    leerDatos(datos, n);

    double prom = calcularPromedio(datos, n);
    mostrarPromedio(datos, n, prom);

    return 0;
}

void leerDatos(double v[], int &n) {
    do {
        cout << "Ingrese la cantidad de numeros reales (n > 0): ";
        cin >> n;
        if (n <= 0 || n > MAX_CAP) {
            cout << "Tamano invalido. Debe estar entre 1 y " << MAX_CAP << "." << endl;
        }
    } while (n <= 0 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "Numero [" << i + 1 << "]: ";
        cin >> v[i];
    }
}

double calcularPromedio(const double v[], int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma / n;
}

void mostrarPromedio(const double v[], int n, double promedio) {
    cout << "\n--- RESULTADO ---" << endl;
    cout << "Datos: [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
    cout << fixed << setprecision(2);
    cout << "El promedio de los elementos es: " << promedio << endl;
}