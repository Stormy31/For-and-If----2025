#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    int sumaDígitos = 0;

    cout << "Introduce un número entero: ";
    cin >> numero;

    // Convertimos el número a string
    string numeroStr = to_string(numero);

    // Sumamos los dígitos usando un bucle for
    for (size_t i = 0; i < numeroStr.length(); ++i) {
        // Convertimos cada carácter a su valor numérico y lo sumamos
        suma Dígitos += numeroStr[i] - '0'; // Restamos '0' para convertir char a int
    }

    cout << "La suma de los dígitos de " << numero << " es " << suma Dígitos << endl;

    return 0;
}
