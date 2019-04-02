#include "Profesor.h"

Profesor::Profesor(){
}

Profesor::Profesor(string nombre,string apellido,int cedula,char sexo,int telefono,int edad,int codigo,string titulo)
: Persona(nombre,apellido,cedula,sexo,telefono,edad){
	this->codigo = codigo;
	this->titulo = titulo;
}

Profesor::~Profesor(){
}

void Profesor::setCodigo(int codigo){
	this->codigo = codigo;
}

void Profesor::setTitulo(string titulo){
	this->titulo = titulo;
}

int Profesor::getCodigo(){
	return codigo;
}

string Profesor::getTitulo(){
	return titulo;
}
