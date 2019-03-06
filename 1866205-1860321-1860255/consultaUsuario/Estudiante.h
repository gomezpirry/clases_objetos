#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "Persona.h"
#include "Curso.h"
#include <string>
#include <vector>
using namespace std;

class Estudiante : public Persona {
private:
	int codigo;
	vector<Curso>* cursos;

public:
	Estudiante();
	Estudiante(int cedula, string nombre, string apellido, int codigo);
	~Estudiante();
	
	void setCursos(vector<Curso>* cursos){
		this->cursos = cursos;
	}

	int getCodigo()  {
		return codigo;
	}

	void setCodigo(int codigo) {
		this->codigo = codigo;
	}
};

#endif /* ESTUDIANTE_H_ */
