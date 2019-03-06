#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"
#include "Curso.h"
#include <vector>

using namespace std;

class Profesor : public Persona {
private:
	vector<Curso>* cursos;
	
public:
	Profesor();
	Profesor(int cedula, string nombre, string apellido);
	~Profesor();
	void setCursos(vector<Curso>* cursos){
		this->cursos = cursos;
	}
};

#endif
