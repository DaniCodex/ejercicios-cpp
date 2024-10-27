/*Desarrolle una aplicación en C++, que permita ingresar una cantidad de notas (Validar que la cantidad notas sea mayor a 0), para luego ingresar las notas y mostrar finalmente el promedio. Luego, muestre un mensaje si aprobo o desaprobo, recuerde que se aprueba con 13, no decimales. Validar que las notas ingresadas sean de 0 a 20.*/

#include<iostream> 
using namespace std;

int main() {
    int cantidadNotas, sumaNotas = 0;
    double nota, promedio;

    do {
        cout << "Ingrese la cantidad de notas: "; cin  >> cantidadNotas;
    } while (cantidadNotas <= 0);

    for (int i = 1; i <= cantidadNotas; i++) {
        do {
            cout << "Ingrese notas del 0 al 20: "; cin >> nota;
        } while ( nota <= 0 || nota >= 20);
        
        sumaNotas = sumaNotas + nota;
    }

    promedio = sumaNotas / cantidadNotas;
    cout << "El promedio es de: " << promedio << "\n";
    
    cout << ((promedio >= 13 ) ?  "El estudiante aprobó" : "El estudiante desaprobo");

    return 0;
}
