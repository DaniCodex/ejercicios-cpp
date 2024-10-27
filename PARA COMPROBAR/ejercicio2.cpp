/*Desarrolle una aplicación en consola C++, que permita ingresar DÍA y MES de nacimiento en números, luego muestre al signo zodiacal que pertenece.

DIA = 1,2,3....28,29,30,31

MES= 1,2,3...9,10,11,12

Aries: del 21 de marzo al 19 de abril
Tauro: del 20 de abril al 20 de mayo
Géminis: del 21 de mayo al 20 de junio
Cáncer: del 21 de junio al 22 de julio
Leo: del 23 de julio al 22 de agosto
Virgo: del 23 de agosto al 22 de septiembre
Libra: del 23 de septiembre al 22 de octubre
Escorpio: del 23 de octubre al 21 de noviembre
Sagitario: del 22 de noviembre al 21 de diciembre
Capricornio: del 22 de diciembre al 19 de enero
Acuario: del 20 de enero al 18 de febrero
Piscis: del 19 de febrero al 20 de marzo*/

#include <iostream>
using namespace std;

int main() {
   int dia, mes;

    cout << "Ingrese su dia de cumpleaños: "; cin >> dia;
    cout << "Ingrese su mes de nacimiento: "; cin >> mes;

    if (mes == 3 && dia >= 21 || mes == 4 && dia <= 19) {
        cout << "El signo zodiacal es Aries " << "\n";
    } else if (mes == 4 && dia >= 20 || mes == 5 && dia <= 20) {
        cout << "El signo zodiacal es Tauro " << "\n";
    } else if (mes == 5 && dia >= 21 || mes == 6 && dia <= 20) {
        cout << "El signo zodiacal es Geminis " << "\n";
    } else if (mes == 6 && dia >= 21 || mes == 7 && dia <= 22) {
        cout << "El signo zodiacal es Cancer " << "\n";
    } else if (mes == 7 && dia >= 23 || mes == 8 && dia <= 22) {
        cout << "El signo zodiacal es Leo " << "\n";
    } else if (mes == 8 && dia >= 23 || mes == 9 && dia <= 22) {
        cout << "El signo zodiacal es Virgo " << "\n";
    } else if (mes == 9 && dia >= 23 || mes == 10 && dia <= 22) {
        cout << "El signo zodiacal es Libra " << "\n";
    } else if (mes == 10 && dia >= 23 || mes == 11 && dia <= 21) {
        cout << "El signo zodiacal es Escorpio " << "\n";
    } else if (mes == 11 && dia >= 22 || mes == 12 && dia <= 21) {
        cout << "El signo zodiacal es Sagitario " << "\n";
    } else if (mes == 12 && dia >= 22 || mes == 1 && dia <= 19) {
        cout << "El signo zodiacal es Capricornio " << "\n";
    } else if (mes == 1 && dia >= 20 || mes == 2 && dia <= 18) {
        cout << "El signo zodiacal es Acuario " << "\n";
    } else if (mes == 2 && dia >= 19 || mes == 3 && dia <= 20) {
        cout << "El signo zodiacal es Piscis " << "\n";
    }

}