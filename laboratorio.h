/*
 * laboratorio.h
 *
 *  Created on: 14/03/2019
 *      Author: jcami
 */

#ifndef LABORATORIO_H_
#define LABORATORIO_H_
#include "persona.h";
#include "articulos.h";

#include <vector>
using namespace std;

void Profesor;
void Estudiante;
void Articulo;

class laboratorio {
private:
	vector<Profesor>profesores;
	vector<Estudiante>estudiantes;
	vector<Articulo>articulos;
public:
	laboratorio();
	~laboratorio();

	vector<Articulo> getArticulos() {
		return articulos;
	}

	vector<Estudiante> getEstudiantes() {
		return estudiantes;
	}

	vector<Profesor> getProfesores() {
		return profesores;
	}
};



#endif /* LABORATORIO_H_ */
