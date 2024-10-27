#include <iostream>
using namespace std;

/*Desarrolle una aplicación que le permita ingresar el sueldo base y un carácter que constituya 
el estado civil de una persona (S/C/V/D) y de acuerdo a ello se incluya una bonificación 
del 5/10/15/20% respectivamente en su sueldo. Se debe mostrar el sueldo base, 
la bonificación y el sueldo total a pagar de la persona.*/

int main() {
    double sueldoBase, bonificacion, sueldoTotal;
    string estadoCivil;

    cout << "Ingrese el sueldo base de la persona: " ; cin >> sueldoBase;
    cout << "Ingrese el estado civil de la persona (S/C/V/D) : "; cin >> estadoCivil;


    if (estadoCivil == "S" || estadoCivil == "s") {
        bonificacion = sueldoBase * 0.05;
    } else if (estadoCivil == "C" || estadoCivil == "c") {
         bonificacion = sueldoBase * 0.10;
    } else if (estadoCivil == "V" || estadoCivil == "v") {
        bonificacion = sueldoBase * 0.15;
    } else if (estadoCivil == "D" || estadoCivil == "d") {
        bonificacion = sueldoBase * 0.20;
    } else {
        cout << "Ingrese una opcion valida";
        return 1;
    }

    sueldoTotal = sueldoBase + bonificacion;

    cout << "El sueldo base es de " << sueldoBase << endl;
    cout << "La bonificacion es de " << bonificacion << endl;
    cout << "El sueldo total a pagar es de " << sueldoTotal << endl;

}

