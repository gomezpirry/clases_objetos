/*
* Breiner Batalla - 1866205
* Jaime Mena - 1860321
* Julian Chavarro - 1860255
*/

#include "Calculadora.h"

Calculadora::Calculadora(float a, float b){
	this->a = a;
	this->b = b;
}

Calculadora::~Calculadora(){}


float Calculadora::sumar(){
	return a + b;
}

float Calculadora::restar(){
	return a - b;
}

float Calculadora::multiplicar(){
	return a*b;
}

float Calculadora::dividir(){
	float division;
	if(b == 0){
		division = b/a;
	} else {
		division = a/b;
	}
	return division;
}

float Calculadora::modulo(){
	int c = a;
	int d = b;
	return (c%d);
}