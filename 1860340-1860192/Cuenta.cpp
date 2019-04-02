
#include "Cuenta.h"
#include "Usuarios.h"


Cuenta::Cuenta () {
	numero = 0 ;
	contrasena = "Hola" ;
	saldo = 0 ;
}

Cuenta::Cuenta(int numero, string contrasena, float saldo = 0) {
	this-> numero = numero ;
	this-> contrasena = contrasena ;
	this-> saldo = saldo ;

}

bool Cuenta::retiro(float valor) {
	bool exito = false ;
	if (valor <= saldo) {
		this->saldo -= valor ;
		exito = true ;
	}
	return exito ;
}


void Cuenta::consigacion(float valor) {
	saldo += valor ;
}


float Cuenta::consultar() {
	return saldo ;
}

bool Cuenta::ingresar(string contrasena, int numero) {
	bool ingreso = false ;
	return this-> numero == numero && this->contrasena == contrasena ;
}

void Cuenta::cambiarContrasena(string nueva) {
	this->contrasena = nueva ;
}

void Cuenta::setNumero(int numero) {
	this->numero == numero ;
}

void Cuenta::setContrasena(string contrasena){
	this->contrasena == contrasena ;
}



