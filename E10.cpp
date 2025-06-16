#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Introduce el número de términos de la serie Fibonacci que deseas imprimir: ";
    cin >> n;


    if (n <= 0) {
        cout << "Por favor, introduce un número entero positivo." << endl;
    } else {
        long long a = 0; 
        long long b = 1; 

        cout << "Serie Fibonacci: " << endl;

        for (int i = 1; i <= n; ++i) {
            cout << a << " "; 

            
            long long siguiente = a + b;
            a = b; 
            b = siguiente; 
        }

        cout << endl; 
    }

    return 0;
}
