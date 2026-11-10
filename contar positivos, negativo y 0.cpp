#include <iostream>

using namespace std;

const int MAX_CAP = 100;

// Prototipos
void leerVector(double v[], int &n);
void contarElementos(const double v[], int n, int &pos, int &neg, int &ceros);
void mostrarConteo(const double v[], int n, int pos, int neg, int ceros);

int main() {
	double datos[MAX_CAP];
	int n = 0;
	int pos = 0, neg = 0, ceros = 0;

	cout << "=== EJERCICIO 11: CONTAR POSITIVOS, NEGATIVOS Y CEROS ===" << endl;
	leerVector(datos, n);

	contarElementos(datos, n, pos, neg, ceros);
	mostrarConteo(datos, n, pos, neg, ceros);

	return 0;
}

void leerVector(double v[], int &n) {
	do {
		cout << "Ingrese la cantidad de elementos (1 a " << MAX_CAP << "): ";
		cin >> n;
	} while (n <= 0 || n > MAX_CAP);

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]: ";
		cin >> v[i];
	}
}

void contarElementos(const double v[], int n, int &pos, int &neg, int &ceros) {
	pos = 0;
	neg = 0;
	ceros = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > 0) {
			pos++;
		} else if (v[i] < 0) {
			neg++;
		} else {
			ceros++;
		}
	}
}

void mostrarConteo(const double v[], int n, int pos, int neg, int ceros) {
	cout << "\nVector ingresado: [ ";
	for (int i = 0; i < n; i++) {
		cout << v[i] << (i < n - 1 ? ", " : " ");
	}
	cout << "]" << endl;
	cout << "Cantidad de Positivos: " << pos << endl;
	cout << "Cantidad de Negativos: " << neg << endl;
	cout << "Cantidad de Ceros:     " << ceros << endl;
}