#ifndef MENU_H
#define MENU_H

#include "Estudiante.h"
#include "Profesor.h"
#include "Curso.h"
#include <string>
using namespace std;

class Menu {
private:
	int opcion;
	string error="";
	vector<Profesor> profesores;
	vector<Estudiante> estudiantes;
	vector<Curso> cursos;
public:
	Menu();
	~Menu();
	void menuPrincipal();
	void revisarError();
	void menuDocente();
	void menuEstudiante();
	void menuCurso();
	void mostrarInformacionDocente(int posicion);
	void mostrarInformacionEstudiante(int posicion);
	void mostrarInformacionCurso(int posicion);
};

#endif

