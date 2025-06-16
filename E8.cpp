#include <iostream>
using namespace std;

int main() {
    int numero;
    int contadorDivisores = 0;

    cout << "Introduce un número entero: ";
    cin >> numero;

    
    if (numero <= 1) {
        cout << numero << " no es un número primo." << endl;
    } else {
        
        for (int i = 1; i <= numero; ++i) {
            if (numero % i == 0) {
                contadorDivisores++;
            }
        }

        
        if (contadorDivisores == 2) {
            cout << numero << " es un número primo." << endl;
        } else {
            cout << numero << " no es un número primo." << endl;
        }
    }

    return 0;
}
