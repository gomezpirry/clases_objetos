#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu() {
	//Inicializamos las clases
	profesores.push_back(Profesor(1234, "Geronimo", "Valdez"));
	profesores.push_back(Profesor(4567, "Juan", "Calderon"));
	profesores.push_back(Profesor(7890, "Carlos", "Villagran"));
	
	estudiantes.push_back(Estudiante(116, "Jaime", "Mena", 1860));
	estudiantes.push_back(Estudiante(117, "Breiner", "Batalla", 1760));
	estudiantes.push_back(Estudiante(144, "Julian", "Chavarro", 6255));
	
	cursos.push_back(Curso(1,"Calculo I",&profesores[0]));
	cursos.push_back(Curso(2,"Calculo II",&profesores[0]));
	cursos.push_back(Curso(3,"Ingles I",&profesores[1]));
	
	cursos[0].setEstudiantes(&estudiantes[0]);
	cursos[0].setEstudiantes(&estudiantes[1]);
	cursos[2].setEstudiantes(&estudiantes[1]);
	cursos[2].setEstudiantes(&estudiantes[2]);	
}

Menu::~Menu() {
	
}

void Menu::menuPrincipal(){
	do{
		system("cls");
		this->revisarError();
		
		//Nombre del programa
		cout << "Sistema Busqueda Usuario" << endl << endl;
		
		//Menu
		cout << "1. Busqueda docente" << endl;
		cout << "2. Busqueda estudiante" << endl;
		cout << "3. Busqueda curso" << endl;
		cout << "4. Salir" << endl << endl;
		
		cout << "Opcion: ";
		cin >> this->opcion;
		
		switch(this->opcion){
		case 1:
			this->menuDocente();
			break;
		case 2:
			this->menuEstudiante();
			break;
		case 3:
			this->menuCurso();
			break;
		case 4:
			//Salir -> nothing to do
			break;
		default:
			this->error = "No se reconoce la opcion seleccionada";
			break;
		}
		
	} while(this->error != "");
}

void Menu::revisarError(){
	if (this->error != ""){
		cout << error << endl << endl;
		this->error = "";
		system("pause");
		system("cls");
	}
}

void Menu::menuDocente(){
	do{
		system("cls");
		this->revisarError();
		int sizeProfesores = profesores.size();
		
		cout << "Seleccione el docente a consultar" << endl << endl;
		
		//Mostramos los profesores
		for(int i=0; i < sizeProfesores; i++){
			cout << i << ". " << profesores[i].getNombre();
			cout << " " << profesores[i].getApellido() << endl;
		}
		cout << sizeProfesores << ". Salir" << endl;
		
		cout << "\nOpcion: ";
		cin >> this->opcion;
		
		if(this->opcion >= 0 and this->opcion < sizeProfesores){
			this->mostrarInformacionDocente(this->opcion);
		} else if(this->opcion == sizeProfesores){
			break;
		} else {
			this->error = "No se reconoce la opcion seleccionada";
		}
	} while(this->error != "");
}

void Menu::mostrarInformacionDocente(int posicion){
	system("cls");
	cout << "Cedula: " << profesores[posicion].getCedula() << endl;
	cout << "Nombre completo: " << profesores[posicion].getNombre();
	cout << " " << profesores[posicion].getApellido() << endl;
	
	//Cursos que tiene el profesor
	for(int i=0; i < cursos.size(); i++){
		if(cursos[i].getProfesor()->getCedula() == profesores[posicion].getCedula()){
			cout << "Codigo curso: " << cursos[i].getCodigo() << " - ";
			cout << "Nombre curso: " << cursos[i].getNombre() << endl;
		}
	}
	
	system("pause");
	this->menuPrincipal();
}

void Menu::menuEstudiante(){
	do{
		system("cls");
		this->revisarError();
		int sizeEstudiantes = estudiantes.size();
		
		cout << "Seleccione el estudiante a consultar" << endl << endl;
		
		//Mostramos los estudiantes
		for(int i=0; i < sizeEstudiantes; i++){
			cout << i << ". " << estudiantes[i].getNombre();
			cout << " " << estudiantes[i].getApellido() << endl;
		}
		cout << sizeEstudiantes << ". Salir" << endl;
		
		cout << "\nOpcion: ";
		cin >> this->opcion;
		
		if(this->opcion >= 0 and this->opcion < sizeEstudiantes){
			this->mostrarInformacionEstudiante(this->opcion);
		} else if(this->opcion == sizeEstudiantes){
			break;
		} else {
			this->error = "No se reconoce la opcion seleccionada";
		}
	} while(this->error != "");
}

void Menu::mostrarInformacionEstudiante(int posicion){
	system("cls");
	cout << "Cedula: " << estudiantes[posicion].getCedula() << endl;
	cout << "Codigo: " << estudiantes[posicion].getCodigo() << endl;
	cout << "Nombre completo: " << estudiantes[posicion].getNombre();
	cout << " " << estudiantes[posicion].getApellido() << endl;
	
	//Cursos que tiene el estudiante
	cout << "Cursos del estudiantes:" << endl;
	for(int i=0; i < cursos.size(); i++){
		for(int j=0; j < cursos[i].getEstudiantes().size(); j++){
			if(estudiantes[posicion].getCodigo() == cursos[i].getEstudiantes()[j]->getCodigo()){
				cout << cursos[i].getNombre() << endl;
			}
		}
	}
	
	system("pause");
	this->menuPrincipal();
}

void Menu::menuCurso(){
	do{
		system("cls");
		this->revisarError();
		int sizeCursos = cursos.size();
		
		cout << "Seleccione el curso a consultar" << endl << endl;
		
		//Mostramos los profesores
		for(int i=0; i < sizeCursos; i++){
			cout << i << ". " << cursos[i].getNombre() << endl;
		}
		cout << sizeCursos << ". Salir" << endl;
		
		cout << "\nOpcion: ";
		cin >> this->opcion;
		
		if(this->opcion >= 0 and this->opcion < sizeCursos){
			this->mostrarInformacionCurso(this->opcion);
		} else if(this->opcion == sizeCursos){
			break;
		} else {
			this->error = "No se reconoce la opcion seleccionada";
		}
	} while(this->error != "");
}

void Menu::mostrarInformacionCurso(int posicion){
	system("cls");
	cout << "Codigo: " << cursos[posicion].getCodigo() << endl;
	cout << "Nombre: " << cursos[posicion].getNombre() << endl;
	cout << "Profesor: " << cursos[posicion].getProfesor()->getNombre();
	cout << " " << cursos[posicion].getProfesor()->getApellido() << endl;
	
	//Estudiantes del curso
	if(cursos[posicion].getEstudiantes().size() != 0){
		cout << "Estudiantes:" << endl;
		for(int i=0; i < cursos[posicion].getEstudiantes().size(); i++){
			cout << i+1 << ". ";
			cout << cursos[posicion].getEstudiantes()[i]->getNombre() << " ";
			cout << cursos[posicion].getEstudiantes()[i]->getApellido() << endl;
		}
	} else {
		cout << "No hay estudiantes para mostrar" << endl;
	}
	
	
	system("pause");
	this->menuPrincipal();
}
