#include "Clientes.h"

Clientes::Clientes() {
	// TODO Auto-generated constructor stub

}


Clientes::Clientes(string nombre, string apellido, int cedula,int VehiculosComprados,int montoComprado):Persona(nombre,apellido,cedula){
	
	this->VehiculosComprados=VehiculosComprados;
	this->montoComprado=montoComprado;
}


Clientes::~Clientes() {
	// TODO Auto-generated destructor stub
}



int Clientes::Clientes getVehiculosComprados(){
	return this->vehiculosComprados;
}



void Clientes::Clientes setVehiculosComprados(int VehiculosComprados){
	return this->VehiculosComprados=VehiculosComprados;
	
}



int Clientes::Clientes getMontoVendido(){

	return this->montoVendido;
}


void Clientes::Clientes setMontoVendido(int montoVendido){
	return this-> montovendido=montoVendido;
	
}
