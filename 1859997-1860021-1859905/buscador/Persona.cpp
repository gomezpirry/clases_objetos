/*
 * Persona.cpp
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#include "Persona.h"

Persona::Persona() {
	// TODO Auto-generated constructor stub

}

Persona::Persona(string nombre, string apellido, int cedula,
		char sexo, int telefono, int edad, bool activo){
	this->nombre = nombre;
	this->apellido = apellido;
	this->cedula = cedula;
	this->sexo = sexo;
	this->telefono = telefono;
	this->edad = edad;
	this->activo = activo;
}

Persona::~Persona() {
	// TODO Auto-generated destructor stub
}