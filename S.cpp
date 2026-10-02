#include <iostream>
using namespace std;

int main() {
    double x, suma = 0, termino = 1;
    int n;
    cout << "Ingrese X y n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        termino *= x;
        suma += termino;
    }
    cout << "Suma de la serie: " << suma << endl;
    return 0;
}