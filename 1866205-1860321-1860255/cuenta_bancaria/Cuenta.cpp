#include "Cuenta.h"

Cuenta::Cuenta(string password, int numero, float saldo=0) {
	this->password = password;
	this->numero = numero;
	this->saldo = saldo;
}

Cuenta::Cuenta(){}

Cuenta::~Cuenta() {
	
}

void Cuenta::consignacion(float valor) {
	this->saldo += valor;
}

bool Cuenta::retiro(float valor) {
	bool exito = false;
	if(this->saldo >= valor) {
		this->saldo -= valor;
		exito = true;
	}
	return exito;
}

float Cuenta::consultarSaldo() {
	return this->saldo;
}

void Cuenta::cambiarPassword(string password) {
	this->password = password;
}

bool Cuenta::ingresar(string password, int numero) {
	return (this->password == password and this->numero == numero);
}