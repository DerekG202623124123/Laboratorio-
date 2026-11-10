#include <iostream>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVectorOrdenado(double v[], int &n, const string &nombre);
void intercalar(const double A[], int n, const double B[], int m, double C[]);
void mostrarVector(const double v[], int n, const string &nombre);

int main() {
    double A[MAX_CAP], B[MAX_CAP], C[MAX_CAP * 2];
    int n = 0, m = 0;

    cout << "=== EJERCICIO 10: INTERCALAR DOS VECTORES ORDENADOS ===" << endl;
    leerVectorOrdenado(A, n, "A");
    leerVectorOrdenado(B, m, "B");

    intercalar(A, n, B, m, C);

    mostrarVector(A, n, "Vector A");
    mostrarVector(B, m, "Vector B");
    mostrarVector(C, n + m, "Vector Intercalado C");

    return 0;
}

void leerVectorOrdenado(double v[], int &n, const string &nombre) {
    do {
        cout << "Ingrese tamano del vector ordenado " << nombre << ": ";
        cin >> n;
    } while (n <= 0 || n > MAX_CAP);

    cout << "Ingrese los elementos del vector " << nombre << " en ORDEN ASCENDENTE:" << endl;
    for (int i = 0; i < n; i++) {
        do {
            cout << nombre << "[" << i << "]: ";
            cin >> v[i];
            if (i > 0 && v[i] < v[i - 1]) {
                cout << "Error: El elemento debe ser mayor o igual que el anterior (" << v[i-1] << ")." << endl;
            }
        } while (i > 0 && v[i] < v[i - 1]);
    }
}

void intercalar(const double A[], int n, const double B[], int m, double C[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < n) {
        C[k++] = A[i++];
    }

    while (j < m) {
        C[k++] = B[j++];
    }
}

void mostrarVector(const double v[], int n, const string &nombre) {
    cout << nombre << ": [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}