#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_CAP = 100;

// Declaración de prototipos
void leerVector(double v[], int &n);
double obtenerMaximo(const double v[], int n);
void mostrarResultado(const double v[], int n, double maximo);

int main() {
    double datos[MAX_CAP];
    int n = 0;

    cout << "=== EJERCICIO 01: VALOR MAXIMO ===" << endl;
    leerVector(datos, n);
    
    double maximo = obtenerMaximo(datos, n);
    mostrarResultado(datos, n, maximo);

    return 0;
}

void leerVector(double v[], int &n) {
    do {
        cout << "Ingrese la cantidad de elementos (1 a " << MAX_CAP << "): ";
        cin >> n;
        if (n <= 0 || n > MAX_CAP) {
            cout << "Error: Cantidad invalida. Intente de nuevo." << endl;
        }
    } while (n <= 0 || n > MAX_CAP);

    cout << "Ingrese " << n << " numeros reales:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> v[i];
    }
}

double obtenerMaximo(const double v[], int n) {
    double maxVal = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
        }
    }
    return maxVal;
}

void mostrarResultado(const double v[], int n, double maximo) {
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Vector ingresado: [ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i < n - 1 ? ", " : " ");
    }
    cout << "]" << endl;
    cout << "El valor maximo es: " << maximo << endl;
}