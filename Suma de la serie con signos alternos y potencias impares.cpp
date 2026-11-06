#include <iostream>
#include <cmath>
using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

double serieAlterna(int x, int n) {
    double suma = 0;
    int exponente = 1;
    for (int i = 1; i <= n; i++) {
        double termino = pow(x, exponente) / FAC(exponente);
        if (i % 2 != 0) suma += termino;
        else suma -= termino;
        exponente += 2;
    }
    return suma;
}

int main() {
    int x, n;
    cout << "Ingrese X y N (terminos): ";
    cin >> x >> n;
    cout << "Suma: " << serieAlterna(x, n) << endl;
    return 0;
}