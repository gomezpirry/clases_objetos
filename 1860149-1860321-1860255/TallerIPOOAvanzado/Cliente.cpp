#include "Cliente.h"

Cliente::Cliente() {
	this->vehiculosComprados = 0;
	this->montoCompra = 0;
}

Cliente::~Cliente() {
	
}

int Cliente::getVehiculosComprados(){
	return this->vehiculosComprados;
}

void Cliente::addVehiculosComprados(int vehiculosComprados){
	this->vehiculosComprados += vehiculosComprados;
} 
int Cliente::getMontoCompra(){
	return this->montoCompra;
}

void Cliente::addMontoCompra(int montoCompra){
	this->montoCompra += montoCompra;
}

