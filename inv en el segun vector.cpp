#include <iostream>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double A[], int &n);
void invertirEnNuevoVector(const double A[], double B[], int n);
void mostrarVector(const double v[], int n, const string &nombre);

int main() {
    double A[MAX_CAP];
    double B[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 04: INVERTIR EN UN SEGUNDO VECTOR ===" << endl;
    leerVector(A, n);

    invertirEnNuevoVector(A, B, n);

    mostrarVector(A, n, "Vector Original (A)");
    mostrarVector(B, n, "Vector Invertido (B)");

    return 0;
}

void leerVector(double A[], int &n) {
    do {
        cout << "Ingrese la cantidad de elementos (1 a " << MAX_CAP << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

void invertirEnNuevoVector(const double A[], double B[], int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[n - 1 - i];
    }
}

void mostrarVector(const double v[], int n, const string &nombre) {
    cout << nombre << ": [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}