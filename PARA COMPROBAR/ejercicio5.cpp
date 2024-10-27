/*Desarrolle una aplicación en C++, que permita mostrar un mensaje el cual identifique los números PARES e IMPARES del 1 al 100.*/

#include <iostream>

using namespace std;

int main () {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " es par" << "\n";
        } else {
            cout << i << " es impar" << "\n";
        }
    }
    
    return 0;
}