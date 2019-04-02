#include "Persona.h"

Persona::Persona() {}

Persona::~Persona() {}

string Persona::getApellido()  {
	return this->apellido;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

int Persona::getCedula() {
	return this->cedula;
}

void Persona::setCedula(int cedula) {
	this->cedula = cedula;
}

string Persona::getNombre()  {
	return this->nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}
