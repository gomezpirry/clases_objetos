
#include "Profesor.h"

Profesor::Profesor() {

}


Profesor::Profesor(string nombre, string apellido, int cedula,
			char sexo, int telefono,	int edad, bool activo,
			int codigo, string titulo) : Persona(nombre, apellido, cedula,
					sexo, telefono, edad, activo) {

	this->codigo = codigo;
	this->titulo = titulo;

}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}
