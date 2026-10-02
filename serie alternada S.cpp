#include <iostream>
using namespace std;

int main() {
    double x, suma = 0, termino = 1;
    int n;
    cout << "Ingrese X y n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        termino *= (x / i);
        if (i % 2 != 0) {
            suma += termino;
        } else {
            suma -= termino;
        }
    }
    cout << "Suma de la serie alternada: " << suma << endl;
    return 0;
}