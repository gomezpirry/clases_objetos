
#include "Menu.h"
#include "Common.h" // LIbreria con namespace, como std

#include <limits>
#include <iostream>


Menu::Menu() {
	// Crear Profesores
	this->profesores.push_back(Profesor("Jorge", "Galindo", 1145, 'M', 321321, 40, true, 5687, "Master")) ; 
	this->profesores.push_back(Profesor("Maria", "Marttiz", 1146, 'F', 313639, 25, true, 5688, "Ingeniera")) ;
	this->profesores.push_back(Profesor("Damin", "Clavijo", 1147, 'M', 312456, 30, true, 5689, "Ingeniero")) ;

	// Crear Estudiantes
	this->estudiantes.push_back(Estudiante("Angie", "Marquez", 1007, 'F', 123456, 23, true, 1234, 2, 2711));
	this->estudiantes.push_back(Estudiante("Maria", "Holguin", 1008, 'F', 12456, 21, true, 1235, 2, 2711));
	this->estudiantes.push_back(Estudiante("Luisa", "Rosasan", 1009, 'F', 123456, 22, true, 1236, 2, 2711));
	this->estudiantes.push_back(Estudiante("Carlos", "Vallejo", 1010, 'M', 159456, 18, true, 1237, 2, 2711));

	// Crear Cursos
	this->cursos.push_back(Curso(7818, "   IPOO", 3, 40)) ;
	this->cursos.push_back(Curso(2711, "Interactiva", 4, 42)) ;
	this->cursos.push_back(Curso(7894, "CALCULO II", 4, 40)) ;
	this->cursos.push_back(Curso(7895, "ALBEBRA I ", 3, 30)) ;
	
	
	// En la clase no mostraba estudiantes en el curso porque no se habian matriculado
	// Asignar Profesores
	this->cursos[0].asignar(&this->profesores[0]) ;
	this->cursos[1].asignar(&this->profesores[1]) ;
	this->cursos[2].asignar(&this->profesores[2]) ;
	this->cursos[3].asignar(&this->profesores[2]) ;
	
	// Estudiantes del curso IPOO
	this->cursos[0].matricular(&this->estudiantes[0]);
	this->cursos[0].matricular(&this->estudiantes[1]);
	
	// Estudiantes del curso CALCULO
	this->cursos[2].matricular(&this->estudiantes[0]);
	this->cursos[2].matricular(&this->estudiantes[1]);
	this->cursos[2].matricular(&this->estudiantes[2]);
	
	// Estudiantes del curso de interactivas
	this->cursos[1].matricular(&this->estudiantes[0]);
	this->cursos[1].matricular(&this->estudiantes[1]);
	this->cursos[1].matricular(&this->estudiantes[2]);	
	this->cursos[1].matricular(&this->estudiantes[3]);

	// Estudiantes del curso de Algebra
	this->cursos[3].matricular(&this->estudiantes[0]);
	this->cursos[3].matricular(&this->estudiantes[1]);

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

// Menu principal con funcione permitidas
void Menu::menuPrincipal() {

	int opcion;
	bool salir = false;

	do {
		system("cls");
		cin.clear();
		cout << "\tBienvenidos al sistema de busqueda de informacion \n" ;
		cout << "\t\t\tMenu Principal \n\n\n";
		cout << " 1. Consultar Estudiantes de un Curso \n";
		cout << " 2. Consultar Estudiante mediane su Cedula \n";
		cout << " 3. Consultar Estudiante mediane su Codigo \n";
		cout << " 4. Consultar Profesor  mediane su Cedula \n";
		cout << " 5. Consultar Cursos que tiene un Profesor \n";
		cout << " 6. Salir \n";
		
		// PEdir su opcion y evaluar si es un tipo de dato correspondiente o permitido
		opcion = common::validarEntero("\nSeleccione una opcion: \n ");


		switch(opcion) {
			case 1:
				ConsultarEstudiantesCurso() ; // Funcion que devuelve la informacion de los estudiantes de un curso  
			break;
			
			case 2:
				ConsultarEstudiantePorCedula () ; // Funcion que devuelve la informacion del estudiante mediante su cedula
			break;
			
			case 3:
				ConsultarEstudiantePorCodigo() ; // Funcion que devuelve la informacion del estudiante mediante su codigo
			break;
			
			case 4:
				ConsultarProfesorPorCedula () ; // Funcion que devuelve la informacion del profesor mediante su cedula
			break;
			
			case 5:
				ConsultarCursosDeProfesor () ; // Funcion que devuelve la informacion de los cursos de un profesor mediante su cedula
			break;
			
			case 6: // Salir del programa
				salir = true;
				system("cls") ;
				cout << "\n\Gracias por usar nuestro servicio \n" ;
				exit(1) ;
			break;
			
			default:  // Opcion incorrecta
				system("cls") ;
				cout << "\n\nOpcion Incorrecta \n" ;
				system("pause") ;
				break;
		}
	} while (!salir) ;
}


// Consultar la informacion de un curso mediante su codigo
void Menu::ConsultarEstudiantesCurso() {
	int codigoCurso ; // VAriable para guardar el datos ingresado
	bool encontrar = false;

	codigoCurso = common::validarEntero("\nIngrese el codigo del curso que desea buscar: "); // Funcion del namespace common, revisar archivo Common.h y Common.cpp

	for(int i = 0; i < cursos.size(); i++){
		if (codigoCurso == cursos[i].getCodigo()) {  // Comparar codigos
			encontrar = true;
			if(cursos[i].getEstudiantes().empty()) { // verificar si tiene elementos el vector
				cout << "No hay estudiantes matriculados en el curso \n";
				break;
			} else { // Si no esta vacio, mueste los elementos del vector
				system("cls") ;
				cout << "\n Estudiante que pertenecen al codigo del curso ingresado \n\n" ;
				cout << "\nCodigo\tNombre\t\tApellido\t\tPlan\n";
				for(int j = 0; j < cursos[i].getEstudiantes().size(); j++) {
					cout << cursos[i].getEstudiantes()[j]->getCodigo() << "\t";
					cout << cursos[i].getEstudiantes()[j]->getNombre() << "\t\t";
					cout << cursos[i].getEstudiantes()[j]->getApellido() << "\t\t";
					cout << "\t" << cursos[i].getEstudiantes()[j]->getPlan() ;
					cout << "\n";
				}
			}
		}
	}
	// String si no encontro nada
	if(!encontrar) {
		cout << "No se encuentra el curso\n";
	}

	system("pause");
	menuPrincipal();
}


// Consultar informacion del estudiante mediante si cedula
void Menu::ConsultarEstudiantePorCedula() {
	int Cedula ;
	bool Encontrar = false ;

	Cedula = common::validarEntero("\nIngrese la cedula del estudiante que desea buscar: ") ;

	
	for (int i=0 ; i<cursos.size() ; i++) {
		if (Encontrar == false) {
			for (int m=0 ; m<cursos[i].getEstudiantes().size() ; m++ ){
				if(cursos[i].getEstudiantes()[m]->getCedula() == Cedula) { // Buscar la cedula en los estudiantes
					system("cls") ;
					cout << "\n\tInformacion Basica del estudiante \n\n" ;
					cout << "Nombre \t\tApellido \t\tCedula  \t\tPlan  \t\tCodigo \n" ;
					cout << cursos[i].getEstudiantes()[m]->getNombre() << "\t\t";
					cout << cursos[i].getEstudiantes()[m]->getApellido() << "\t\t\t";
					cout << cursos[i].getEstudiantes()[m]->getCedula() << "\t\t\t";
					cout << cursos[i].getEstudiantes()[m]->getPlan() << "\t\t";
					cout << cursos[i].getEstudiantes()[m]->getCodigo() << "\n";								
					
					cout << "\n\n\tCursos Matriculados \n" ;
					cout << "\t Nombre \t\tCodigo \t\tCreditos \n " ;
					for (int j=0 ; j<cursos.size() ; j++) { // Imprimir los cursos donde esta es estudiante matriculado
						for (int a=0 ; a<cursos[j].getEstudiantes().size() ; a++) {
							if (cursos[j].getEstudiantes()[a]->getCedula() == Cedula) {
								cout << cursos[j].getNombre() << "\t\t\t" ;
								cout << cursos[j].getCodigo() << "\t\t" ;
								cout << cursos[j].getCreditos() << "\n" ;		
							}
						}
					}
					Encontrar = true ; // Si lo encontramos lo cambio a true para que sepa que si existe
					system("pause") ;
					break ;
				}			
			}
		}
	}

	// Si no lo encontro devulelva este string
	if (!Encontrar) {
		cout << "No se encuentra el curso\n";
		system("pause") ;
	}
}


// Consultar informacion del estudiante mediante su codigo
void Menu::ConsultarEstudiantePorCodigo() {
	int Codigo ;
	bool Encontrar = false ;

	Codigo = common::validarEntero("\nIngrese el codigo del estudiante que desea buscar: ") ;

	
	for (int i=0 ; i<cursos.size() ; i++) {
		if (Encontrar == false) {
			for (int m=0 ; m<cursos[i].getEstudiantes().size() ; m++ ){
				if(cursos[i].getEstudiantes()[m]->getCodigo() == Codigo) { // Buscar el codigo del  estudiante
					system("cls") ;
					cout << "\n\tInformacion Basica del estudiante \n\n" ;
					cout << "Nombre \t\tApellido \t\tCedula  \t\tPlan  \t\tCodigo \n" ;
					cout << cursos[i].getEstudiantes()[m]->getNombre() << "\t\t";
					cout << cursos[i].getEstudiantes()[m]->getApellido() << "\t\t\t";
					cout << cursos[i].getEstudiantes()[m]->getCedula() << "\t\t\t";
					cout << cursos[i].getEstudiantes()[m]->getPlan() << "\t\t";
					cout << cursos[i].getEstudiantes()[m]->getCodigo() << "\n";								
					
					cout << "\n\n\tCursos Matriculados \n" ;
					cout << "\t Nombre \t\tCodigo \t\tCreditos \n " ;
					for (int j=0 ; j<cursos.size() ; j++) { // Imprimir los cursos donde esta es estudiante matriculado
						for (int a=0 ; a<cursos[j].getEstudiantes().size() ; a++) {
							if (cursos[j].getEstudiantes()[a]->getCodigo() == Codigo) {
								cout << cursos[j].getNombre() << "\t\t\t" ;
								cout << cursos[j].getCodigo() << "\t\t" ;
								cout << cursos[j].getCreditos() << "\n" ;		
							}
						}
					}
					Encontrar = true ; // Si lo encontramos lo cambio a true para que sepa que si existe
					system("pause") ;
					break ;
				}			
			}
		}
	}

	// Si no lo encontro devulelva este string
	if (!Encontrar) {
		cout << "No se encuentra el curso\n";
		system("pause") ;
	}
}

// Consultar informacion del profesor mediante si cedula
void Menu::ConsultarProfesorPorCedula() {
	int Cedula ;
	bool Encontrar = false ;

	Cedula = common::validarEntero("\nIngrese la cedula del profesor que desea buscar: ") ;

	
	if (Encontrar == false) {
		for (int j=0 ; j<profesores.size() ; j++) {
			if(profesores[j].getCedula() == Cedula) { // Buscar la cedula del profesor elegido
				system("cls") ;
				cout << "\n\tInformacion del profesor elegido \n\n" ;
				cout << "Nombre \t\tApellido \t\tCedula  \t\tSexo  \t\tTelefono  \t\Titulo \n" ;
				cout << cursos[j].getProfesor()->getNombre() << "\t\t";
				cout << cursos[j].getProfesor()->getApellido() << "\t\t\t";
				cout << cursos[j].getProfesor()->getCedula() << "\t\t\t";		
				cout << cursos[j].getProfesor()->getSexo() << "\t\t";
				cout << cursos[j].getProfesor()->getTelefono() << "\t\t";		
				cout << cursos[j].getProfesor()->getTitulo() << "\n";
					
						
				cout << "\n\n\tCursos Asignado \n" ;
				cout << "\t Nombre \t\tCodigo \t\tCreditos \n " ;
				for (int i=0 ; i<cursos.size() ; i++) { // Imprimir los cursos asignados
					if (cursos[i].getProfesor()->getCedula() == Cedula) {
						cout << cursos[i].getNombre() << "\t\t\t" ;
						cout << cursos[i].getCodigo() << "\t\t" ;
						cout << cursos[i].getCreditos() << "\n" ;		
					}
				}
				Encontrar = true ;
				system("pause") ;
				break ;								
			} 
		}
	}

	// Si no lo encontro devulelva este string
	if (!Encontrar) {
		cout << "No se encuentra el curso\n";
		system("pause") ;
	}
}

// Consultar solo los cursos que tiene un profesor mediante si cedula
void Menu::ConsultarCursosDeProfesor() {
	int Cedula ;
	bool Encontrar = false ;

	Cedula = common::validarEntero("\nIngrese la cedula del profesor que desea buscar: ") ;

	
	if (Encontrar == false) {
		for (int j=0 ; j<profesores.size() ; j++) {
			if(profesores[j].getCedula() == Cedula) { // Buscar en la lista de profesores cual nombre coincide con el ingresado	
				system("cls") ;
				cout << "\n\n\tCursos Asignado \n" ;
				cout << "\t Nombre \t\tCodigo \t\tCreditos \n " ;
				for (int i=0 ; i<cursos.size() ; i++) { // Imprimir sus cursos asignados
					if (cursos[i].getProfesor()->getCedula() == Cedula) {
						cout << cursos[i].getNombre() << "\t\t\t" ;
						cout << cursos[i].getCodigo() << "\t\t" ;
						cout << cursos[i].getCreditos() << "\n" ;		
					}
				}
				Encontrar = true ;
				system("pause") ;
				break ;								
			} 
		}
	}

	// Si no lo encontro devulelva este string
	if (!Encontrar) {
		cout << "No se encuentra el curso\n";
		system("pause") ;
	}
}

