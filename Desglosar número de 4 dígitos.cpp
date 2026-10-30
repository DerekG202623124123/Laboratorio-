#include <iostream>
using namespace std;

void desglosarNumero(int N) {
    if (N > 0 && N < 10000) {
        int u = N % 10;
        int d = (N / 10) % 10;
        int c = (N / 100) % 10;
        int m = (N / 1000) % 10;
        
        cout << "Unidades (u): " << u << endl;
        cout << "Decenas (d): " << d << endl;
        cout << "Centenas (c): " << c << endl;
        cout << "Unidades de mil (m): " << m << endl;
    } else {
        cout << "El numero debe ser mayor a 0 y menor a 10000." << endl;
    }
}

int main() {
    int N;
    cout << "Ingrese un numero entero positivo (<10000): ";
    cin >> N;
    desglosarNumero(N);
    return 0;
}