/*Desarrolla una aplicación en C++, que permita ingresar dos números enteros A y B. Luego debe mostrar los resultados de cada una de las siguientes operaciones:
- Suma A+B
- Resta A-B
- Multiplicación A*B
- División A/B
- Resido o Módulo A%B*/

#include <iostream>
using namespace std;


int main () {
    double numA , numB;

    cout << "Ingresa el primer numero: "; cin >> numA;
    cout << "Ingresa el segundo numero: "; cin >> numB;

    cout << "LA SUMA ES: " << numA + numB << "\n";
    cout << "LA RESTA ES: " << numA - numB << "\n";
    cout << "LA MULTIPLICACION ES: " << numA * numB << "\n";
    cout << "LA DIVISION ES: " << numA / numB << "\n";

    int modNumA = numA;
    int modNumB = numB;

    cout << "EL RESIDUO ES: " << modNumA % modNumB << "\n";

}