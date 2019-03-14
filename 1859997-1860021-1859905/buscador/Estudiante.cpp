/*
 * Estudiante.cpp
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#include "Estudiante.h"

Estudiante::Estudiante() {
	// TODO Auto-generated constructor stub

}

Estudiante::Estudiante (string nombre, string apellido, int cedula,
		char sexo, int telefono, int edad, bool activo,
		int codigo, int semestre, int plan) : Persona(nombre, apellido, cedula,
				sexo, telefono, edad, activo) {

	this->codigo = codigo;
	this->semestre = semestre;
	this->plan = plan;
}

Estudiante::~Estudiante() {
	// TODO Auto-generated destructor stub
}