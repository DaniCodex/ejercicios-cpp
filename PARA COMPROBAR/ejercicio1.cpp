/*Desarrolle una aplicación en consola C++, que permita ingresar un número entero, para luego mostrar un mensaje si el número es PAR o IMPAR.*/

#include <iostream>
using namespace std;

int main() {
   int numero;

   cout << "Ingrese un numero entero: "; cin >> numero;

   if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par";
   } else {
        cout << "El numero " << numero << " es impar";
   }
}