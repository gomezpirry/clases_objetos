#include "Vendedor.h"

Vendedor::Vendedor() {}

Vendedor::~Vendedor() {}

int Vendedor::getVehiculosVendidos(){
	return this->vehiculosVendidos;
}

void Vendedor::setVehiculosVendidos(int vehiculosVendidos){
	this->vehiculosVendidos = vehiculosVendidos;
} 
int Vendedor::getMontoVenta(){
	return this->montoVenta;
}

void Vendedor::setMontoVenta(int montoVenta){
	this->montoVenta = montoVenta;
}


