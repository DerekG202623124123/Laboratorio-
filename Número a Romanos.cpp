#include <iostream>
#include <string>
using namespace std;

void aRomanos(int num) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string res = "";
    for (int i = 0; i < 13; i++) {
        while (num >= valores[i]) {
            res += romanos[i];
            num -= valores[i];
        }
    }
    cout << "Romano: " << res << endl;
}

int main() {
    int n;
    cout << "Ingrese numero: ";
    cin >> n;
    aRomanos(n);
    return 0;
}