
#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Curso.h"
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

class Menu {
	private:
		vector<Profesor> profesores = vector<Profesor>();
		vector<Estudiante> estudiantes = vector<Estudiante>();
		vector<Curso> cursos = vector<Curso>();
	
	public:
		Menu();
		~Menu();
		void menuPrincipal();
		void ConsultarEstudiantesCurso() ;
		void ConsultarEstudiantePorCedula () ;
		void ConsultarEstudiantePorCodigo () ;
		void ConsultarProfesorPorCedula () ;
		void ConsultarCursosDeProfesor () ;
}; 

#endif 
