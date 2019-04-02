#include "Vendedor.h"

Vendedor::Vendedor() {
	// TODO Auto-generated constructor stub

}

Vendedor::Vendedor(string nombre, string apellido, int cedula,int vehiculoVendidos, int montoVendido):Persona(nombre,apellido,cedula){

	this->vehiculosVendidos=vehiculosVendidos;
	this->montoVendido=montoVendido; 

}



Vendedor::~Vendedor() {
	// TODO Auto-generated destructor stub
}


int Vendedor::Vendedor getVehiculosVendidos(){
	
	return this->vehiculosVendidos;
	
}
	
void Vendedor::Vendedorset VehiculosVendidos(int vehiculosVendidos){
	
	return this->vehiculosVendidos=vehiculosVendidos;
	
}


int Vendedor::Vendedor getMontoVendido(){
	return this->montoVendido;
}

void Vendedor::Vendedor setMontoVendido(){
	
	return this->montoVendido=montoVendido;
	
}



