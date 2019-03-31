#include "Persona.h"

//constructor

Persona::Persona() {


}



//getters

string Persona::getApellido() {
	return Apellido;

}
int Persona::getCedula() {
	return Cedula;
}

string Persona::getNombre(){
	return Nombre;
}


int Persona::getTelefono() {
	return Telefono;
}
//setters
void Persona::setApellido(string apellido) {
	this->Apellido;
}



void Persona::setCedula(int cedula) {
	this->Cedula;
}


void Persona::setNombre(string nombre) {
	this->Nombre;
}



void Persona::setTelefono(int telefono) {
	this->Telefono;
}


