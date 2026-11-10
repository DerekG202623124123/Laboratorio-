#include <iostream>
#include <string>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(int A[], int &n);
bool existeElemento(const int B[], int nB, int valor);
int eliminarDuplicados(const int A[], int n, int B[]);
void mostrarVector(const int v[], int n, const string &nombre);

int main() {
    int A[MAX_CAP], B[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 12: ELIMINAR VALORES DUPLICADOS ===" << endl;
    leerVector(A, n);

    int nB = eliminarDuplicados(A, n, B);

    mostrarVector(A, n, "Vector Original A");
    mostrarVector(B, nB, "Vector Sin Duplicados B");
    cout << "Cantidad de elementos validos en B: " << nB << endl;

    return 0;
}

void leerVector(int A[], int &n) {
    do {
        cout << "Ingrese la cantidad de elementos (1 a " << MAX_CAP << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX_CAP);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

bool existeElemento(const int B[], int nB, int valor) {
    for (int i = 0; i < nB; i++) {
        if (B[i] == valor) {
            return true;
        }
    }
    return false;
}

int eliminarDuplicados(const int A[], int n, int B[]) {
    int nB = 0;
    for (int i = 0; i < n; i++) {
        if (!existeElemento(B, nB, A[i])) {
            B[nB] = A[i];
            nB++;
        }
    }
    return nB;
}

void mostrarVector(const int v[], int n, const string &nombre) {
    cout << nombre << ": [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}