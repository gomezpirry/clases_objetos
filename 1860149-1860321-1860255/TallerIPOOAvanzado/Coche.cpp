#include "Coche.h"

Coche::Coche() {
	
}

Coche::~Coche() {
	
}

void Coche::setCantPuertas(int cantPuertas){
	this->cantPuertas = cantPuertas;
}

int Coche::getCantPuertas(){
	return cantPuertas;
}

void Coche::calcularPrecioVenta(){
	precioVenta = precioBaseVenta + ((precioBaseVenta * (cilidraje/1000) - 1)/100);
}

