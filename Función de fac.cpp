#include <iostream>
using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Factorial: " << FAC(n) << endl;
    return 0;
}