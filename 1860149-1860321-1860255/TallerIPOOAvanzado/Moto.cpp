#include "Moto.h"

Moto::Moto() {
	
}

Moto::~Moto() {
	
}


void Moto::calcularPrecioVenta(){
	if(cilidraje >= 100){
		precioVenta = precioBaseVenta + ((3 * cilidraje) * 2000);
	}
	if(cilidraje < 100){
		precioVenta = precioBaseVenta + ((1.5 * cilidraje) * 2000);
	}
}
