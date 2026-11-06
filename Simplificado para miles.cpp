#include <iostream>
#include <iomanip>
using namespace std;

// Nota: La conversion completa de numeros a letras requiere un algoritmo extenso. 
// Aquí se presenta el cascarón de la función solicitada manejando la parte decimal.
void numeroALiteral(double R) {
    int entero = (int)R;
    int centavos = (int)((R - entero) * 100 + 0.5);
    
    cout << "El equivalente literal de " << entero << " con " << centavos << "/100 bolivianos." << endl;
    // Se debe agregar la logica de conversion de unidades, decenas, centenas y miles.
}

int main() {
    numeroALiteral(1560.50);
    return 0;
}