/*
 * Estudiante.h
 *
 *  Created on: 1/03/2019
 *      Author: Usuario
 */

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "Persona.h"

class Estudiante : public Persona {
private:
	int codigo;
	int semestreActual;

public:
	Estudiante();
	Estudiante(int cedula, string nombre, string apellido);
	~Estudiante();

	int getCodigo()  {
		return codigo;
	}

	void setCodigo(int codigo) {
		this->codigo = codigo;
	}

	int getSemestreActual()  {
		return semestreActual;
	}

	void setSemestreActual(int semestreActual) {
		this->semestreActual = semestreActual;
	}
};

#endif /* ESTUDIANTE_H_ */
