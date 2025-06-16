#include <iostream>
using namespace std;

int main() {
    int numero;
    int contadorDivisores = 0;

    cout << "Introduce un número entero: ";
    cin >> numero;

    // Verificamos si el número es menor o igual a 1
    if (numero <= 1) {
        cout << numero << " no es un número primo." << endl;
    } else {
        // Contamos los divisores del número
        for (int i = 1; i <= numero; ++i) {
            if (numero % i == 0) {
                contadorDivisores++;
            }
        }

        // Un número es primo si tiene exactamente 2 divisores: 1 y el mismo número
        if (contadorDivisores == 2) {
            cout << numero << " es un número primo." << endl;
        } else {
            cout << numero << " no es un número primo." << endl;
        }
    }

    return 0;
}
