#include <iostream>
using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, r;
    cout << "Ingrese n y r: ";
    cin >> n >> r;
    if (n >= r && r >= 0) {
        long long C = FAC(n) / (FAC(r) * FAC(n - r));
        cout << "Combinatoria: " << C << endl;
    } else {
        cout << "Valores invalidos." << endl;
    }
    return 0;
}