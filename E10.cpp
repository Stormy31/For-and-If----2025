#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Introduce el número de términos de la serie Fibonacci que deseas imprimir: ";
    cin >> n;

    // Verificamos que n sea un número positivo
    if (n <= 0) {
        cout << "Por favor, introduce un número entero positivo." << endl;
    } else {
        long long a = 0; // Primer término
        long long b = 1; // Segundo término

        cout << "Serie Fibonacci: " << endl;

        for (int i = 1; i <= n; ++i) {
            cout << a << " "; 

            // Calculamos el siguiente término
            long long siguiente = a + b;
            a = b; // Actualizamos a
            b = siguiente; // Actualizamos b
        }

        cout << endl; // 
    }

    return 0;
}
