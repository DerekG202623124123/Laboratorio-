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
    cout << "MCD: " << tempA << endl;
    return 0;
}