#include <iostream>
using namespace std;

/*Desarrolle una aplicación en C++ que permita ingresar la cantidad de estudiantes de un curso,
para luego pedir una nota por cada alumno. Finalmente debe mostrar la siguiente información: 
(Considerar nota aprobatoria de 13)

Informe:

Mayor Nota:

Menor Nota:

Promedio del Curso:

Cantidad de Aprobados:

Porcentaje de Aprobados:

Cantidad de Desaprobados:

Porcentaje de Desaprobados:*/

int main() {
	int  nota, notaMayor = 0, notaMenor = 21, promedio, alumnosAprobados = 0, alumnosDesaprobados = 0, notaSuma = 0;

	double porcentajeAprobados, porcentajeDesaprobados, cantidadEstudiantes;

	cout << "Ingrese la cantidad de estudiantes: "; cin >> cantidadEstudiantes;

	for (int i = 1; i <= cantidadEstudiantes; i++) {
		cout << "Ingrese la nota del estudiante " << i << ": "; cin >> nota;

		notaSuma = notaSuma + nota;

		if (nota > notaMayor) {
			notaMayor = nota;
		}
		
		if (nota < notaMenor) {
			notaMenor = nota;
		}
		
		if ( nota >= 13) {
			alumnosAprobados = alumnosAprobados + 1;
		} else {
			alumnosDesaprobados += 1;
		}

	}

	promedio = notaSuma / cantidadEstudiantes;
	porcentajeAprobados = (alumnosAprobados / cantidadEstudiantes) * 100;
	porcentajeDesaprobados = (alumnosDesaprobados / cantidadEstudiantes) * 100;

	cout << "\n";
	cout << "------- INFORME --------" << endl;
	cout << "MAYOR NOTA: " << notaMayor << endl;
	cout << "MENOR NOTA: " << notaMenor << endl;
	cout << "PROMEDIO DEL CURSO: " << promedio  << endl;
	cout << "CANTIDAD APROBADOS: " << alumnosAprobados << endl;
	cout << "CANTIDAD DESAPROBADOS: " << alumnosDesaprobados << endl;
	cout << "PORCENTAJE  APROBADOS: " << porcentajeAprobados << " %" << endl;
	cout << "PORCENTAJE DESAPROBADOS: " << porcentajeDesaprobados <<" %" << endl;
	

	
}

