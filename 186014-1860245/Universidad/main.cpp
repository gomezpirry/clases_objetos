#include "Profesor.h"
#include "Estudiante.h"
#include "Curso.h"
#include "Menu.h"

#include <iostream>
using namespace std;

int main(){
	
	Menu M;
	
	M.agregarProfesor();
	M.agregarEstudiante();
	M.agregarCurso();
	M.menuPrincipal();
	
	
	return 0;
}
