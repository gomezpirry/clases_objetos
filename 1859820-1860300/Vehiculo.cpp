#include <iostream>

#include "Vehiculo.h"

using namespace std;

Vehiculo::Vehiculo(){
	
}

// GET 
int Vehiculo::getCilindraje(){
	return Cilindraje;
}

string Vehiculo::getMarca(){
	return this->Marca;
}

int Vehiculo::getModelo(){
	return Modelo;
}

int Vehiculo::getNumeroChasis(){
	return NumeroChasis;
}

float Vehiculo::getPrecioBaseVenta(){
	return PrecioBaseVenta;
}

//SET 

void Vehiculo::setCilindraje(int Cilindraje){
	this->Cilindraje = Cilindraje ;
}

void Vehiculo::setMarca(string Marca){
	this->Marca = Marca;
}

void Vehiculo::setModelo(int Modelo){
	this->Modelo = Modelo;
}

void Vehiculo::setNumeroChasis(int NumeroChasis){
	this->NumeroChasis = NumeroChasis;
}

void Vehiculo::setPrecioBaseVenta(float PrecioBaseVenta){
	this->PrecioBaseVenta = PrecioBaseVenta;
}







