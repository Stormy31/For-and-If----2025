#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

