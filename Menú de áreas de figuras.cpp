#include <iostream>
using namespace std;

void calcularAreasMenu() {
    int opcion;
    cout << "1. Cuadrado\n2. Circulo\n3. Triangulo\nElija opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        double L; cout << "Lado: "; cin >> L;
        cout << "Area = " << L * L << endl;
    } else if (opcion == 2) {
        double R; cout << "Radio: "; cin >> R;
        cout << "Area = " << 3.14159 * R * R << endl;
    } else if (opcion == 3) {
        double B, H; cout << "Base y Altura: "; cin >> B >> H;
        cout << "Area = " << (B * H) / 2.0 << endl;
    } else {
        cout << "Opcion invalida." << endl;
    }
}

int main() {
    calcularAreasMenu();
    return 0;
}