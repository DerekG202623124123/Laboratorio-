#include <iostream>
using namespace std;

int main() {
    double x, suma = 0;
    int n;
    cout << "Ingrese X y el limite impar n: ";
    cin >> x >> n;
    
    double termino = x;
    long long factorial = 1;
    int signo = 1;

    for (int i = 1; i <= n; i += 2) {
        if (i == 1) {
            factorial = 1;
            termino = x;
        } else {
            factorial *= (i - 1) * i;
            termino *= x * x;
        }
        suma += signo * (termino / factorial);
        signo = -signo;
    }
    cout << "Suma de la serie: " << suma << endl;
    return 0;
}