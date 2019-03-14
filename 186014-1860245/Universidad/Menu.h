#ifndef Menu_h
#define Menu_h

#include "Profesor.h"
#include "Estudiante.h"
#include "Curso.h"
#include <vector>
#include <string>

class Menu{
	private:
		vector<Estudiante> estudiantes;
		vector<Curso> cursos;
		vector<Profesor> profesores;
		Profesor P;
		Estudiante E;
		Curso C;
	public:
		Menu();
		~Menu();
		vector<Estudiante> getListaEstudiantes();
		void menuPrincipal();
		void menuMatricula();
		void menuAsignar();
		void menuProfesor();
		void menuEstudiante();
		void menuCursos();
		void agregarProfesor();
		void agregarEstudiante();
		void agregarCurso();
		void consultarEstudiante();
		void consultarCurso();
		void consultarCursoEstu();
		void consultarCursoEstudiantes();
		void consultarCursoProfe();
		void consultarEstudiantesProfe();
		void consultarProfesor();
};
#endif
