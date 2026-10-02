#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            suma += i;
        } else {
            suma -= i;
        }
    }
    cout << "Suma alternada: " << suma << endl;
    return 0;
}