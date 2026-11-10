#include <iostream>
#include <string>

using namespace std;

// Prototipos
int leerNumero();
string convertirALetras(int numero);
void mostrarResultado(int numero, const string &letras);

int main() {
    cout << "=== EJERCICIO 07: NUMERO ESCRITO EN LETRAS ===" << endl;
    int num = leerNumero();
    string texto = convertirALetras(num);
    mostrarResultado(num, texto);

    return 0;
}

int leerNumero() {
    int num;
    do {
        cout << "Ingrese un numero entero entre 0 y 20: ";
        cin >> num;
        if (num < 0 || num > 20) {
            cout << "Numero fuera de rango. Reintente." << endl;
        }
    } while (num < 0 || num > 20);
    return num;
}

string convertirALetras(int numero) {
    // Vector de cadenas de 0 a 20
    const string NOMBRES[21] = {
        "CERO", "UNO", "DOS", "TRES", "CUATRO",
        "CINCO", "SEIS", "SIETE", "OCHO", "NUEVE",
        "DIEZ", "ONCE", "DOCE", "TRECE", "CORTORCE",
        "QUINCE", "DIECISEIS", "DIECISIETE", "DIECIOCHO", "DIECINUEVE",
        "VEINTE"
    };
    return NOMBRES[numero];
}

void mostrarResultado(int numero, const string &letras) {
    cout << "\nEl numero " << numero << " expresado en letras es: " << letras << endl;
}