#include "Cuenta.h"
#include <string>


Cuenta::Cuenta(){
	numero = 0;
	clave = " ";
	saldo = 0;

}

Cuenta::Cuenta(int numero, string clave, float saldo){
	this->numero=numero;
	this->clave=clave;
	this->saldo=saldo;
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
	
int Cuenta::getNumero(){
	return numero;
}
string Cuenta::getClave(){
	return clave;
}

float Cuenta::getSaldo(){
return saldo ; 
}

void Cuenta::setNumero(int numero){
        this->numero=numero;
}

void Cuenta::setClave(string clave){
        this->clave=clave;
}
 
void Cuenta::setSaldo(float saldo){
        this->saldo=saldo;
}














