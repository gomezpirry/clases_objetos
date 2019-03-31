#include "Venta.h"

Venta::Venta() {
	
}

Venta::~Venta() {}

int Venta::getIdentificador(){
	return this->identificador;
}

vector<Vehiculo>* Venta::getVehiculos(){
	return this->vehiculos;
}

void Venta::setVehiculos(vector<Vehiculo>* vehiculos){
	this->vehiculos = vehiculos;
}

Vendedor* Venta::getVendedor(){
	return this->vendedor;
}

void Venta::setVendedor(Vendedor* vendedor){
	this->vendedor = vendedor;
}

Cliente* Venta::getCliente(){
	return this->cliente;
}

void  Venta::setCliente(Cliente* cliente){
	this->cliente = cliente;
}
