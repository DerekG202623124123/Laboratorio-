#include <iostream>
using namespace std;

int main() {
    int N;
    long long producto = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        producto *= i;
    }
    cout << "Producto: " << producto << endl;
    return 0;
}