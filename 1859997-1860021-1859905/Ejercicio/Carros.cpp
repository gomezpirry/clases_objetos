#include "Carros.h"

Carros::Carros() {
	// TODO Auto-generated constructor stub

}


Carros::Carros(int chasis, int modelo,int cilindraje, int precio, Marca marca, int NumPuertas):Vehiculo(chasis,modelo,cilindraje,precio,marca){
	this->NumPuertas = NumPuertas;	
}


Carros::Carros(const Carros &veh){
	 this->chasis = veh.chasis;

}




Carros::~Carros() {
	// TODO Auto-generated destructor stub
}


float Carros::valor(){
	float valor = 0.0;
		valor = getPrecio() + ((getPrecio()* (getCilindraje()/100)-1)/100);
		return valor;
	
}

