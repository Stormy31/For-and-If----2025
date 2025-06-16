#include <iostream>
using namespace std;
int main ()
{
    // Listas o arrays.    Vector 

    int numeros[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    
    cout << "Conteo del 1 al 10" << endl;
    for(int i=0; i <10; i++){
        cout << "La edad del elemento " << i <<  "es:" << numeros [i] << endl;
    }
    cout << endl;
    cout << "Conteo del 10 al 1" << endl;
    for(int i=9; i > -1; i--){
        cout << "La edad del elemento " << i <<  "es:" << numeros [i] << endl;
    }











}