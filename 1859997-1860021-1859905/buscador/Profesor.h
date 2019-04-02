/*
 * Profesor.h
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"

class Profesor: public Persona {
private:
	int 	codigo;
	string 	titulo;
public:
	Profesor();
	Profesor(string nombre, string apellido, int cedula,
			char sexo, int telefono, int edad, bool activo,
			int codigo, string titulo);
	~Profesor();
};

#endif /* PROFESOR_H_ */