/*En una determinada empresa, sus empleados son evaluados al final de cada año. Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, traduciéndose en mejores beneficios. Los puntos que pueden conseguir los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios entre las cifras mencionadas. A continuación se muestra una tabla con los niveles correspondientes a cada puntuación. La cantidad de dinero conseguida en cada nivel es de S/1’000 multiplicada por la puntuación del nivel.

 
Nivel                  Puntuación

Inaceptable             0.0

Aceptable               0.4

Meritorio               0.6 o más


Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, así como la cantidad de dinero que recibirá el usuario.*/

#include <iostream>

using namespace std;

int main () {
    double puntuacion, dinero;

    string nivel;

    cout << "Introduce la puntacion del empleado (0.0, 0.4, 0.6) o más )"; cin >> puntuacion;

    if (puntuacion == 0.0) {
        nivel = "Inaceptable";
        dinero = 0.0;
    } else if (puntuacion == 0.4) {
        nivel = "Aceptable";
        dinero = 1000 * puntuacion;
    } else if (puntuacion >= 0.6) {
        nivel = "Meritorio";
        dinero = 1000 * puntuacion;
    } else {
        cout << "Puntuacion no valida " << "\n";
        return 1;
    }

    cout << "Nivel de rendimiento: " << nivel << "\n";
    cout << "Dinero recibido: " << dinero << "\n";

    return 0;
}