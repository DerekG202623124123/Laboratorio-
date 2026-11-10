#include <iostream>

using namespace std;

const int MAX_CAP = 100;

// Prototipos propios
double valorAbsoluto(double x);
void leerVector(double A[], int &n);
double obtenerMayorDiferencia(const double A[], int n, double &e1, double &e2);
void mostrarResultado(const double A[], int n, double maxDif, double e1, double e2);

int main() {
    double A[MAX_CAP];
    int n = 0;
    double elem1 = 0.0, elem2 = 0.0;

    cout << "=== EJERCICIO 08: MAYOR DIFERENCIA ENTRE CONSECUTIVOS ===" << endl;
    leerVector(A, n);

    double maxDif = obtenerMayorDiferencia(A, n, elem1, elem2);
    mostrarResultado(A, n, maxDif, elem1, elem2);

    return 0;
}

double valorAbsoluto(double x) {
    return (x < 0) ? -x : x;
}

void leerVector(double A[], int &n) {
    do {
        cout << "Ingrese la cantidad de elementos (n >= 2): ";
        cin >> n;
    } while (n < 2 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

double obtenerMayorDiferencia(const double A[], int n, double &e1, double &e2) {
    double maxDif = valorAbsoluto(A[1] - A[0]);
    e1 = A[0];
    e2 = A[1];

    for (int i = 1; i < n - 1; i++) {
        double dif = valorAbsoluto(A[i + 1] - A[i]);
        if (dif > maxDif) {
            maxDif = dif;
            e1 = A[i];
            e2 = A[i + 1];
        }
    }
    return maxDif;
}

void mostrarResultado(const double A[], int n, double maxDif, double e1, double e2) {
    cout << "\nVector: [ ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
    cout << "La mayor diferencia absoluta es: " << maxDif << endl;
    cout << "Producida por los elementos consecutivos: " << e1 << " y " << e2 << endl;
}