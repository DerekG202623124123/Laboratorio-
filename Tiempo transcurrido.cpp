#include <iostream>
using namespace std;

void tiempoTranscurrido(int h1, int m1, int s1, int h2, int m2, int s2) {
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int dif = t2 - t1;

    if (dif < 0) {
        cout << "El primer horario debe ser anterior al segundo." << endl;
        return;
    }

    int h = dif / 3600;
    int m = (dif % 3600) / 60;
    int s = dif % 60;
    
    cout << "Tiempo transcurrido: " << h << ":" << m << ":" << s << endl;
}

int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << "Ingrese horario 1 (hh mm ss): ";
    cin >> h1 >> m1 >> s1;
    cout << "Ingrese horario 2 (hh mm ss): ";
    cin >> h2 >> m2 >> s2;
    
    tiempoTranscurrido(h1, m1, s1, h2, m2, s2);
    return 0;
}