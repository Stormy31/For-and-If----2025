#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    int sumaDígitos = 0;

    cout << "Introduce un número entero: ";
    cin >> numero;

    
    string numeroStr = to_string(numero);

    
    for (size_t i = 0; i < numeroStr.length(); ++i) {
        
        suma Dígitos += numeroStr[i] - '0'; 
    }

    cout << "La suma de los dígitos de " << numero << " es " << suma Dígitos << endl;

    return 0;
}
