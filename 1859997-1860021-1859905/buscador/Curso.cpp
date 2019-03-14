/*
 * Curso.cpp
 *
 *  Created on: 8/03/2019
 *      Author: EstudianteUnivalle
 */

#include "Curso.h"

Curso::Curso() {

}

Curso::Curso(int codigo, string nombre, int creditos, int maximo) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->creditos = creditos;
	this->maximo = maximo;
	this->estudiantes = vector<Estudiante*>();
	this->profesor = NULL;
}

Curso::~Curso() {
	// TODO Auto-generated destructor stub
}

void Curso::asignar(Profesor* profesor) {
	this->profesor = profesor;
}

bool Curso::matricular(Estudiante* estudiante) {
	if(this->estudiantes.size() < maximo){
		this->estudiantes.push_back(estudiante);
		return true;
	} else {
		return false;
	}
}