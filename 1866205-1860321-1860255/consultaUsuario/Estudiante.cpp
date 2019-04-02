#include "Estudiante.h"

Estudiante::Estudiante() {
}

Estudiante::Estudiante(int cedula, string nombre, string apellido, int codigo) {
	this->cedula = cedula;
	this->nombre = nombre;
	this->apellido = apellido;
	this->codigo = codigo;
}

Estudiante::~Estudiante() {
}

