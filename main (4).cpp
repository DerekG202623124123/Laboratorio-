#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}