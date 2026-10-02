#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos enteros (A B): ";
    cin >> a >> b;
    int tempA = a, tempB = b;
    while (tempB != 0) {
        int residuo = tempA % tempB;
        tempA = tempB;
        tempB = residuo;
    }
    int mcd = tempA;
    int mcm = (a * b) / mcd;
    cout << "MCM: " << mcm << endl;
    return 0;
}