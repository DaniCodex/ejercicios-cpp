#include <iostream>
using namespace std;
/*Desarrolle un algoritmo que le permita implementar un pequeño menú de opciones con las operaciones matemáticas básicas 
(suma, resta, multiplicación y división), ingrese dos números, indique la operación que desea realizar y muestre el resultado de 
la operación en pantalla. Debe tener en cuenta que si ingresa un valor que no se encuentre en el menú de opciones, se debe mostrar 
un mensaje de error. Validar que los números ingresados sean positivos.*/

int main() {
    int num1 , num2, operacion, resultado;

    cout << " ------------- MENU DE OPCIONES ------------------"  << endl;
    cout << " 1) SUMA"  << endl;
    cout << " 2) RESTA"  << endl;
    cout << " 3) MULTIPLICACION"  << endl;
    cout << " 4) DIVISION "  << endl;
    cout << " ------------------------------------------------" << endl;

    cout << "Seleccione su operacion: "; cin >> operacion;
    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;

    if (num1 <= 0 || num2  <= 0) {
        cout << "Los valores deben ser positivos";
        return 1;
    } else {
         if ( operacion == 1 ) {
            resultado = num1 + num2;
        } else if (operacion == 2) {
            resultado = num1 - num2;
        } else if (operacion == 3) {
            resultado = num1 * num2;
        } else if (operacion == 4) {
            resultado = num1 / num2;
        } else {
            cout << "Ingrese una operacion valida";
            return 1;
        }
    }

   

    cout << "El resultado es " << resultado;

    
}

