#include <iostream>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double A[], int &n);
void invertirEnSitio(double A[], int n);
void mostrarVector(const double A[], int n, const string &mensaje);

int main() {
    double A[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 13: INVERTIR EN EL MISMO VECTOR ===" << endl;
    leerVector(A, n);

    mostrarVector(A, n, "Vector Antes de Invertir");
    invertirEnSitio(A, n);
    mostrarVector(A, n, "Vector Despues de Invertir");

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

void invertirEnSitio(double A[], int n) {
    for (int i = 0; i < n / 2; i++) {
        double temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }
}

void mostrarVector(const double A[], int n, const string &mensaje) {
    cout << mensaje << ": [ ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}