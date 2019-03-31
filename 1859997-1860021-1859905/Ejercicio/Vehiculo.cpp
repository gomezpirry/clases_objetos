#include "Vehiculo.h"

Vehiculo::Vehiculo() {
	
}

Vehiculo::Vehiculo(int chasis, int modelo,int cilindraje,float precio, Marca marca){
	this->chasis=chasis;
	this->modelo=modelo;
	this->cilindraje=cilindraje;
	this->precio=precio;
	this->marca=marca;
}

Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}



float Vehiculo::getPrecio(){
	return this->precio;
}
	
float Vehiculo::setPrecio(float precio){
	return this->precio=precio;
}



int Vehiculo::getCilindraje(){
	return this->cilindraje;
}
	
int Vehiculo::setCilindraje(int cilindraje){
	return this->cilindraje=cilindraje;
}

int Vehiculo::setChasis(int chasis){
	return this->chasis=chasis;
}


int Vehiculo::getchasis(){
	return this->chasis;
}


int Vehiculo::setModelo(int modelo){
	return this->modelo=modelo;
}


int Vehiculo::getModelo(){
	return this->modelo;
}




