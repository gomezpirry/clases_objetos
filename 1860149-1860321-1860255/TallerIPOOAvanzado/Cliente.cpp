#include "Cliente.h"

Cliente::Cliente() {
	
}

Cliente::~Cliente() {
	
}

int Cliente::getVehiculosComprados(){
	return this->vehiculosComprados;
}

void Cliente::setVehiculosComprados(int vehiculosComprados){
	this->vehiculosComprados = vehiculosComprados;
} 
int Cliente::getMontoCompra(){
	return this->montoCompra;
}

void Cliente::setMontoCompra(int montoCompra){
	this->montoCompra = montoCompra;
}

