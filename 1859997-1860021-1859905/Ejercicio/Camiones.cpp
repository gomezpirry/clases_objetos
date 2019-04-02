#include "Camiones.h"

Camiones::Camiones() {
	// TODO Auto-generated constructor stub
	
}


Camiones::Camiones(int chasis, int modelo,int cilindraje, float precio, Marca marca,int NumPuertas, int carga):Vehiculo(chasis,modelo,cilindraje,precio,marca){
	
	this->NumPuertas = NumPuertas;
	this->carga = carga; 

}


Camiones::Camiones(const Camiones &veh){
	 this->chasis = veh.chasis;

}

Camiones::~Camiones() {
	// TODO Auto-generated destructor stub
}

int Camiones::getCarga(){
	return this->carga;
}
	
int Camiones::setCarga(int carga){
	return this->carga=carga;
}


float Camiones::valor(){
	float valor = 0.0;
	valor = getPrecio() + ((getPrecio()* (getCilindraje()/100)-2)/100) + (getCarga()*1780);
		return valor;
}

