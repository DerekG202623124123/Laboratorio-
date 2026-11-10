#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double A[], int &n);
void calcularPromediosConsecutivos(const double A[], int n, double B[], int &nB);
void mostrarVector(const double v[], int n, const string &titulo);

int main() {
    double A[MAX_CAP];
    double B[MAX_CAP];
    int n = 0, nB = 0;

    cout << "=== EJERCICIO 06: PROMEDIOS CONSECUTIVOS DE 3 ELEMENTOS ===" << endl;
    leerVector(A, n);

    calcularPromediosConsecutivos(A, n, B, nB);

    mostrarVector(A, n, "Vector de entrada (A)");
    mostrarVector(B, nB, "Vector de promedios (B)");

    return 0;
}

void leerVector(double A[], int &n) {
    do {
        cout << "Ingrese tamano del vector (n >= 3 y n <= " << MAX_CAP << "): ";
        cin >> n;
        if (n < 3 || n > MAX_CAP) {
            cout << "Error: Debe ingresar n >= 3." << endl;
        }
    } while (n < 3 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

void calcularPromediosConsecutivos(const double A[], int n, double B[], int &nB) {
    nB = n - 2;
    for (int i = 0; i < nB; i++) {
        B[i] = (A[i] + A[i + 1] + A[i + 2]) / 3.0;
    }
}

void mostrarVector(const double v[], int n, const string &titulo) {
    cout << fixed << setprecision(2);
    cout << titulo << " (tamano " << n << "): [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}