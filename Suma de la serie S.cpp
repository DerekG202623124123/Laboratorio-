#include <iostream>
#include <cmath>
using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

double serie(int x, int n) {
    double suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += pow(x, i) / FAC(i);
    }
    return suma;
}

int main() {
    int x, n;
    cout << "Ingrese X y N: ";
    cin >> x >> n;
    cout << "Suma: " << serie(x, n) << endl;
    return 0;
}