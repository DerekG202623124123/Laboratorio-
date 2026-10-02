#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i <= N; i += 2) {
        suma += i;
    }
    cout << "Suma de impares: " << suma << endl;
    return 0;
}