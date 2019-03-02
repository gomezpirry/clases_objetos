/*
 * cuenta.cpp
 *
 *  Created on: 22/02/2019
 *      Author: Usuario
 */

#include "Cuenta.h"

cuenta::cuenta(){
	numero = 0;
	contrasena =" ";
	saldo = 0;



}

cuenta::cuenta(int numero, string contrasena, float saldo){
	this->numero = numero;
	this->contrasena = contrasena;
	this->saldo = saldo;


}

cuenta::~cuenta(){

}

bool cuenta::retiro(float valor){

	bool exito = false;
	if(valor <= saldo){
		saldo = saldo - valor;
		exito = true;
	}
	return 0;



}

void cuenta::consignacion(float valor){
	saldo += valor;

}
float cuenta::consultar(){
		return saldo;

	}

bool cuenta::ingresar(int numero, string contrasena){
     return this->numero == numero && this->contrasena == contrasena;

		}

	void cuenta::cambiarcontrasena(string nueva){
		this->contrasena=nueva;

	}
	
int cuenta::getnumero(){
		return numero;
	}
	
string cuenta::getcontrasena(){
		return contrasena;
	}
void borrar_pantalla()
{
system("CLS");
}
	
