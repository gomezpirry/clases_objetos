
#include "Vehiculo.h"

Vehiculo::Vehiculo() {
}


Vehiculo::Vehiculo (int NroChasis, string Marcas, string Modelo, int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color) {
	this->NroChasis = NroChasis ;
	this->Marcas = Marcas ;
	this->Modelo = Modelo ;
	this->Cilindraje = Cilindraje ;
	this->PrecioBase = PrecioBase ; 
	this->ObsequioHerramienta = ObsequioHerramienta ;
	this->Color = Color ; 
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

// SETTERS
void Vehiculo::setNroChasis(int NroChasis) {
	this->NroChasis = NroChasis ; 
}

void Vehiculo::setMarca(string MarcaVehiculo) {
	 this->Marcas = MarcaVehiculo ;  
}

void Vehiculo::setModelo(string Modelo) {
	this->Modelo = Modelo ;
}

void Vehiculo::setCilindraje(int Cilindraje) {
	this->Cilindraje = Cilindraje ;
}


void Vehiculo::setPrecioBase(float PrecioBase) {
	this->PrecioBase = PrecioBase ;
}


void Vehiculo::setObsequioHerramienta(bool ObsequioHerramienta) {
	this->ObsequioHerramienta = ObsequioHerramienta ;
}

void Vehiculo::setColor(string Color) {
	this->Color = Color ; 
}
 
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

// GETTERS

int Vehiculo::getNroChasis() {
	return this->NroChasis ;
}


string Vehiculo::getMarca() {
	return this->Marcas ; 
}

string Vehiculo::getModelo() {
	return this->Modelo ; 
}


int Vehiculo::getCilindraje() {
	return this->Cilindraje ;
}

float Vehiculo::getPrecioBase() {
	return this->PrecioBase ;
}

bool Vehiculo::getObsequioHerramienta() {
	return this->ObsequioHerramienta ;
}

string Vehiculo::getColor(){
	return this->Color ;  
}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

Vehiculo::~Vehiculo(){
}
