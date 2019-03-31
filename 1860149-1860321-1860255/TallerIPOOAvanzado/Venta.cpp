#include "Venta.h"

Venta::Venta() {
	this->identificador = rand() % 1000;
}

Venta::~Venta() {}

int Venta::getIdentificador(){
	return this->identificador;
}

void Venta::setMotos(vector<Moto>* motos){
	this->motos = motos;
}

vector<Moto>* Venta::getMotos(){
	return this->motos;
}

void Venta::setCoches(vector<Coche>* coches){
	this->coches = coches;
}

vector<Coche>* Venta::getCoches(){
	return this->coches;
}

void Venta::setCamiones(vector<Camion>* camiones){
	this->camiones = camiones;
}

vector<Camion>* Venta::getCamiones(){
	return this->camiones;
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
