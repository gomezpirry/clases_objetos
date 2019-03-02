#include "Cuenta.h"

Cuenta::Cuenta(){
	fondos = 1000 ;
	//consultarNumeroCuenta = numeroCuenta;
}


void Cuenta::consignacion(float cantidad) {
	numeroTransacciones++;
	fondos += cantidad;
}

int Cuenta::ConsignacionSalida(int consignacion) {
	numeroTransacciones++;
	fondos += consignacion ;
	return fondos ; 
}

bool Cuenta::retiro(float cantidad) {

	bool permitido;
	if(fondos - cantidad < 0){
		permitido = false;
	}
	else {
		fondos -= cantidad;
		numeroTransacciones++;
		permitido = true;
	}
	
	return permitido;
	
}

float Cuenta::consultaSaldo() {
	numeroTransacciones++;
	return fondos;
	
	
}

void Cuenta::guardarNumeroDeCuenta(int Numero) {
	numeroCuenta = Numero ;
}

int Cuenta::consultarTransacciones(){
	numeroTransacciones++;
	return numeroTransacciones;
}

int Cuenta::consultarNumeroCuenta(){
	numeroTransacciones++;
	return numeroCuenta;
	

}
