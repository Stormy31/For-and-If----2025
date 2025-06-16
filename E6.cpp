#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    cout << "Introduce una palabra: ";
    cin >> palabra;

    for (size_t i = 0; i < palabra.length(); ++i) {
        cout << palabra[i] << endl;
    }
    return 0;
}