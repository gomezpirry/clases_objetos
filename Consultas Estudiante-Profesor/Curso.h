/*
 * Curso.h
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#ifndef CURSO_H_
#define CURSO_H_

#include <vector>

#include "Profesor.h"
#include "Estudiante.h"

using namespace std;

class Curso {
private:
	int 		codigo;
	string		nombre;
	int 		creditos;
	int 		maximo;

	Profesor*    		profesor;
	vector<Estudiante*> estudiantes;

public:
	Curso();
	Curso(int codigo, string nombre, int creditos, int maximo);
	~Curso();
	
	void asignar(Profesor* profesor);
	bool matricular(Estudiante* estudiante);

	// in-line methods
	int getCodigo() {
		return this->codigo;
	}

	vector<Estudiante*> getEstudiantes() {
		return estudiantes;
	}
		
	Profesor* getProfesor() {
		return this->profesor;
	}
};

#endif /* CURSO_H_ */
