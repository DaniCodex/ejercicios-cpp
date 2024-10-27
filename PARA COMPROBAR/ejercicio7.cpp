/*Desarrolle una aplicación en C++, que permita ingresar un intervalo o rango de números (DESDE y HASTA), luego permita ingresar un número N. Finalmente, muestre todos los números múltiplos de N.*/

#include <iostream>
using namespace std;

int main () {
    int desde, hasta, N;

    cout << "Ingrese el numero DESDE: "; cin >> desde;
    cout << "Ingrese el numero HASTA: "; cin >> hasta;

    cout << "Ingrese el numero N: "; cin >> N;

    cout << "Multiplos de " << N << " entre " << desde << " y " << hasta << " son: " << endl;

    for (int i = desde; i <= hasta; i++) {
       if (i % N == 0) {
        cout << i << " ";
       }
    }
    
}