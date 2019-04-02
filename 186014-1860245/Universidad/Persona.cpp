#include "Persona.h"

Persona::Persona(){
}

Persona::Persona(string nombre,string apellido,int cedula,char sexo,int telefono,int edad){
	this->nombre = nombre;
	this->apellido = apellido;
	this->cedula = cedula;
	this->sexo = sexo;
	this->telefono = telefono;
	this->edad = edad;
}

Persona::~Persona(){
}

void Persona::setNombre(string nombre){
	this->nombre = nombre;
}

void Persona::setApellido(string apellido){
	this->apellido = apellido;
}

void Persona::setCedula(int cedula){
	this->cedula = cedula;
}

void Persona::setSexo(char sexo){
	this->sexo = sexo;
}

void Persona::setTelefono(int telefono){
	this->telefono = telefono;
}

void Persona::setEdad(int edad){
	this->edad = edad;
}

string Persona::getNombre(){
	return nombre;
}

string Persona::getApellido(){
	return apellido;
}

int Persona::getCedula(){
	return cedula;
}

char Persona::getSexo(){
	return sexo;
}

int Persona::getTelefono(){
	return telefono;
}

int Persona::getEdad(){
	return edad;
}
