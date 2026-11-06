#include <iostream>
#include <string>
using namespace std;

void LITERAL(int d, int m, int a) {
    string meses[] = {"", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    if (m >= 1 && m <= 12) {
        cout << d << " de " << meses[m] << " de " << a << endl;
    } else {
        cout << "Mes invalido" << endl;
    }
}

int main() {
    LITERAL(20, 5, 1999);
    return 0;
}