#include "Vehiculo.h"

Vehiculo::Vehiculo() {
	
}

Vehiculo::~Vehiculo() {
	
}

void Vehiculo::setNumChasis(int numChasis){
	this->numChasis = numChasis;
}

void Vehiculo::setMarca(string marca){
	this-> marca = marca;
}

void Vehiculo::setModelo(string modelo){
	this->modelo = modelo;
}

void Vehiculo::setCilindraje(float cilindraje){
	this->cilidraje = cilindraje;
}

void Vehiculo::setPrecioBaseVenta(float precioBaseVenta){
	this->precioBaseVenta = precioBaseVenta;
}

void Vehiculo::setColorVehiculo(string colorVehiculo){
	this->colorVehiculo = colorVehiculo;
}

void Vehiculo::setVienenHerramientas(bool vienenHerramientas){
	this->vienenHerramientas = vienenHerramientas;
}

int Vehiculo::getNumChasis(){
	return this->numChasis;
}

string Vehiculo::getMarca(){
	return this->marca;
}

string Vehiculo::getModelo(){
	return this->modelo;
}

float Vehiculo::getCilindraje(){
	return this->cilidraje;
}

float Vehiculo::getPrecioBaseVenta(){
	return this->precioBaseVenta;
}

string Vehiculo::getColorVehiculo() {
	return this->colorVehiculo;
}

bool Vehiculo::getVienenHerramientas(){
	return this->vienenHerramientas;
}

float Vehiculo::getPrecioVenta() {
	return this->precioVenta;
}
