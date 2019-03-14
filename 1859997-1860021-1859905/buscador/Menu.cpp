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
	this->estudiantes.push_back(Estudiante("Ivan", "Marquez", 123456, 'M', 123456, 23, true, 01, 2, 2711));
	this->estudiantes.push_back(Estudiante("Juan", "Villalba", 123452, 'M', 12456, 21, true, 02, 2, 2712));
	this->estudiantes.push_back(Estudiante("Andrea", "Rosas", 123456, 'F', 123456, 22, true, 03, 2, 2713));
	this->estudiantes.push_back(Estudiante("Diana", "Vallejo", 143456, 'M', 159456, 18, true, 04, 2, 2714));

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
		cout << "1. Consultar Estudiantes de un Curso  \n";                
		cout << "2. Consultar Cedula de un Estudiante \n";
		cout << "3. Consultar Codigo de un Estudiante  \n";
		cout << "4. Consultar Cursos de un Estudiante  \n";
		cout << "5. Consultar Cedula de un Profesor    \n";
		cout << "6. Consultar Cursos de un Profesor    \n";
        cout << "7. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion) {
			case 1:
				    consultarEstudiantesCurso();
			break;
			
			case 2:
			       consultarCedulaEstudiante();
			break;
			
			case 3:
			        consultarCodigoEstudiante();
			break;
			
			case 4:
			        consultarCursosEstudiante();
			break;
			
			case 7:
				salir = true;
				cout << "Hasta Pronto";
			break;
			default:
				cout << "Selecciones una opcion valida\n";
			break;
		}
	} while (!salir);
}


// consultar Estudiantes Curso____________________________________

void Menu::consultarEstudiantesCurso() {
	int codigoCurso;
	bool encontrar = false;

	codigoCurso = common::validarEntero("Ingrese el codigo de el curso que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

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
		cout << "No se encuentra el estudiante\n";
	}
}

//Consultar cedula Estudiante________________________________________________________

void Menu::consultarCedulaEstudiante(){
  
  	int cedulaEstudiante;
	  bool encontrar = false;

	cedulaEstudiante = common::validarEntero("Ingrese cedula del estudiante que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < estudiantes.size(); i++){
		if (cedulaEstudiante == estudiantes[i].getCedula()) {  // Comparar codigos
			encontrar = true;
			if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes con esta identificacion \n";
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
		        cout << "No se encuentra el estudiante\n";
	            }
  
}
//Consultar codigo Estudiante_______________________________________________  
  
 
void Menu::consultarCodigoEstudiante(){
  
  	int codigoEstudiante;
	  bool encontrar = false;

	codigoEstudiante = common::validarEntero("Ingrese codigo del estudiante que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < estudiantes.size(); i++){
		if (codigoEstudiante == estudiantes[i].getCodigo()) {  // Comparar codigos
			encontrar = true;
			if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes con este codigo \n";
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
		        cout << "No se encuentra estudiante \n";
	            }
}

//Consultar Cusos Estudiantes _________________________________________________________________
      
     
void Menu::consultarCursosEstudiante(){
    
      int codigoEstudiante;
	  bool encontrar = false;

     codigoEstudiante = common::validarEntero("Ingrese codigo del estudiante que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < cursos.size(); i++){
		encontrar = false;
	  if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes matriculados en el curso \n";
				break;
			} else { // Si no esta vacio, mueste los elementos del vector
				cout << "Codigo\tNombre\t\tApellido\t\tPlan\n";
				for(int j = 0; j < estudiantes.size(); j++) {
					if (codigoEstudiante == estudiantes[i].getCodigo()) {
					  encontrar = true;                         // Comparar codigos
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
		        cout << "No se encuentra estudiante \n";
	            }
    


      system("pause");
	  menuPrincipal();

}
