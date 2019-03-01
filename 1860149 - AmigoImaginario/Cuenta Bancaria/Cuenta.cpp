#include "Cuenta.h"
#include "Menu.h"
#include <iostream>

Cuenta::Cuenta(){
	numero = 0;
	clave = "";
	saldo = 0;
}

Cuenta::Cuenta(int numero,string clave,float saldo = 0){
	this -> numero = numero;
	this -> clave = clave;
	this -> saldo = saldo;
}

Cuenta::~Cuenta(){
}

bool Cuenta::retiro(float valor){
	bool Exito = false;
	if(valor <= saldo){
		saldo = saldo - valor;
		Exito = true;
	}return Exito;
	
}

float Cuenta::consignacion(float valor){
	return saldo += valor;
}

float Cuenta::consultar(){
	return saldo;
}


bool Cuenta::ingresar(int ID1, string clave1){
	if(ID1 == numero && clave1 == clave ){
		return true;
	}return false;
}

string Cuenta::cambiar(string nueva){
	this -> clave = nueva;
}

