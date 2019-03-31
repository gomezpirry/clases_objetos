#include "Vendedor.h"

Vendedor::Vendedor() {
	this->vehiculosVendidos = 0;
	this->montoVenta = 0;
}

Vendedor::~Vendedor() {}

int Vendedor::getVehiculosVendidos(){
	return this->vehiculosVendidos;
}

void Vendedor::addVehiculosVendidos(int vehiculosVendidos){
	this->vehiculosVendidos += vehiculosVendidos;
} 
int Vendedor::getMontoVenta(){
	return this->montoVenta;
}

void Vendedor::addMontoVenta(int montoVenta){
	this->montoVenta += montoVenta;
}


