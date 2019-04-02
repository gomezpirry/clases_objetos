#include "Motos.h"

Motos::Motos() {


}

Motos::Motos(int chasis, int modelo,int cilindraje, float precio, Marca marca){
	this->chasis;
	this->modelo=modelo;
	this->cilindraje=cilindraje;
	this->precio=precio;
	this->marca=marca;
}


Motos::Motos(const Motos &veh){
	 this->chasis = veh.chasis;

}

Motos::~Motos() {
	// TODO Auto-generated destructor stub
}



float Motos::valor(){
	float valor = 0.0;
	if(getCilindraje() < 100){
		valor = getPrecio() + ((1,5 * getCilindraje())*2000);
		return valor;
	}else { (getCilindraje() > 100);  
				valor = getPrecio() + ((3 * getCilindraje())*2000);
				return valor;
			}
}

