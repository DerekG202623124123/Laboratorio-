#include <iostream>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(int v[], int &n);
bool esCapicua(const int v[], int n);
void mostrarResultado(const int v[], int n, bool resultado);

int main() {
    int datos[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 05: VECTOR CAPICUA ===" << endl;
    leerVector(datos, n);

    bool capicua = esCapicua(datos, n);
    mostrarResultado(datos, n, capicua);

    return 0;
}

void leerVector(int v[], int &n) {
    do {
        cout << "Ingrese el tamano del vector (n > 0): ";
        cin >> n;
    } while (n <= 0 || n > MAX_CAP);

    cout << "Ingrese " << n << " numeros enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "]: ";
        cin >> v[i];
    }
}

bool esCapicua(const int v[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

void mostrarResultado(const int v[], int n, bool resultado) {
    cout << "\nVector: [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;

    if (resultado) {
        cout << "El vector ES capicua." << endl;
    } else {
        cout << "El vector NO es capicua." << endl;
    }
}