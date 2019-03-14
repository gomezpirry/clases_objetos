/*
 * Estudiante.h
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "Persona.h"

class Estudiante : public Persona {
private:
	int	 codigo;
	int  semestre;
	int  plan;
public:
	Estudiante();
	Estudiante(string nombre, string apellido, int cedula,
				char sexo, int telefono, int edad, bool activo,
				int codigo, int semestre, int plan);
	~Estudiante();

	int getCodigo()  {
		return codigo;
	}

	int getPlan()  {
		return plan;
	}

	int getSemestre() {
		return semestre;
	}
};

#endif /* ESTUDIANTE_H_ */