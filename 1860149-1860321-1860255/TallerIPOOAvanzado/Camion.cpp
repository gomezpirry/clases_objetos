#include "Camion.h"

Camion::Camion(){}

Camion::~Camion(){}

void Camion::setCantPuertas(int cantPuertas){
	this->cantPuertas = cantPuertas;
}

void Camion::setCapacidadCargar(float capacidadCarga){
	this->capacidadCarga = capacidadCarga;
}

int Camion::getCantPuertas(){
	return this->cantPuertas;
}

float Camion::getCapacidadCarga(){
	return this->capacidadCarga;
}

void Camion::calcularPrecioVenta() {
	float parte1 = ((precioBaseVenta * (capacidadCarga/1000) - 2)/100);
	float parte2 = (capacidadCarga * 1780);
	precioVenta = precioBaseVenta + parte1 + parte2;
}
