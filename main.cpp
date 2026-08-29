/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre, carrera;
    int edad, semestre;
    float promedio; // Tipo Real

    cout << "--- NIVEL 3: VERIFICACION DE APROBACION ---" << endl;
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    
    cout << "Ingrese la edad: ";
    cin >> edad;
    cin.ignore();
    
    cout << "Ingrese la carrera: ";
    getline(cin, carrera);
    
    cout << "Ingrese el semestre: ";
    cin >> semestre;
    
    cout << "Ingrese el promedio final: ";
    cin >> promedio;

    cout << "\n--- RESULTADO FINAL ---" << endl;
    // Condicional para verificar si aprobó o reprobó
    if (promedio >= 51) {
        cout << "El estudiante APROBO" << endl;
    } else {
        cout << "El estudiante REPROBO" << endl;
    }

    cout << "\n--- DATOS REGISTRADOS ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
    cout << "Semestre: " << semestre << endl;
    cout << "Promedio final: " << promedio << endl;

    return 0;
}