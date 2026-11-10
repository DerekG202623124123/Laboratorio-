#include <iostream>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double v[], int &n, const string &nombre);
void concatenar(const double A[], int n, const double B[], int m, double C[]);
void mostrarVector(const double v[], int n, const string &nombre);

int main() {
    double A[MAX_CAP], B[MAX_CAP], C[MAX_CAP * 2];
    int n = 0, m = 0;

    cout << "=== EJERCICIO 09: CONCATENAR DOS VECTORES ===" << endl;
    leerVector(A, n, "A");
    leerVector(B, m, "B");

    concatenar(A, n, B, m, C);

    mostrarVector(A, n, "Vector A");
    mostrarVector(B, m, "Vector B");
    mostrarVector(C, n + m, "Vector Concatenado C (n+m)");

    return 0;
}

void leerVector(double v[], int &n, const string &nombre) {
    do {
        cout << "Ingrese cantidad de elementos para Vector " << nombre << " (1 a " << MAX_CAP << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> v[i];
    }
}

void concatenar(const double A[], int n, const double B[], int m, double C[]) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i];
    }
    for (int j = 0; j < m; j++) {
        C[n + j] = B[j];
    }
}

void mostrarVector(const double v[], int n, const string &nombre) {
    cout << nombre << ": [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}