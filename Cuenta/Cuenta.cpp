#include "Cuenta.h"

Cuenta::Cuenta(){
	numero = 0;
	clave = "";
	saldo = 0;

}

Cuenta::Cuenta(int numero, string clave, float saldo){
	this->numero = numero;
	this->clave = clave;
	this->saldo = saldo;
}

Cuenta ::~Cuenta(){

}

bool Cuenta::retiro(float valor){
	bool exito = false;
	if(valor <= saldo){
		saldo = saldo - valor;
		exito = true;

	}
	return exito;
}

  void Cuenta::consignacion(float valor){
	  saldo += valor;

  }


  float Cuenta::consultar(){
	  return saldo;
  }


bool Cuenta::ingresar(int numero, string clave){

  return this-> numero == numero && this-> clave == clave;

}


  void Cuenta::cambiarClave(string nueva){
       this-> clave = nueva;
	}
	
int Cuenta::getnumero(){
	return numero;
}
string Cuenta::getclave(){
	return clave;
}

float Cuenta::getsaldo(){
return saldo ; 
}


