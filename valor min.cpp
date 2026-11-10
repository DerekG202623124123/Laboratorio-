#include <iostream>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double v[], int &n);
double obtenerMinimo(const double v[], int n);
void mostrarResultado(const double v[], int n, double minimo);

int main() {
    double datos[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 02: VALOR MINIMO ===" << endl;
    leerVector(datos, n);

    double minimo = obtenerMinimo(datos, n);
    mostrarResultado(datos, n, minimo);

    return 0;
}

void leerVector(double v[], int &n) {
    do {
        cout << "Ingrese la cantidad de elementos (1 a " << MAX_CAP << "): ";
        cin >> n;
        if (n <= 0 || n > MAX_CAP) {
            cout << "Error: El tamano debe ser mayor a 0 y menor o igual a " << MAX_CAP << "." << endl;
        }
    } while (n <= 0 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor para la posicion [" << i << "]: ";
        cin >> v[i];
    }
}

double obtenerMinimo(const double v[], int n) {
    double minVal = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < minVal) {
            minVal = v[i];
        }
    }
    return minVal;
}

void mostrarResultado(const double v[], int n, double minimo) {
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Elementos del vector: [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
    cout << "El valor minimo encontrado es: " << minimo << endl;
}