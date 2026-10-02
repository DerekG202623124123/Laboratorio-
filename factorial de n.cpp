#include <iostream>
using namespace std;

int main() {
    int N;
    long long fac = 1;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        fac *= i;
    }
    cout << "Factorial: " << fac << endl;
    return 0;
}