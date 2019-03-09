#include "Curso.h"

Curso::Curso() {
	
}

Curso::Curso(int codigo, string nombre, Profesor* profe) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->profe = profe;
}

Curso::~Curso() {
	
}

