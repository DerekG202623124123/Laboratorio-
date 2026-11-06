#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binarioADecimal(string bin) {
    int dec = 0;
    int len = bin.length();
    for (int i = 0; i < len; i++) {
        if (bin[len - 1 - i] == '1') {
            dec += pow(2, i);
        }
    }
    return dec;
}

int main() {
    string bin;
    cout << "Ingrese numero binario: ";
    cin >> bin;
    cout << "Decimal: " << binarioADecimal(bin) << endl;
    return 0;
}