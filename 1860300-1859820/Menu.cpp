/*
 * Menu.cpp
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#include "Menu.h"
#include "Common.h" // LIbreria con namespace, como std

#include <limits>
#include <iostream>


Menu::Menu() {
	// Crear Profesores
	this->profesores.push_back(Profesor("Ivan", "Galindo", 123456, 'M', 123456, true, 12349, 645, "Master"));
	this->profesores.push_back(Profesor("Maria", "Lara", 12126, 'M', 123486, true, 1228, 5874, "PhD."));

	// Crear Estudiantes
	this->estudiantes.push_back(Estudiante("Ivan", "Marquez", 123456, 'M', 123456, 23, true, 1234, 2, 2711));
	this->estudiantes.push_back(Estudiante("Juan", "Villalba", 123452, 'M', 12456, 21, true, 1237, 2, 2711));
	this->estudiantes.push_back(Estudiante("Andrea", "Rosas", 123456, 'F', 123456, 22, true, 1234, 2, 2711));
	this->estudiantes.push_back(Estudiante("Diana", "Vallejo", 143456, 'M', 159456, 18, true, 1232, 2, 2711));

	// Crear Cursos
	this->cursos.push_back(Curso(1456, "IPOO", 3, 40));
	this->cursos.push_back(Curso(1356, "Interactiva", 4, 42));
	
	// En la clase no mostraba estudiantes en el curso porque no se habian matriculado
	// Asignar Profesores
	this->cursos[0].asignar(&this->profesores[0]);
	this->cursos[1].asignar(&this->profesores[1]);
	
	this->cursos[0].matricular(&this->estudiantes[0]);
	this->cursos[0].matricular(&this->estudiantes[1]);
	this->cursos[1].matricular(&this->estudiantes[2]);
	this->cursos[1].matricular(&this->estudiantes[3]);

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::menuPrincipal() {

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();
		cout << "Menu Principal \n";
		cout << "1. Consultar Estudiantes de un Curso\n";
		cout << "2. Consultar codigo del estudiante \n" ;
		cout << "6. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:
				consultarEstudiantesCurso();
			break;
			case 2:

			case 6:
				salir = true;
				cout << "Hasta Pronto";
			break;
			default:
				cout << "Selecciones una opcion valida\n";
			break;
		}
	} while (!salir);
}

void Menu::consultarEstudiantesCurso() {

	int codigoCurso;
	bool encontrar = false;

	codigoCurso = common::validarEntero("Ingrese el codigo delcurso que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < cursos.size(); i++){
		if (codigoCurso == cursos[i].getCodigo()) {  // Comparar codigos
			encontrar = true;
			if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes matriculados en el curso \n";
				break;
			} else { // Si no esta vacio, mueste los elementos del vector
				cout << "Codigo\tNombre\t\tApellido\t\tPlan\n";
				for(int j = 0; j < cursos[i].getEstudiantes().size(); j++) {
					cout << cursos[i].getEstudiantes()[j]->getCodigo() << "\t";
					cout << cursos[i].getEstudiantes()[j]->getNombre() << "\t\t";
					cout << cursos[i].getEstudiantes()[j]->getApellido() << "\t\t";
					cout << cursos[i].getEstudiantes()[j]->getPlan();
					cout << "\n";
				}
			}
		}
	}

	if(!encontrar) {
		cout << "No se encuentra el curso\n";
	}

	system("pause");
	menuPrincipal();
}

void Menu::consultarEstudiantesCodigo() {
	int codigoEstudiante;
	bool encontrar = false;

	codigoCurso = common::validarEntero("Ingrese el codigo del estudiante que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < cursos.size(); i++){
		if (codigoEstudiante == codigos[i].getCodigo()) {  // Comparar codigos
			encontrar = true;
			if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes matriculados en el curso \n";
				break;
			} else { // Si no esta vacio, mueste los elementos del vector
				cout << "Codigo\tNombre\t\tApellido\t\tPlan\n";
				for(int j = 0; j < cursos[i].getEstudiantes().size(); j++) {
					cout << cursos[i].getEstudiantes()[j]->getCodigo() << "\t";
					cout << cursos[i].getEstudiantes()[j]->getNombre() << "\t\t";
					cout << cursos[i].getEstudiantes()[j]->getApellido() << "\t\t";
					cout << cursos[i].getEstudiantes()[j]->getPlan();
					cout << "\n";
				}
			}
		}
	}

	if(!encontrar) {
		cout << "No se encuentra el curso\n";
	}
